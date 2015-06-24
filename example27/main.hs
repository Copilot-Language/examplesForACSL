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

mpi = 4 * (atan 1)

spec :: Spec
spec = do
  prop "bounds" bounds
  prop "dist_eq" $ abs (d1 - d2) < err
  prop "sin_pi" $ abs ((sin lat1) - (sin $ lat1 + 2 * mpi)) < err
  prop "cos_pi" $ abs ((cos lat1) - (cos $ lat1 + 2 * mpi)) < err
  observer "obs_d1" d1
  observer "obs_d2" d2
  where
    err = 0.1
    b = 0.5

    n = 3
    (p1, p2, p3, p4) = L.unzip4 [(x, y, z, w) | x <- [1..n], y <- [1..n], z <- [1..n], w <- [1..n]]
    lat1 = externD "lat1" $ Just p1
    lon1 = externD "lon1" $ Just p2
    lat2 = externD "lat2" $ Just p3
    lon2 = externD "lon2" $ Just p4
    bounds = lat1 < b && lat1 > (-b)
          && lat2 < b && lat2 > (-b)
          && lon1 < b && lon1 > (-b)
          && lon2 < b && lon2 > (-b)
    d1 = acos ((sin lat1) * (sin lat2) + (cos lat1) * (cos lat2) * (cos (lon1 - lon2)))
    d2 = 2 * asin (sqrt (
      (sin ((lat1 - lat2)/2)) ** 2
      + (cos lat1) * (cos lat2) * ((sin ((lon1 - lon2)/2)) ** 2)))
  
main = do
   (interpret 14 spec)
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
