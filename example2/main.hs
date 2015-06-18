import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace

--------------------------------------------------------------------------------


import qualified Data.List as L

spec :: Spec
spec = 
  trigger "f" true [ arg $ mult 5 ]

  where
  mult :: Word64 -> Stream Word64
  mult 0 = 1
  mult i = constant i * mult (i-1)


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
