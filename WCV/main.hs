divert(-1)
changequote({,})
define({LQ},{changequote(`,'){dnl}
changequote({,})})
define({RQ},{changequote(`,')dnl{
}changequote({,})})
changecom({--})


--some basic stuff : everything in SI
define({PI}, {(label "?pi" $ 3.14159265358979323846264338327950)})
define({E}, {(label "?e" $ 2.718281828459045235360287471352)})
define({REARTH}, {6371000}) --in meters

define({RAD},{1})
define({DEG}, {(label "?deg" $ PI/180)})
define({NM}, {(label "?nm" $ 1852)})
define({FT},{0.3048})

define({SEC},{1})
define({MIN},{60})
define({HOUR},{3600})

define({KTS},{(label "?kts" $ NM/HOUR)})
define({FPM},{(label "?fpm" $ FT/MIN)})



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


--------------------------------------------------------------------------------
-- SOME CONVENTIONS :
-- Altitudes are in FT
-- Position in GPS coordinates
-- Speed are given by the couple HDG, TAS (if you want to change it, you have to change this comment)
-- Vertical speeds are given in FT/MIN
-- X is E (east on mercator) : multiplied by a compensation factor due to the widening of the map.
-- Y is N (north on mercator)


-- BE VERY CAREFUL ! THIS FAILS WHEN YOU GO TO CLOSE TO THE POLES ! 
-- Because of floating point overflow (tan pi/2- -> + inf)
--------------------------------------------------------------------------------



import qualified Data.List as L

----------------------------------------
-- OWNSHIP DEFINITIONS 
----------------------------------------

ownAlt  = label "?ownAlt" $ (externD "ownship_altitude_ft" Nothing)*FT          -- in feet
ownLat  = label "?ownLat" $ (externD "ownship_latitude" Nothing)*DEG            -- in deg
ownLong = label "?ownLong" $ (externD "ownship_longitude" Nothing)*DEG          -- in deg
--ownHDG  = label "?ownHDG" $ (externD "ownship_heading" Nothing)*DEG             -- in deg
--ownTAS  = label "?ownTAS" $ (externD "ownship_trueairspeed" Nothing)*KTS        -- in kts
--ownVSPD = label "?ownVSPD" $ (externD "ownship_vertical_speed" Nothing)*FT/MIN  --in FT/MIN

ownScaleFactorX = 1--label "?ownScaleFactorX" $ cos ownLat
ownScaleFactorY = 1--label "?ownScaleFactorY" $ cos ownLat

ownPositionX = label "?ownPositionX" $ REARTH * ownLong * ownScaleFactorX
ownPositionY = label "?ownPositionY" $ REARTH * (log $ tan((PI/4) + (ownLat/2)) ) * ownScaleFactorY
ownPositionZ = label "?ownPositionZ" $ ownAlt

--ownVelocityX = label "?ownVelocityX" $ ownTAS * (cos ownHDG)
--ownVelocityY = label "?ownVelocityY" $ ownTAS * (sin ownHDG)
--ownVelocityZ = label "?ownVelocityZ" $ ownVSPD

ownVelocityX = label "?ownVelocityX" $ (externD "ownship_vx" Nothing)   --in m/s
ownVelocityY = label "?ownVelocityY" $ (externD "ownship_vy" Nothing)   --in m/s
ownVelocityZ = label "?ownVelocityZ" $ (externD "ownship_vz" Nothing)   --in m/s

----------------------------------------
-- INTRUDER DEFINITIONS
----------------------------------------

intAlt  = label "?intAlt" $ (externD "intruder_altitude_ft" Nothing)*FT         -- in ft
intLat  = label "?intLat" $ (externD "intruder_latitude" Nothing)*DEG           -- in deg
intLong = label "?intLong" $ (externD "intruder_longitude" Nothing)*DEG         -- in deg
--intHDG  = label "?intHDG" $ (externD "intruder_heading" Nothing)*DEG            -- in deg
--intTAS  = label "?intTAS" $ (externD "intruder_trueairspeed" Nothing)*KTS       -- in kts
--intVSPD = label "?intVSPD" $ (externD "intruder_vertical_speed" Nothing)*FT/MIN --in FT/MIN

intScaleFactorX = 1--label "?intScaleFactorX" $ cos intLat
intScaleFactorY = 1--label "?intScaleFactorY" $ cos intLat

intPositionX = label "?intPositionX" $ REARTH * intLong * intScaleFactorX
intPositionY = label "?intPositionY" $ REARTH * (log $ tan(PI/4 + intLat/2) ) * intScaleFactorY
intPositionZ = label "?intPositionZ" $ intAlt

--intVelocityX = label "?intVelocityX" $ intTAS * (cos intHDG)
--intVelocityY = label "?intVelocityY" $ intTAS * (sin intHDG)
--intVelocityZ = label "?intVelocityZ" $ intVSPD

intVelocityX = label "?intVelocityX" $ (externD "intruder_vx" Nothing)
intVelocityY = label "?intVelocityY" $ (externD "intruder_vy" Nothing)
intVelocityZ = label "?intVelocityZ" $ (externD "intruder_vz" Nothing)

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
scalar2dim x1 y1 x2 y2 = label "?scalar2dim" $ (x1 * x2) + (y1 * y2)

scalar3dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
scalar3dim x1 y1 z1 x2 y2 z2 = label "?scalar3dim" $ (x1 * x2) + (y1 * y2) + (z1 * z2)

normsq2dim :: Stream Double -> Stream Double -> Stream Double
normsq2dim x y = label "?normsq2dim" $ scalar2dim x y x y

norm2dim :: Stream Double -> Stream Double -> Stream Double
norm2dim x y = label "?norm2dim" $ sqrt (normsq2dim x y)

det2dim :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
det2dim x1 y1 x2 y2 = label "?det2dim" $ (x1 * y2) - (x2 * y1)

-----------------------------------------
-- Definitions of a variety of taus
-- (Stream Double -> Stream Double -> 
--         Stream Double -> Stream Double -> 
--         Stream Double)
-----------------------------------------

tau :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tau sx sy vx vy = label "?tau" $ 
  mux (scalar2dim sx sy vx vy < 0) 
  ((0- (normsq2dim sx sy))/(scalar2dim sx sy vx vy)) 
  (0-1)


tcpa :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tcpa sx sy vx vy = label "?tcpa" $ 
  mux (vx == 0 && vy == 0) (0) ((0- (scalar2dim sx sy vx vy))/(normsq2dim vx vy))

taumod :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
taumod sx sy vx vy = label "?taumod" $ 
  mux (scalar2dim sx sy vx vy < 0) 
  ((DTHR * DTHR - (normsq2dim sx sy))/(scalar2dim sx sy vx vy)) 
  (0-1)



tep :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
tep sx sy vx vy = label "?tep" $ 
  mux ((scalar2dim sx sy vx vy < 0) && ((delta sx sy vx vy DTHR) >= 0))
  (theta sx sy vx vy DTHR (0-1))
  (0-1)


delta :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double 
delta sx sy vx vy d = label "?delta" $ 
  ((d*d)*(normsq2dim vx vy)) - ((det2dim sx sy vx vy)*(det2dim sx sy vx vy))
-- Here the formula says : (s . orth v)^2 which is the same as det(s,v)^2

theta :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Double
theta sx sy vx vy d e = label "?theta" $ 
  ((0-(scalar2dim sx sy vx vy))+ e* (sqrt $ (delta sx sy vx vy d)))/
  (normsq2dim vx vy)
-----------------------------------------
-- Some tools for times
-----------------------------------------

tcoa :: Stream Double -> Stream Double -> Stream Double
tcoa sz vz = label "?tcoa" $ 
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
wellClearViolation tvar sx sy sz vx vy vz = label "?wellClearViolation" $ 
  (horizontalWCV tvar sx sy vx vy) && (verticalWCV sz vz)

verticalWCV :: Stream Double -> Stream Double -> Stream Bool
verticalWCV sz vz = label "?verticalWCV" $ 
  ((abs $ sz) <= ZTHR) ||
  (0 <= (tcoa sz vz) && (tcoa sz vz) <= TCOA)

horizontalWCV :: (Stream Double -> Stream Double -> 
                 Stream Double -> Stream Double -> 
                 Stream Double) -> 
                 Stream Double -> Stream Double -> 
                 Stream Double -> Stream Double -> 
                 Stream Bool
horizontalWCV tvar sx sy vx vy = label "?horizontalWCV" $ 
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
--  observer "deb" (log $ tan((PI/4) + (ownLat/2)))
--  observer "ox" ownPositionX
--  observer "oy" ownPositionY
--  observer "oz" ownPositionZ
--  observer "ix" intPositionX
--  observer "iy" intPositionY
--  observer "iz" intPositionZ
--  observer "sx" relPositionX
--  observer "sy" relPositionY
--  observer "sz" relPositionZ
--  observer "vx" relVelocityX
--  observer "vy" relVelocityY
--  observer "vz" relVelocityZ
--  observer "tau" ((tau relPositionX relPositionY relVelocityX relVelocityY))
  trigger "alert_WCVtau" (wellClearViolation tau relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtcpa" (wellClearViolation tcpa relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtaumod" (wellClearViolation taumod relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_WCVtep" (wellClearViolation tep relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []

main = do
   reify spec >>= S.proofACSL S.defaultParams


--------------------------------------------------------------------------------
