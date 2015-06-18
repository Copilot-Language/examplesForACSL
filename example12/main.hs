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

nats :: Stream Int32
nats = [0] ++ (1 + nats)

strm :: Stream Int32
strm =
  local (nats + 1) $ \nats' -> nats' + nats'

-- The above code corresponds to
--
-- strm :: Stream Int32
-- strm =
--   let x = nats * nats
--   in x + x

spec :: Spec
spec = do
  trigger "strm" true [arg strm]
--  trigger "strm" true [arg $ replStrm 100000]
--  trigger "strm" true [arg $ replStrm_ 100000 10000]
  -- observer "nats" nats
  -- observer "strm" strm

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
