import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L


myLatitude = externD "my_latitude" Nothing
-- ranging from +90 (north) to -90 (south)
myLongitude = externD "my_longitude" Nothing
-- ranging from +180 (east) to -180 (west)
myTimestamp = externW64 "my_timestamp" Nothing
-- current timestamp (not to process outdated info)
myTimestampBefore = [0] ++ myTimestamp
-- the timestamp of the previous sampling
myICAO24 = externW64 "my_ICAO24" Nothing
-- encoded on the 24 lower bits ie. is between 
-- 0 (0b000000000000000000000000) and 16777215 (0b111111111111111111111111)
myAltitude = externW64 "my_altitude" Nothing
--in feet : must be lower than 100000 ft
myGroundspeed = externW64 "my_groundspeed" Nothing
-- in knots (nm per hour) : must be lower than 1000 knots -- TODO : is this the GPS calculated speed ?
myHeading = externW64 "my_heading" Nothing
-- ranging from 0 to 359
myAGflag = externB "my_AGflag" Nothing
-- true = A, false = G
aflag = true
gflag = false

feedTimestamp = externW64 "timestamp_feed" Nothing
-- Timestamp feed
feedICAO24 = externW64 "ICAO24_feed" Nothing
-- ICAO 24 bit transponder code
feedAltitude = externW64 "altitude_feed" Nothing
-- Altitude (in feet)
feedLatitude = externD "latitude_feed" Nothing
-- ranging from +90 (north) to -90 (south)
feedLongitude = externD "latitude_feed" Nothing
-- ranging from +180 (east) to -180 (west)
feedGroundspeed = externW64 "groundspeed_feed" Nothing
-- Groundspeed in knots (nm per hour)
feedHeading = externW64 "heading_feed" Nothing
-- ranging from 0 to 359
feedAGflag = externB "AGflag_feed" Nothing
-- true = A, false = G

isMyDataInconsistent = mux (not $ ((-90) <= myLatitude) && (myLatitude <= 90)) (true) 
                       $ mux (not $ ((-180) <= myLongitude) && (myLongitude <= 180)) (true) 
                       $ mux (not $ (myTimestamp >= myTimestampBefore)) (true)
                       $ mux (not $ (0 <= myICAO24) && (myICAO24 <= 16777215)) (true)
                       $ mux (not $ (0 <= myAltitude) && (myAltitude <= 100000)) (true)
                       $ mux (not $ (0 <= myGroundspeed) && (myGroundspeed <= 1000)) (true)
                       $ mux (not $ (0 <= myHeading) && (myHeading <= 359)) (true)
                       $ mux (not $ (myAGflag == gflag) ==> (myGroundspeed < 200)) (true)
                       $ false
-- some criterias are there http://www.knmi.nl/bibliotheek/knmipubTR/TR336.pdf
-- but I seriously doubt that they are correct (lat lon)
-- and there is no control of high level timing of the data incoming from the iPad extension gps toolset (how can we know that the latitude and the heading are sampled at the same time ?). 


spec :: Spec
spec = do
  trigger "alert_inconsistent_data_from_me" isMyDataInconsistent []
  
main = do
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
