import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------
-- NEVER USE THIS PIECE OF CODE FOR WRITING A REAL MONITOR (cf ARIANE 5 fail)
-- Implementation of http://shemesh.larc.nasa.gov/people/cam/publications/NASA-TM-2010-216862.pdf
-- This file needs to be preprocessed by m4 with changeword ENABLED : http://www.gnu.org/software/m4/manual/m4.html
--------------------------------------------------------------------------------


-- FIXME : what happens in case of failure recovery (reboot) ?
-- Convention chosen : the plane lags for one sampling in the same position. (that means that the former and actual position and speed are equal to the present speed).

import qualified Data.List as L

----------------------------------------
-- OWNSHIP DEFINITIONS 
----------------------------------------

extownVelocityX = externD "ownship_velocity_x" Nothing
extownVelocityY = externD "ownship_velocity_y" Nothing
extownVelocityZ = externD "ownship_velocity_z" Nothing


extownPositionX = externD "ownship_position_x" Nothing
extownPositionY = externD "ownship_position_y" Nothing
extownPositionZ = externD "ownship_position_z" Nothing

boot :: Stream Bool
boot = [True]++(false)

ownVelocityX = mux (boot) (extownVelocityX) $ [0]++extownVelocityX
ownVelocityY = mux (boot) (extownVelocityY) $ [0]++extownVelocityY
ownVelocityZ = mux (boot) (extownVelocityZ) $ [0]++extownVelocityZ

ownPositionX = mux (boot) (extownPositionX) $ [0]++extownPositionX
ownPositionY = mux (boot) (extownPositionY) $ [0]++extownPositionY
ownPositionZ = mux (boot) (extownPositionZ) $ [0]++extownPositionZ

ownPlannedVelocityX = externD "ownship_velocity_x" Nothing
ownPlannedVelocityY = externD "ownship_velocity_y" Nothing
ownPlannedVelocityZ = externD "ownship_velocity_z" Nothing

directionParameterHorizontal = externD "direction_parameter_horizontal" Nothing
directionParameterVertical = externD "direction_parameter_vertical" Nothing
--Must be the same for both planes that manoeuver 
-- (has to be checked in the flight controler)

----------------------------------------
-- INTRUDER DEFINITIONS
----------------------------------------


extintVelocityX = externD "intruder_velocity_x" Nothing
extintVelocityY = externD "intruder_velocity_y" Nothing
extintVelocityZ = externD "intruder_velocity_z" Nothing

extintPositionX = externD "intruder_position_x" Nothing
extintPositionY = externD "intruder_position_y" Nothing
extintPositionZ = externD "intruder_position_z" Nothing


intVelocityX = mux (boot) (extintVelocityX) $ [0]++extintVelocityX
intVelocityY = mux (boot) (extintVelocityY) $ [0]++extintVelocityY
intVelocityZ = mux (boot) (extintVelocityZ) $ [0]++extintVelocityZ

intPositionX = mux (boot) (extintPositionX) $ [0]++extintPositionX
intPositionY = mux (boot) (extintPositionY) $ [0]++extintPositionY
intPositionZ = mux (boot) (extintPositionZ) $ [0]++extintPositionZ


----------------------------------------
-- RELATIVE DEFINITIONS
----------------------------------------

relVelocityX = ownVelocityX - intVelocityX
relVelocityY = ownVelocityY - intVelocityY
relVelocityZ = ownVelocityZ - intVelocityZ


relPlannedVelocityX = ownPlannedVelocityX - intVelocityX
relPlannedVelocityY = ownPlannedVelocityY - intVelocityY
relPlannedVelocityZ = ownPlannedVelocityZ - intVelocityZ

relPositionX = ownPositionX - intPositionX
relPositionY = ownPositionY - intPositionY
relPositionZ = ownPositionZ - intPositionZ

minHorSep = externD "minimal_horizontal_separation" Nothing
minVerSep = externD "minimal_vertical_separation" Nothing
maxTimeForViolation = externD "maximum_time_for_violation" Nothing

-----------------------------------------
-- MATHEMATICAL TOOLS on vectors
-----------------------------------------

scalar2dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
scalar2dim x1 y1 x2 y2 = (x1 * x2) + (y1 * y2)

scalar3dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
scalar3dim x1 y1 z1 x2 y2 z2 = (x1 * x2) + (y1 * y2) + (z1 * z2)

normsq2dim :: Stream Double -> Stream Double -> Stream Double
normsq2dim x y = scalar2dim x y x y

norm2dim :: Stream Double -> Stream Double -> Stream Double
norm2dim x y = sqrt (normsq2dim x y)

det2dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
det2dim x1 y1 x2 y2 = (x1 * y2) - (x2 * y1)

----------------------------------------
-- Horizontal Criterion for Conflict Resolution
----------------------------------------

hor_rr :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
hor_rr sx sy e v'x v'y = (sqrt $ (normsq2dim sx sy) - (minHorSep * minHorSep)) / (minHorSep)

horizontalCriterionForConflictResolution :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForConflictResolution sx sy e v'x v'y = (scalar2dim sx sy v'x v'y) >= (e * (hor_rr sx sy e v'x v'y) * (det2dim sx sy v'x v'y))

horizontalCriterionForConflictResolutionViolation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForConflictResolutionViolation sx sy e v'x v'y = not $ horizontalCriterionForConflictResolution sx sy e v'x v'y

----------------------------------------
-- Horizontal Criterion for Loss of Separation Recovery
----------------------------------------

exitDotMin sx sy th = ((norm2dim sx sy) / th)*(minHorSep - (norm2dim sx sy))

horizontalCriterionForLossOfSeparation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForLossOfSeparation sx sy vx vy th v'x v'y = ((scalar2dim sx sy v'x v'y) >= (scalar2dim sx sy vx vy)) && ((scalar2dim sx sy v'x v'y) > (exitDotMin sx sy th))

horizontalCriterionForLossOfSeparationViolation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForLossOfSeparationViolation sx sy vx vy th v'x v'y = not $ horizontalCriterionForLossOfSeparation sx sy vx vy th v'x v'y

----------------------------------------
-- Vertical Criterion for Conflict Resolution
----------------------------------------

deltaVertical :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double  -> Stream Double
deltaVertical sx sy sz vx vy vz = minHorSep * minHorSep * (normsq2dim vx vy) - (det2dim sx sy vx vy)*(det2dim sx sy vx vy)
-- Here the formula says : (orth s . v)^2 which is the same as det(s,v)^2


dirVert :: Stream Double -> Stream Double -> Stream Double
dirVert e sz = mux ((abs sz) >= minVerSep) (e* (signum sz)) (-1.0)

thetaVert ::Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
thetaVert sx sy vx vy iota = 
  ((0.0 - (scalar2dim sx sy vx vy)) 
  + (iota * (sqrt $ ((scalar2dim sx sy vx vy)*(scalar2dim sx sy vx vy)) - ((normsq2dim vx vy)*(normsq2dim sx sy - (minHorSep * minHorSep))))
  ))
  /(normsq2dim vx vy)

intersectsHalfPlane :: Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
intersectsHalfPlane sx sy sz vx vy vz px py pz e = ((scalar2dim vx vy px py < 0) || (scalar2dim vx vy px py > 0)) && 
  ((((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py)) >= 0) && 
  ((e*(sz + ((((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py))) * vz)) >= (e * pz) ) 

verticalCriterionForConflictResolution :: Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> Stream Bool
verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z = 
  ((((normsq2dim sx sy <= 0) && (normsq2dim sx sy >= 0) ) && (v'z >= 0) && ((e * sz) >= minVerSep))) || 
  ((deltaVertical sx sy sz vx vy vz > 0) && ((thetaVert sx sy vx vy (dirVert e sz)) > 0) && (intersectsHalfPlane sx sy sz v'x v'y v'z (sx + ((thetaVert sx sy vx vy (dirVert e sz)))*vx) (sy + ((thetaVert sx sy vx vy (dirVert e sz)))*vy) (e*minVerSep) e))

verticalCriterionForConflictResolutionViolation sx sy sz vx vy vz e v'x v'y v'z = not $ verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z


----------------------------------------
-- Vertical Criterion for Loss of Separation Recovery
----------------------------------------

ttez :: Stream Double -> Stream Double -> Stream Double
ttez sz vz = (minVerSep*(signum vz) - (sz))/(vz)

zCriterion :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
zCriterion sx sy sz vz v'z = 
  ((v'z < 0) || (v'z > 0)) && ((sz*v'z) >= 0) &&
  (((sz*v'z) >= 0) ==> (mux ((vz < 0) || (vz > 0)) (((signum vz) * v'z) >= 0) (((break_symetry sx sy sz) * v'z) > 0)))

-- A function that verifies (s/= 0 ==> break_symetry(-s) == -break_symetry(s)) && (sz /= 0 ==> break_symetry(s) == sign(sz))
-- The second condition is trivialy true in this function
-- The first one is because of : assume s /= 0. Then it has a non nul coordinate. Take the coordinate with the highest priority (sz >> sx >> sy) that is non nul. The function returns its sign. That means if we send -x to this function, that same coordinate will be the opposite, so the function will return the opposite value. QED.
break_symetry :: Stream Double -> Stream Double -> Stream Double -> Stream Double
break_symetry sx sy sz = 
  mux ((sz < 0) || (sz > 0)) (signum sz) $ 
  mux ((sx < 0) || (sx > 0)) (signum sx) $
  mux ((sy <= 0) && (sy >= 0)) (1) (signum sy)


verticalCriterionForLossOfSeparation :: Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Double -> 
                                        Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Bool
verticalCriterionForLossOfSeparation sx sy sz vx vy vz tv v'x v'y v'z = 
  ((abs sz) < minVerSep) &&
  (zCriterion sx sy sz vz v'z) &&
  (tv >= (ttez sz vz))

verticalCriterionForLossOfSeparationViolation :: Stream Double -> Stream Double -> Stream Double -> 
                                                 Stream Double -> Stream Double -> Stream Double -> 
                                                 Stream Double -> 
                                                 Stream Double -> Stream Double -> Stream Double -> 
                                                 Stream Bool
verticalCriterionForLossOfSeparationViolation sx sy sz vx vy vz tv v'x v'y v'z = not $ verticalCriterionForLossOfSeparation sx sy sz vx vy vz tv v'x v'y v'z

----------------------------------------
-- 3D Criterions
----------------------------------------

criterion3DConflictResolution :: Stream Double -> Stream Double -> Stream Double -> 
                                 Stream Double -> Stream Double -> Stream Double -> 
                                 Stream Double -> Stream Double -> 
                                 Stream Double -> Stream Double -> Stream Double -> 
                                 Stream Bool
criterion3DConflictResolution sx sy sz vx vy vz eh ev v'x v'y v'z = 
  (((normsq2dim sx sy) >= (minHorSep * minHorSep)) && (horizontalCriterionForConflictResolution sx sy eh v'x v'y)) || 
  ((verticalCriterionForConflictResolution sx sy sz vx vy vz ev v'x v'y v'z) && 
  (((normsq2dim sx sy) < (minHorSep * minHorSep)) || (horizontalCriterionForConflictResolution sx sy eh (v'x - vx) (v'y - vy))))

criterion3DConflictResolutionViolation :: Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Bool
criterion3DConflictResolutionViolation sx sy sz vx vy vz eh ev v'x v'y v'z = not $ criterion3DConflictResolution sx sy sz vx vy vz eh ev v'x v'y v'z 


criterion3DLossSeparation :: Stream Double -> Stream Double -> Stream Double -> 
                             Stream Double -> Stream Double -> Stream Double -> 
                             Stream Double -> 
                             Stream Double -> Stream Double -> Stream Double -> 
                             Stream Bool
criterion3DLossSeparation sx sy sz vx vy vz t v'x v'y v'z = 
  (horizontalCriterionForLossOfSeparation sx sy vx vy t v'x v'y) ||
  (verticalCriterionForLossOfSeparation sx sy sz vx vy vz t v'x v'y v'z)

criterion3DLossSeparationViolation :: Stream Double -> Stream Double -> Stream Double -> 
                                      Stream Double -> Stream Double -> Stream Double -> 
                                      Stream Double -> 
                                      Stream Double -> Stream Double -> Stream Double -> 
                                      Stream Bool
criterion3DLossSeparationViolation sx sy sz vx vy vz t v'x v'y v'z = not $ criterion3DLossSeparation sx sy sz vx vy vz t v'x v'y v'z
----------------------------------------


spec :: Spec
spec = do
  --trigger "alert_horizontal_criterion_conflict_resolution_violation" (horizontalCriterionForConflictResolutionViolation relPositionX relPositionY directionParameterHorizontal relPlannedVelocityX relPlannedVelocityY) []
  --trigger "alert_horizontal_criterion_loss_of_separation_violation" (horizontalCriterionForLossOfSeparationViolation relPositionX relPositionY relVelocityX relVelocityY maxTimeForViolation relPlannedVelocityX relPlannedVelocityY) []
  --trigger "alert_vertical_criterion_conflict_resolution_violation" (verticalCriterionForConflictResolutionViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ directionParameterVertical relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
  --trigger "alert_vertical_criterion_loss_of_separation_violation" (verticalCriterionForLossOfSeparationViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ maxTimeForViolation directionParameterVertical relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
  
--MAIN CRITERIONS : CAREFUL the conflict resolution requires a HUUUUUUUUUUUUGE RAM memory.
  trigger "alert_3D_conflict_resolution_violation" (criterion3DConflictResolutionViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ directionParameterHorizontal directionParameterVertical relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
  trigger "alert_3D_loss_separation_violation" (criterion3DLossSeparationViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ maxTimeForViolation relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
--  observer "debug001" (exitDotMin relPositionX relPositionY maxTimeForViolation)
main = do
   reify spec >>= S.proofACSL S.defaultParams


--------------------------------------------------------------------------------
