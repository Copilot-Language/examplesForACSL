import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks
import Copilot.Library.Voting
import Copilot.Library.PTLTL

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

spec :: Spec
spec = do
  trigger "shutoff" (not ok) [arg maj]

  where
  vals     = [ externW8 "tmp_probe_0" two51
             , externW8 "tmp_probe_1" two51
             , externW8 "tmp_probe_2" zero]
  exceed   = map (> 250) vals
  maj      = majority exceed
  checkMaj = aMajority exceed maj
  ok       = alwaysBeen ((maj && checkMaj) ==> extern "cooler" cooler) 

  two51  = Just $ [251, 251] P.++ repeat (250 :: Word8)
  zero   = Just $ repeat (0 :: Word8)
  cooler = Just $ [True, True] P.++ repeat False


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
