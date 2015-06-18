import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks
import Copilot.Library.RegExp
import Copilot.Library.Utils

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

reset :: Stream Bool
reset = [ False ] ++ cycle [ False, False, False, True ]


-- | Regular expression matching on integral streams
s :: Stream Int8
s = extern "e" (Just $ P.cycle [ 0, 1 ])

test1 :: Stream Bool
test1 = copilotRegexp s "(<0>?<0>?<1>)+|<2>?<3>+" reset


-- | Regular expressions over boolean streams

s0, s1, s2, s3, s4, s5 :: Stream Bool
s0    = [ True,  False, False, False, False, False ] ++ s1
s1    = [ False, True,  False, False, False, False ] ++ s2
s2    = [ False, False, True,  False, False, False ] ++ s3
s3    = [ False, False, False, True,  False, False ] ++ s4
s4    = [ False, False, False, False, True,  False ] ++ s5
s5    = [ False, False, False, False, False, True  ] ++ s0


test2 :: Stream Bool
test2 = copilotRegexpB
       "<s0><s1><s2><s3><s4><s5>(<s0>|<s1>|<s2>|<s3>|<s4>|<s5>)+"
       [ ( "s0", s0 )
       , ( "s1", s1 )
       , ( "s2", s2 )
       , ( "s3", s3 )
       , ( "s4", s4 )
       , ( "s5", s5 ) ] false

spec :: Spec
spec = do
  observer "test1" test1
  observer "test2" test2
  observer "reset" reset
main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
