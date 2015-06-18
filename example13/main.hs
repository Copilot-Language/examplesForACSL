import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks

import Copilot.Library.LTL
import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace

--------------------------------------------------------------------------------


import qualified Data.List as L

testAlways :: Int -> Int -> Stream Bool
testAlways i1 i2 = let input = replicate i1 P.True P.++ [ False ] ++ true
                   in  always i2 input

testNext :: Stream Bool
testNext = let input = [ False, False, True ] ++ input
           in  next input

testFuture :: Int -> Int -> Stream Bool
testFuture i1 i2 = let input = replicate i1 False P.++ [ True ] ++ false
                   in  eventually i2 input

testUntil :: Int -> Int -> Int -> Stream Bool
testUntil i1 i2 i3 =
    let t0 = replicate i1 True  ++ false
        t1 = replicate ( i2 - 1 ) False P.++ [ True ] ++ false
    in until i3 t0 t1

testRelease :: Int -> Int -> Int -> Stream Bool
testRelease i1 i2 i3 =
    let t0 = replicate i1 True ++ false
        t1 = replicate ( i2 - 1 ) False P.++ [ True ] ++ false
    in release i3 t1 t0

spec :: Spec
spec = do
  trigger "testAlways1" true [ arg $ testAlways  0  0    ]
  trigger "testAlways2" true [ arg $ testAlways  5  1    ]
  trigger "testNext"    true [ arg $ testNext            ]
  trigger "testFuture"  true [ arg $ testFuture  12  10   ]
  trigger "testUntil"   true [ arg $ testUntil   5  6  4 ]
  trigger "testRelease" true [ arg $ testRelease 5  5  4 ]


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
