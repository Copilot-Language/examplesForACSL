divert(-1)
changequote({,})
define({LQ},{changequote(`,'){dnl}
changequote({,})})
define({RQ},{changequote(`,')dnl{
}changequote({,})})
changecom({--})


--some basic stuff
define({PI}, {3.1415926535897932384626433})

define({RAD},{1})
define({DEG}, {(PI/180)})
define({NM}, {1852})
define({FT},{0.3048})

define({SEC},{1})
define({MIN},{60})
define({HOUR},{3600})

define({KTS},{(NMI/HOUR)})
define({FPM},{(FT/MIN)})



define({ZTHR}, {(475*FT)}) -- altitude threshold
define({DTHR}, {(1*NM)}) -- horizontal distance threshold
define({TTHR}, {(30.0*SEC)}) -- time threshold
define({TCOA}, {(30.0*SEC)}) -- vertical time threshold


divert(0)dnl
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
-- Implementation of http://shemesh.larc.nasa.gov/people/cam/publications/NASA-TM-2014-218280.pdf
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


relPositionX = ownPositionX - intPositionX
relPositionY = ownPositionY - intPositionY
relPositionZ = ownPositionZ - intPositionZ

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

-----------------------------------------
-- Definitions of a variety of taus
-- (Stream Double -> Stream Double -> 
--         Stream Double -> Stream Double -> 
--         Stream Double)
-----------------------------------------

tau :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tau sx sy vx vy = 
  mux (scalar2dim sx sy vx vy < 0) 
  ((0- (normsq2dim sx sy))/(scalar2dim sx sy vx vy)) 
  (0-1)


tcpa :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tcpa sx sy vx vy = 
  mux (vx == 0 && vy == 0) (0) ((0- (scalar2dim sx sy vx vy))/(normsq2dim vx vy))

taumod :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
taumod sx sy vx vy =
  mux (scalar2dim sx sy vx vy < 0) 
  ((DTHR * DTHR - (normsq2dim sx sy))/(scalar2dim sx sy vx vy)) 
  (0-1)



tep :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tep sx sy vx vy = 
  mux ((scalar2dim sx sy vx vy < 0) && ((delta sx sy vx vy DTHR) >= 0))
  (theta sx sy vx vy DTHR (0-1))
  (0-1)


delta :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double 
delta sx sy vx vy d = 
  ((d*d)*(normsq2dim vx vy)) - ((det2dim sx sy vx vy)*(det2dim sx sy vx vy))
-- Here the formula says : (s . orth v)^2 which is the same as det(s,v)^2

theta :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
theta sx sy vx vy d e =
  ((0-(scalar2dim sx sy vx vy))+ e* (sqrt $ (delta sx sy vx vy d)))/
  (normsq2dim vx vy)
-----------------------------------------
-- Some tools for times
-----------------------------------------

tcoa :: Stream Double -> Stream Double -> Stream Double
tcoa sz vz =
  mux ((sz * vz) < 0) ((0 - sz) / vz) (0-1)

dcpa :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
dcpa sx sy vx vy = norm2dim (sx + (tcpa sx sy vx vy) * vx) (sy + (tcpa sx sy vx vy) * vy)

-----------------------------------------
-- Well clear Violation
-----------------------------------------

wellClearViolation :: (Stream Double -> Stream Double -> 
                      Stream Double -> Stream Double -> 
                      Stream Double) -> 
                      Stream Double -> Stream Double -> Stream Double -> 
                      Stream Double -> Stream Double -> Stream Double -> 
                      Stream Bool
wellClearViolation tvar sx sy sz vx vy vz = 
  (horizontalWCV tvar sx sy vx vy) && (verticalWCV sz vz)

verticalWCV :: Stream Double -> Stream Double -> Stream Bool
verticalWCV sz vz = 
  ((abs $ sz) <= ZTHR) ||
  (0 <= (tcoa sz vz) && (tcoa sz vz) <= TCOA)

horizontalWCV :: (Stream Double -> Stream Double -> 
                 Stream Double -> Stream Double -> 
                 Stream Double) -> 
                 Stream Double -> Stream Double -> 
                 Stream Double -> Stream Double -> 
                 Stream Bool
horizontalWCV tvar sx sy vx vy =
  (norm2dim sx sy <= DTHR) ||
  ((dcpa sx sy vx vy <= DTHR) && (0 <= (tvar sx sy vx vy)) && ((tvar sx sy vx vy) <= TTHR))

-----------------------------------------
-- Spec
-----------------------------------------

spec :: Spec
spec = do
  --trigger "alert_horizontal_criterion_conflict_resolution_violation" (horizontalCriterionForConflictResolutionViolation relPositionX relPositionY directionParameterHorizontal relPlannedVelocityX relPlannedVelocityY) []
  --trigger "alert_horizontal_criterion_loss_of_separation_violation" (horizontalCriterionForLossOfSeparationViolation relPositionX relPositionY relVelocityX relVelocityY maxTimeForViolation relPlannedVelocityX relPlannedVelocityY) []
  --trigger "alert_vertical_criterion_conflict_resolution_violation" (verticalCriterionForConflictResolutionViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ directionParameterVertical relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
  --trigger "alert_vertical_criterion_loss_of_separation_violation" (verticalCriterionForLossOfSeparationViolation relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ maxTimeForViolation directionParameterVertical relPlannedVelocityX relPlannedVelocityY relPlannedVelocityZ) []
  trigger "alert_WCVtau" (wellClearViolation tau relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtcpa" (wellClearViolation tcpa relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtaumod" (wellClearViolation taumod relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtep" (wellClearViolation tep relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []

main = do
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
