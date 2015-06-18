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

p :: Word8
p = 5 

clkStream, clk1Stream :: Stream Bool
clkStream  = clk  ( period p ) ( phase 0 )
clk1Stream = clk1 ( period p ) ( phase 0 )


spec :: Spec
spec = do
  observer "clk" clkStream
  observer "clk1" clk1Stream


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
