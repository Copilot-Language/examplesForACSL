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

flipflop :: Stream Bool -> Stream Bool
flipflop x = y
  where
    y = [False] ++ mux x (not y) y

nats :: Stream Word64
nats = [0] ++ nats + 1

even1 :: (P.Integral a, Typed a) => Stream a -> Stream Bool
even1 x = x `mod` 2 == 0

odd1 :: (P.Integral a, Typed a) => Stream a -> Stream Bool
odd1 = not . even1

counter :: (Eq a, Num a, Typed a) => Stream Bool -> Stream a
counter reset = y
  where
  zy = [0] ++ y
  y  = mux reset 0 (zy + 1)

booleans :: Stream Bool
booleans = [True, True, False] ++ booleans

fib :: Stream Word64
fib = [1, 1] ++ fib + drop 1 fib

bitWise :: Stream Word8
bitWise = ( let a = [ 1, 1, 0 ] ++ a in a )
          .^.
          ( let b = [ 0, 1, 1 ] ++ b in b )

sumExterns :: Stream Word64
sumExterns =
  let ex1 = extern "e1" (Just e1)
      ex2 = extern "e2" (Just e2)
  in  ex1 + ex2

--- Some infinite lists for simulating external variables:
e1, e2 :: [Word64]
e1 = [0..]
e2 = 5 : 4 : e2

--------------------------------------------------------------------------------

--
-- An example of a complete copilot specification.
--

-- A specification:
spec :: Spec 
spec = do

    -- A trigger with four arguments:
    trigger "e" true -- booleans
      [ arg fib, arg nats, arg sumExterns, arg bitWise ]

    -- A trigger with two arguments:
    trigger "f" booleans
      [ arg fib, arg sumExterns ]
--      [ arg fib, arg nats ]

    -- A trigger with a single argument:
    trigger "g" (flipflop booleans)
      [ arg (sumExterns + counter false + 25) ]
--      [ arg (counter false + 25 :: Stream Int32) ]

    -- A trigger with a single argument (should never fire):
    let e3 = [1, 1] P.++ zipWith (+) e3 (P.drop 1 e3)
    trigger "h" (extern "e3" (Just e3) /= fib)
      [ arg (0 :: Stream Int8) ]

    observer "i" (odd1 nats)

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
