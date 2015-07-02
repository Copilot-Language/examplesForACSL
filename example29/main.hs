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

directionParameter = externD "direction_parameter" Nothing
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
maxTimeForHorizontalViolation = externD "maximum_time_for_horizontal_violation" Nothing

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

exitDotMin sx sy th = ((norm2dim sx sy)/th)*(minHorSep - (norm2dim sx sy))

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
thetaVert sx sy vx vy iota = (0.0 - (scalar2dim sx sy vx vy) + iota * (sqrt $ (scalar2dim sx sy vx vy)*(scalar2dim sx sy vx vy) - (normsq2dim vx vy)*(normsq2dim sx sy - (minHorSep * minHorSep))))/(normsq2dim vx vy)

intersectsHalfPlane :: Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> 
                       Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
intersectsHalfPlane sx sy sz vx vy vz px py pz e = (scalar2dim vx vy px py /= 0) && 
  (label "t_1" (((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py)) >= 0) && 
  ( (e*(sz + (label "t_2" (((minHorSep * minHorSep) - (scalar2dim sx sy px py)) / (scalar2dim vx vy px py))) * vz)) >= (e * pz) ) 

verticalCriterionForConflictResolution :: Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> 
                                          Stream Double -> 
                                          Stream Double -> Stream Double -> Stream Double -> Stream Bool
verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z = 
  ((normsq2dim sx sy == 0) && (v'z >= 0) && ((e * sz) >= minVerSep)) || 
  ((deltaVertical sx sy sz vx vy vz > 0) && ((label "theta_dir_1" (thetaVert sx sy vx vy (dirVert e sz))) > 0) && (intersectsHalfPlane sx sy sz v'x v'y v'z (sx + (label "theta_dir_2" (thetaVert sx sy vx vy (dirVert e sz)))*vx) (sy + (label "theta_dir_3" (thetaVert sx sy vx vy (dirVert e sz)))*vy) (e*minVerSep) e))

verticalCriterionForConflictResolutionViolation sx sy sz vx vy vz e v'x v'y v'z = not $ verticalCriterionForConflictResolution sx sy sz vx vy vz e v'x v'y v'z

----------------------------------------


spec :: Spec
spec = do
  trigger "alert_horizontal_criterion_conflict_resolution_violation" (horizontalCriterionForConflictResolutionViolation relPositionX relPositionY directionParameter relPlannedVelocityX relPlannedVelocityY) []
  trigger "alert_horizontal_criterion_loss_of_separation_violation" (horizontalCriterionForLossOfSeparationViolation relPositionX relPositionY relVelocityX relVelocityY maxTimeForHorizontalViolation relPlannedVelocityX relPlannedVelocityY) []
  trigger "alert_vertical_criterion_conflict_resolution_violation" (verticalCriterionForConflictResolutionViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ directionParameter relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
--  observer "debug001" (exitDotMin relPositionX relPositionY maxTimeForHorizontalViolation)
main = do
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
