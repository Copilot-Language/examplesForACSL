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

spec :: Spec
spec = do
  observer "hist" hist
  observer "sign" signm
  observer "cnt" cnt
  
  where
  hist :: Stream Int32
  hist = (0^cnt)

  signm :: Stream Int32
  signm = signum (cnt)

  cnt :: Stream Int32
  cnt = [0] ++ (-1-cnt)

  -- Input tokens.
  
main = do
   (interpret 14 spec)
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
