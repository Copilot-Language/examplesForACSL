import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks
import Copilot.Library.Stacks

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

-- push a counter from 1 to 5 onto the stack
pushSignal :: Stream Bool
pushSignal = replicate 5 True ++ false

pushValue :: Stream Word16
pushValue  = [ 1 ] ++ pushValue + 1

-- then wait one tick and pop 6 values off the stack again
-- ( leaving the default/start value )
popSignal :: Stream Bool
popSignal = replicate 6 False P.++ replicate 6 True ++ false

-- all operations on a stack of depth 5, of type Word16 and with
-- start/default value 0
stackStream :: Stream Word16
stackStream = stack (5::Int) 0 popSignal pushSignal pushValue

spec :: Spec
spec = 
  observer "stack" stackStream

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
