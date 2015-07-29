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
define({DEG}, {(PI/180)}) --conversion deg to rad
define({NM}, {1852})  -- conversion nm to meter
define({FT},{0.3048}) -- conversion feet to meter

define({SEC},{1})
define({MIN},{60})
define({HOUR},{3600})

define({KTS},{(NMI/HOUR)})
define({FPM},{(FT/MIN)})



-- global variables for the simulation

define({VsAccel}, {2})
define({MaxVs}, {700})
define({Header}, {true})



divert(0)dnl
import Copilot.Language.Reify
import Copilot.Language
import Copilot.Language.Operators.Eq
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
-- OWNSHIP DEFINITIONS /!\ DO NOT FORGET TO DEFINE THE UNITS. The monitor works in SI !
----------------------------------------

ownVelocityX = externD "ownship_velocity_x" Nothing
ownVelocityY = externD "ownship_velocity_y" Nothing
ownVelocityZ = externD "ownship_velocity_z" Nothing

ownPositionX = externD "ownship_position_x" Nothing
ownPositionY = externD "ownship_position_y" Nothing
ownPositionZ = externD "ownship_position_z" Nothing

----------------------------------------
-- INTRUDER DEFINITIONS /!\ DO NOT FORGET TO DEFINE THE UNITS. The monitor works in SI !
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
-- MATHEMATICAL TOOLS
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

sq :: Stream Double -> Stream Double
sq x = label "?sq" $ x * x

maxi :: Stream Double -> Stream Double -> Stream Double
maxi a b = label "?maxi" $ mux (a>=b) (a) (b)

mini :: Stream Double -> Stream Double -> Stream Double
mini a b = label "?mini" $ mux (a<=b) (a) (b)

-----------------------------------------
-- SENSITIVITY LEVEL OF THE TCAS 
-- cf http://www.faa.gov/documentLibrary/media/Advisory_Circular/TCAS%20II%20V7.1%20Intro%20booklet.pdf
-----------------------------------------

sensitivityLevel :: Stream Double -> Stream Word64
sensitivityLevel a = label "?sensitivityLevel" $ 
  mux (0 <= a && a < 1000) (2) $
  mux (a < 2350) (3) $
  mux (a < 5000) (4) $
  mux (a < 10000) (5) $
  mux (a < 20000) (6) $
  mux (a < 42000) (7) $
  (8)

-----------------------------------------
-- THRESHOLDS FOR TA
-----------------------------------------

tauTA :: Stream Word64 -> Stream Double
tauTA sl = label "?tauTA" $ 
  mux (sl == 2) (20) $
  mux (sl == 3) (25) $
  mux (sl == 4) (30) $
  mux (sl == 5) (40) $
  mux (sl == 6) (45) $
  mux (sl == 7) (48) $
  mux (sl == 8) (48) $ 
  (0)

dmodTA  :: Stream Word64 -> Stream Double
dmodTA sl = label "?dmodTA" $ 
  mux (sl == 2) (0.30*NM) $
  mux (sl == 3) (0.33*NM) $
  mux (sl == 4) (0.48*NM) $
  mux (sl == 5) (0.75*NM) $
  mux (sl == 6) (1.00*NM) $
  mux (sl == 7) (1.30*NM) $
  mux (sl == 8) (1.30*NM) $ 
  (0)

zthrTA :: Stream Word64 -> Stream Double
zthrTA sl = label "?zthrTA" $ 
  mux (sl == 2) (850*FT) $
  mux (sl == 3) (850*FT) $
  mux (sl == 4) (850*FT) $
  mux (sl == 5) (850*FT) $
  mux (sl == 6) (850*FT) $
  mux (sl == 7) (850*FT) $
  mux (sl == 8) (1200*FT) $ 
  (0)

-----------------------------------------
-- THRESHOLDS FOR RA
-----------------------------------------

tauRA :: Stream Word64 -> Stream Double
tauRA sl = label "?tauRA" $ 
  mux (sl == 2) (0) $
  mux (sl == 3) (15) $
  mux (sl == 4) (20) $
  mux (sl == 5) (25) $
  mux (sl == 6) (30) $
  mux (sl == 7) (35) $
  mux (sl == 8) (35) $ 
  (0)

dmodRA  :: Stream Word64 -> Stream Double
dmodRA sl = label "?dmodRA" $ 
  mux (sl == 2) (0.00*NM) $
  mux (sl == 3) (0.20*NM) $
  mux (sl == 4) (0.35*NM) $
  mux (sl == 5) (0.55*NM) $
  mux (sl == 6) (0.80*NM) $
  mux (sl == 7) (1.10*NM) $
  mux (sl == 8) (1.10*NM) $ 
  (0)

zthrRA :: Stream Word64 -> Stream Double
zthrRA sl = label "?zthrRA" $ 
  mux (sl == 2) (0*FT) $
  mux (sl == 3) (600*FT) $
  mux (sl == 4) (600*FT) $
  mux (sl == 5) (600*FT) $
  mux (sl == 6) (600*FT) $
  mux (sl == 7) (700*FT) $
  mux (sl == 8) (800*FT) $ 
  (0)

alimRA :: Stream Word64 -> Stream Double
alimRA sl = label "?alimRA" $ 
  mux (sl == 2) (0*FT) $
  mux (sl == 3) (300*FT) $
  mux (sl == 4) (300*FT) $
  mux (sl == 5) (350*FT) $
  mux (sl == 6) (400*FT) $
  mux (sl == 7) (600*FT) $
  mux (sl == 8) (700*FT) $ 
  (0)

hmdRA :: Stream Word64 -> Stream Double
hmdRA sl = label "?hmdRA" $ 
  mux (sl == 2) (0*FT) $
  mux (sl == 3) (1215*FT) $
  mux (sl == 4) (2126*FT) $
  mux (sl == 5) (3342*FT) $
  mux (sl == 6) (4861*FT) $
  mux (sl == 7) (6683*FT) $
  mux (sl == 8) (6683*FT) $ 
  (0)

-----------------------------------------
-- Taumod definitions + delta and theta
-----------------------------------------


tau_current = taumod
--ALIAS of taumod

taumod :: Stream Double -> Stream Double ->
          Stream Double -> Stream Double ->
          Stream Double -> Stream Double
taumod sx sy vx vy dmod = label "?taumod" $ 
  mux (scalar2dim sx sy vx vy < 0) 
  ((sq (dmod) - (normsq2dim sx sy))/(scalar2dim sx sy vx vy)) 
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
-- TCAS horizontal and vertical RA : https://github.com/nasa/pvslib/blob/master/TCASII/horizontal_RA.pvs
-----------------------------------------

-------- Horizontal

horizontal_RA :: Stream Double -> Stream Double ->
                 Stream Double -> Stream Double ->
                 Stream Double -> Stream Double ->
                 Stream Bool
horizontal_RA sx sy vx vy tau dmod = label "?horizontal_RA" $ 
  mux (scalar2dim sx sy vx vy >= 0) (norm2dim sx sy <= dmod) $
  ((norm2dim sx sy <= dmod) || (tau_current sx sy vx vy dmod <= tau))


-------- Vertical

vertical_RA :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> Stream Bool
vertical_RA sz vz tcoa zthr = label "?vertical_RA" $ 
  (0 <= (time_coalt sz vz zthr)) && (time_coalt sz vz zthr <= tcoa)

time_coalt :: Stream Double -> Stream Double -> Stream Double -> Stream Double
time_coalt sz vz zthr = label "?time_coalt" $ 
  mux (abs sz <= zthr) (0) $
  mux (vz == 0) (0-1) $
  ((0-sz)/vz)

-----------------------------------------
-- TCAS II RA : https://github.com/nasa/pvslib/blob/master/TCASII/tcasra.pvs
-----------------------------------------

tcasII_RA :: Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Bool ->
             Stream Bool
tcasII_RA sx sy sz vx vy vz tau tcoa dmod zthr hmd usehmdf =  label "?tcasII_RA" $ 
  ( (not $ usehmdf) || (cd2d_TCAS sx sy vx vy hmd) ) &&
  (horizontal_RA sx sy vx vy tau dmod) &&
  (vertical_RA sz vz tcoa zthr)

cd2d_TCAS :: Stream Double -> Stream Double ->
             Stream Double -> Stream Double ->
             Stream Double -> Stream Bool
cd2d_TCAS sx sy vx vy hmd = cd2d_TCAS_after sx sy vx vy hmd 0

cd2d_TCAS_after :: Stream Double -> Stream Double ->
                   Stream Double -> Stream Double ->
                   Stream Double -> Stream Double ->
                   Stream Bool
cd2d_TCAS_after sx sy vx vy hmd t =  label "?cd2d_TCAS_after" $ 
  ( (normsq2dim vx vy == 0) && (normsq2dim (sx + t*vx) (sy + t*vy) <= (sq hmd)) ) ||
  ( (normsq2dim vx vy > 0) && (delta sx sy vx vy hmd >= 0) && (theta sx sy vx vy hmd 1 >= t) )


-------- Variant of TCAS : http://shemesh.larc.nasa.gov/people/cam/publications/gnc2013-draft.pdf
tcasII_RA_at :: Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Double ->
             Stream Double -> Stream Double -> Stream Bool ->
             Stream Double -> Stream Bool
tcasII_RA_at sx sy sz vx vy vz tau tcoa dmod zthr hmd usehmdf t =  label "?tcasII_RA" $ 
  ( (not $ usehmdf) || (cd2d_TCAS_after sx sy vx vy hmd t) ) &&
  (horizontal_RA (sx + t*vx) (sy+t*vy) vx vy tau dmod) &&
  (vertical_RA (sz + t * vz) vz tcoa zthr)


-----------------------------------------
-- TCAS II Corrective? https://github.com/nasa/pvslib/blob/master/TCASII/tcasra_types.pvs
-- Be careful /!\ you have to send it the absolute position and speed 
--  for the ownship and the intruder regarding the z component.
-----------------------------------------

tcas_direction soz siz voz viz maxVAccel maxVSpeed alim dmod tau = label "?tcas_direction" $ 
  mux ((signum (soz-siz)> 0.3)     && (up_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau >= alim) ) (1) $
  mux ((signum (soz-siz)< (0-0.3)) && (down_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau >= alim) ) (-1) $
  mux ((up_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau) >= (down_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau)) (1) $
  (-1)


-----------------------------------------------------------


int_alt :: Stream Double -> Stream Double -> Stream Double -> Stream Double
int_alt siz viz tau = label "?int_alt" $ 
  siz + tau*viz

--int_alt = siz+tau*viz,

up_dist :: Stream Double -> Stream Double -> 
           Stream Double -> Stream Double -> 
           Stream Double -> Stream Double -> Stream Double -> Stream Double -> 
           Stream Double -> Stream Double
up_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau = label "?up_dist" $ 
  (tcas_alt_at soz voz maxVAccel maxVSpeed 1 tau) - (int_alt siz viz tau)

--own_up_alt = tcas_alt_at(soz,voz,MaxVAccel,MaxVSpeed,1)(tau),
--up_dist = own_up_alt - int_alt,

down_dist::Stream Double -> Stream Double -> 
           Stream Double -> Stream Double -> 
           Stream Double -> Stream Double -> Stream Double -> Stream Double -> 
           Stream Double -> Stream Double
down_dist soz siz voz viz maxVAccel maxVSpeed alim dmod tau = label "?down_dist" $ 
  (int_alt siz viz tau) - (tcas_alt_at soz voz maxVAccel maxVSpeed (0-1) tau)

--own_down_alt = tcas_alt_at(soz,voz,MaxVAccel,MaxVSpeed,-1)(tau),
--down_dist = int_alt - own_down_alt, % In general, these will both be positive

-----------------------------------------------------

mvsstart :: Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double
mvsstart soz voz maxVAccel maxVSpeed eps tr = label "?mvsstart" $ 
  mux ((tr <= 0) || ((eps*voz) >= maxVSpeed) ) (0) $
  ((eps*maxVSpeed-voz)/(eps*maxVAccel))

--max_vs_start:nnreal = (IF tr<=0 OR eps*voz >= MaxVSpeed THEN 0
--ELSE (eps*MaxVSpeed-voz)/(eps*MaxVAccel) ENDIF),

quadtime :: Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double
quadtime soz voz maxVAccel maxVSpeed eps tr = label "?quadtime" $ 
  mini (tr) (mvsstart soz voz maxVAccel maxVSpeed eps tr)

tcas_alt_at :: Stream Double -> Stream Double -> 
               Stream Double -> Stream Double -> 
               Stream Double -> Stream Double -> 
               Stream Double
tcas_alt_at soz voz maxVAccel maxVSpeed eps tr = label "?tcas_alt_at" $ 
  (eps*(maxVAccel / 2)*(sq $ quadtime soz voz maxVAccel maxVSpeed eps tr) + voz * (quadtime soz voz maxVAccel maxVSpeed eps tr) + soz) + 
  (eps*maxVSpeed* (maxi 0 $ tr - (mvsstart soz voz maxVAccel maxVSpeed eps tr)))

--tcas_alt_at(soz,voz,MaxVAccel,MaxVSpeed,eps)(tr): real =
--LET
--quadtime = min(tr,max_vs_start),
--quadpart = eps*(MaxVAccel/2)*quadtime^2 + voz*quadtime + soz,
--linearpart = eps*MaxVSpeed*max(0,tr-max_vs_start)
--IN
--quadpart + linearpart

-------------------------------------------------

epsi_isC :: Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double -> Stream Double -> 
            Stream Double -> Stream Double
epsi_isC soz siz voz viz maxVAccel maxVSpeed alim dmod tau = label "?epsi_isC" $ 
  tcas_direction soz siz voz viz maxVAccel maxVSpeed alim dmod tau 

isCorrective :: Stream Double -> Stream Double -> Stream Double -> Stream Double -> 
                Stream Double -> Stream Double -> Stream Double -> Stream Double -> 
                Stream Double -> Stream Double -> 
                Stream Double -> Stream Double -> 
                Stream Bool
isCorrective sx sy soz siz vx vy voz viz maxVAccel maxVSpeed alim dmod = label "?isCorrective" $ 
  (normsq2dim sx sy < (sq dmod)) ||
  ( 
   (scalar2dim sx sy vx vy < 0) && 
   ( 
    ( (epsi_isC soz siz voz viz maxVAccel maxVSpeed alim dmod (tau_current sx sy vx vy dmod))*
    ((soz-siz) + (tau_current sx sy vx vy dmod)*(voz-viz)) )
    < alim
   )
  )


-----------------------------------------
-- Spec
-----------------------------------------

spec :: Spec
spec = do
--  trigger "alert_WCVtau" (wellClearViolation tau relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
--  trigger "alert_WCVtcpa" (wellClearViolation tcpa relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
--  trigger "alert_WCVtaumod" (wellClearViolation taumod relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
--  trigger "alert_WCVtep" (wellClearViolation tep relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ) []
  trigger "alert_TCASII_RA" (tcasII_RA relPositionX relPositionY relPositionZ relVelocityX relVelocityY relVelocityZ (tauRA $ sensitivityLevel ownPositionZ) (0) (dmodRA $ sensitivityLevel ownPositionZ) (zthrRA $ sensitivityLevel ownPositionZ) (hmdRA $ sensitivityLevel ownPositionZ) (true)) []
--  trigger "isCorrective" (isCorrective relPositionX relPositionY ownPositionZ intPositionZ relVelocityX relVelocityY ownVelocityZ intVelocityZ VsAccel MaxVs (tauRA $ sensitivityLevel ownPositionZ) (dmodRA $ sensitivityLevel ownPositionZ)) []


main = do
   reify spec >>= S.proofACSL S.defaultParams


--------------------------------------------------------------------------------
