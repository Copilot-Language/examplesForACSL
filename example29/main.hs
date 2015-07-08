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

import qualified Data.List as L

----------------------------------------
-- OWNSHIP DEFINITIONS 
----------------------------------------

ownVelocityX = externD "ownship_velocity_x" Nothing
ownVelocityY = externD "ownship_velocity_y" Nothing
ownVelocityZ = externD "ownship_velocity_z" Nothing

ownPositionX = externD "ownship_position_x" Nothing
ownPositionY = externD "ownship_position_y" Nothing
ownPositionZ = externD "ownship_position_z" Nothing


ownPlannedVelocityX = externD "ownship_planned_velocity_x" Nothing
ownPlannedVelocityY = externD "ownship_planned_velocity_y" Nothing
ownPlannedVelocityZ = externD "ownship_planned_velocity_z" Nothing

directionParameterHorizontal = externD "direction_parameter_horizontal" Nothing
directionParameterVertical = externD "direction_parameter_vertical" Nothing
--Must be the same for both planes that manoeuver 
-- (has to be checked in the flight controler)

----------------------------------------
-- INTRUDER DEFINITIONS
----------------------------------------


intVelocityX = externD "intruder_velocity_x" Nothing
intVelocityY = externD "intruder_velocity_y" Nothing
intVelocityZ = externD "intruder_velocity_z" Nothing

intPositionX = externD "intruder_position_x" Nothing
intPositionY = externD "intruder_position_y" Nothing
intPositionZ = externD "intruder_position_z" Nothing

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
normsq2dim x y = label "?normsq2dim" $ scalar2dim x y x y

norm2dim :: Stream Double -> Stream Double -> Stream Double
norm2dim x y = sqrt (normsq2dim x y)

det2dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
det2dim x1 y1 x2 y2 = (x1 * y2) - (x2 * y1)

----------------------------------------
-- Horizontal Criterion for Conflict Resolution
----------------------------------------

hor_rr :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
hor_rr sx sy e v'x v'y = (label "?hor_rr_dividend" $ sqrt $ (normsq2dim sx sy) - (minHorSep * minHorSep)) / (label "?hor_rr_divisor" $ minHorSep)

horizontalCriterionForConflictResolution :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForConflictResolution sx sy e v'x v'y = (scalar2dim sx sy v'x v'y) >= (e * (hor_rr sx sy e v'x v'y) * (det2dim sx sy v'x v'y))

horizontalCriterionForConflictResolutionViolation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForConflictResolutionViolation sx sy e v'x v'y = not $ horizontalCriterionForConflictResolution sx sy e v'x v'y

----------------------------------------
-- Horizontal Criterion for Loss of Separation Recovery
----------------------------------------

exitDotMin sx sy th = ((label "?exitDotMin_dividend" $  norm2dim sx sy)/ (label "?exitDotMin_divsor" $ th))*(minHorSep - (norm2dim sx sy))

horizontalCriterionForLossOfSeparation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForLossOfSeparation sx sy vx vy th v'x v'y = (label "?horizontalCriterionLoss_part1" $ (scalar2dim sx sy v'x v'y) >= (scalar2dim sx sy vx vy)) && (label "?horizontalCriterionLoss_part2" $(scalar2dim sx sy v'x v'y) > (exitDotMin sx sy th))

horizontalCriterionForLossOfSeparationViolation :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
horizontalCriterionForLossOfSeparationViolation sx sy vx vy th v'x v'y = not $ horizontalCriterionForLossOfSeparation sx sy vx vy th v'x v'y

----------------------------------------
-- Vertical Criterion for Conflict Resolution
----------------------------------------

deltaVertical :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double  -> Stream Double
deltaVertical sx sy sz vx vy vz = minHorSep * minHorSep * (normsq2dim vx vy) - (det2dim sx sy vx vy)*(det2dim sx sy vx vy)
-- Here the formula says : (orth s . v)^2 which is the same as det(s,v)^2


dirVert :: Stream Double -> Stream Double -> Stream Double
dirVert e sz = label "?dirVert" $ mux (label "?dirVert_part1" $ (label "?dirVert_part1.1" $ abs (label "?dirVert_part1.1.1" $ sz)) >= minVerSep) (label "?dirVert_part2" $ e* (label "?dirVert_part2.1" $ signum sz)) (-1.0)

thetaVert ::Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
thetaVert sx sy vx vy iota = label "?thetaVert" $ 
  (label "?thetaVert_dividend" $  
  (label "?thetaVert_part1" $ 0.0 - (label "?thetaVert_part1.1" $ scalar2dim sx sy vx vy)) 
  + (label "?thetaVert_part1.2" $ iota * (label "?thetaVert_part2" $ sqrt $ ((label "?thetaVert_part2.1" $ scalar2dim sx sy vx vy)*(label "?thetaVert_part2.2" $ scalar2dim sx sy vx vy)) - (label "?thetaVert_part2.3" $(label "?thetaVert_part2.3.1" $ normsq2dim vx vy)*(label "?thetaVert_part2.3.2" $ normsq2dim sx sy - (minHorSep * minHorSep))))
  ))
  /(label "?thetaVert_divisor" $ normsq2dim vx vy)

intersectsHalfPlane :: Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
intersectsHalfPlane sx sy sz vx vy vz px py pz e = label "?intersectsHalfPlane" $ (label "?intersectsHalfPlane_part1" $ (label "?intersectsHalfPlane_part1.1" $ scalar2dim vx vy px py < 0) || (label "?intersectsHalfPlane_part1.2" $ scalar2dim vx vy px py > 0)) && 
  (label "?intersectsHalfPlane_part2" $ label "?t_1" (((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py)) >= 0) && 
  (label "?intersectsHalfPlane_part3" $  (e*(sz + (label "?t_2" (((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py))) * vz)) >= (e * pz) ) 

verticalCriterionForConflictResolution :: Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> Stream Bool
verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z = 
  (label "?verticalCriterionConflict_part1" $ ((label "?verticalCriterionConflict_part1.1" $ (label "?verticalCriterionConflict_part1.1.1" $ normsq2dim sx sy <= 0) && (label "?verticalCriterionConflict_part1.1.2" $normsq2dim sx sy >= 0) ) && (label "?verticalCriterionConflict_part1.2" $ v'z >= 0) && (label "?verticalCriterionConflict_part1.3" $ (e * sz) >= minVerSep))) || 
  (label "?verticalCriterionConflict_part2" $ (label "?verticalCriterionConflict_part2.1" $deltaVertical sx sy sz vx vy vz > 0) && (label "?verticalCriterionConflict_part2.2" $ (label "?theta_dir_1" (thetaVert sx sy vx vy (dirVert e sz))) > 0) && (label "?verticalCriterionConflict_part2.3" $ intersectsHalfPlane sx sy sz v'x v'y v'z (label "?verticalCriterionConflict_part2.3.1" $ sx + (label "?theta_dir_2" (thetaVert sx sy vx vy (dirVert e sz)))*vx) (label "?verticalCriterionConflict_part2.3.2" $ sy + (label "?theta_dir_3" (thetaVert sx sy vx vy (dirVert e sz)))*vy) (e*minVerSep) e))

verticalCriterionForConflictResolutionViolation sx sy sz vx vy vz e v'x v'y v'z = not $ verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z


----------------------------------------
-- Vertical Criterion for Loss of Separation Recovery
----------------------------------------

ttez :: Stream Double -> Stream Double -> Stream Double
ttez sz vz = label "?ttez" $ (label "?ttez_dividend" $ minVerSep*(label "?ttez_part01" $ signum vz) - (label "?ttez_part02" $ sz))/(label "?ttez_divisor" vz)

zCriterion :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
zCriterion sx sy sz vz v'z = 
  (label "?zCriterion_part1" $ (label "?zCriterion_part1.1" $ v'z < 0) || (label "?zCriterion_part1.2" $ v'z > 0)) && (label "?z_prop(sz,v'z)" ((sz*v'z) >= 0)) &&
  (label "?zCriterion_part2" $ (label "?z_prop(sz,v'z)" ((sz*v'z) >= 0)) ==> (label "?zCriterion_part2.0" $ mux (label "?zCriterion_part2.1" $  (label "?zCriterion_part2.1" $ vz < 0) || (label "?zCriterion_part2.2" $ vz > 0)) (label "?zCriterion_part2.2" $ ((label "?zCriterion_part2.2.1" $ signum vz) * v'z) >= 0) (label "?zCriterion_part2.3" $ ((label "?zCriterion_part2.3.1" $ break_symetry sx sy sz) * v'z) > 0)))

-- A function that verifies (s/= 0 ==> break_symetry(-s) == -break_symetry(s)) && (sz /= 0 ==> break_symetry(s) == sign(sz))
-- The second condition is trivialy true in this function
-- The first one is because of : assume s /= 0. Then it has a non nul coordinate. Take the coordinate with the highest priority (sz >> sx >> sy) that is non nul. The function returns its sign. That means if we send -x to this function, that same coordinate will be the opposite, so the function will return the opposite value. QED.
break_symetry :: Stream Double -> Stream Double -> Stream Double -> Stream Double
break_symetry sx sy sz = 
  label "?break_symetry" $ mux (label "?break_symetry_part1" $ (label "?break_symetry_part1.1" $ sz < 0) || (label "?break_symetry_part1.2" $ sz > 0)) (label "?break_symetry_part2" $ signum sz) (label "?break_symetry_part3" $ mux (label "?break_symetry_part3.1" $ (label "?break_symetry_part3.1.1" $ sx < 0) || (label "?break_symetry_part3.1.2" $ sx > 0)) (label "?break_symetry_part3.2" $ signum sx) (label "?break_symetry_part3.3" $ mux (label "?break_symetry_part3.3.1" $ (label "?break_symetry_part3.3.1.1" $ sy <= 0) && (label "?break_symetry_part3.3.1.2" $ sy >= 0)) (1) (label "?break_symetry_part3.3.2" $ signum sy)))


verticalCriterionForLossOfSeparation :: Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Double -> 
                                        Stream Double -> Stream Double -> Stream Double -> 
                                        Stream Bool
verticalCriterionForLossOfSeparation sx sy sz vx vy vz tv v'x v'y v'z = 
  (label "?verticalCriterionLoss_part1" $ (label "?verticalCriterionLoss_part1.1" $ abs sz) < minVerSep) &&
  (label "?verticalCriterionLoss_part2" $ zCriterion sx sy sz vz v'z) &&
  (label "?verticalCriterionLoss_part3" $ tv >= (label "?verticalCriterionLoss_part3.1" $ ttez sz vz))

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
  (label "?criterion3D_part1" $ (label "?criterion3D_part1.1" $ (label "?criterion3D_part1.2" $ normsq2dim sx sy) >= (label "?criterion3D_part1.3" $ minHorSep * minHorSep)) && (label "?criterion3D_part2" $  horizontalCriterionForConflictResolution sx sy eh v'x v'y)) || 
  ((label "?criterion3D_part3" $ verticalCriterionForConflictResolution sx sy sz vx vy vz ev v'x v'y v'z) && (label "?criterion3D_part4" $ (label "?criterion3D_part4.1" $ (label "?criterion3D_part4.1.1" $ normsq2dim sx sy) < (label "?criterion3D_part4.1.2" $ minHorSep * minHorSep)) || (label "?criterion3D_part5" $ horizontalCriterionForConflictResolution sx sy eh (v'x - vx) (v'y - vy))))

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
  (label "?horizontal_los_criterion" $ horizontalCriterionForLossOfSeparation sx sy vx vy t v'x v'y) ||
  (label "?vertical_los_criterion" $ verticalCriterionForLossOfSeparation sx sy sz vx vy vz t v'x v'y v'z)

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
