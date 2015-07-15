import Copilot.Language.Reify
import Copilot.Language
import Copilot.Language.Operators.Constant
import Copilot.Library.Clocks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

boot :: Stream Bool
boot = [True]++(false)

hist :: Stream Word32
hist = [6] ++ (hist + 1)

signm :: Stream Word32
signm = mux (boot) (hist) ([0]++hist)


spec :: Spec
spec = do
  observer "hist" hist
  observer "sign" signm

main = do
   (interpret 30 spec)
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
