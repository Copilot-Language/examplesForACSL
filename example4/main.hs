import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P

--------------------------------------------------------------------------------


import qualified Data.List as L

b :: Stream Bool
b = [True] ++ not b

i :: Stream Int8
i = cast b

x :: Stream Word16
x = [0] ++ x + 1

y :: Stream Int32
y = 1 + cast x

spec :: Spec
spec = trigger "trigger" true [arg y, arg i]


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
