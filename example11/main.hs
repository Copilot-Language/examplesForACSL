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

---------------------------------------------------------------------------------
-- Regular expressions

{- 
We'll build a Copilot program to accept the regular language over the alphabet
{0,1} that contains an even number of 0s.  
-}

reAccept :: Spec
reAccept = do 
  observer "accept" accept
  observer "string" string
  where
  accept :: Stream Bool
  accept = [True] ++ mux (string == 0) (mux accept false true) accept

  -- Input tokens.
  string :: Stream Word8
  string = [0] ++ (mux (string == 0) 1 0)

-- interpret 10 reAccept

---------------------------------------------------------------------------------

---------------------------------------------------------------------------------
-- Context-free Grammars

{-
This Copilot program recognizes <0^n 1^n>, for n >= 0.  
-}

cfAccept :: Int -> Spec
cfAccept n = do
  observer "accept" accept
  observer "string" string
  where
  accept :: Stream Bool
  accept = mux (zerosSeen == 0) true false

  zerosSeen :: Stream Word64
  zerosSeen = [0] ++ (mux (string == 0) (zerosSeen + 1) (zerosSeen - 1))

  -- Input tokens.
  string :: Stream Word8
  string = L.replicate n 0 P.++ L.replicate n 1 ++ 0 -- don't care about part of
                                                     -- stream after ++

-- interpret 40 (cfAccept 10)
---------------------------------------------------------------------------------

---------------------------------------------------------------------------------
-- Context-sensitive grammars

{-
This Copilot program recognizes <0^n 1^n 2^n>, for n >= 0.  
-}

csAccept :: Int -> Spec
csAccept n = do
  observer "accept" accept
  observer "string" string
  where
  accept :: Stream Bool
  accept = mux (zerosSeen == 0 && onesSeen == 0) true false

  zerosSeen :: Stream Word64
  zerosSeen = [0] ++ (mux (string == 0) (zerosSeen + 1) (mux (string == 1) (zerosSeen - 1) (zerosSeen)))

  onesSeen :: Stream Word64
  onesSeen = [0] ++ (mux (string == 1) (onesSeen + 1) (mux (string == 0) (onesSeen) (onesSeen - 1)))

  -- Input tokens.
  string :: Stream Word8
  string = L.replicate n 0 P.++ L.replicate n 1 P.++ L.replicate n 2 
             ++ 0 -- don't care about part of
                  -- stream after ++

-- interpret 40 (csAccept 5)
---------------------------------------------------------------------------------

---------------------------------------------------------------------------------
-- Context-sensitive grammars

{-
This Copilot program recognizes the "copy language" <xx | x \in {0,1}*>.

Note: the "trick" is to encode the history of streams in a bitvector.  Thus, we
can only recognize arbitrarily long words if we have arbitrarily long
bitvectors.  There is nothing in Copilot preventing this, but the largest base
type is currently a Word64.  

Without this encoding, we couldn't build a recognizers, because we can't
generate new streams on the fly or look back arbitrarily far in the history of a
stream; both are fixed at compile time.

-}


spec :: Spec
spec = do
  observer "accept" accept
  observer "hist" hist
  observer "string" string
  observer "cnt" cnt
  where

  accept :: Stream Bool
  accept = mux (cnt `mod` 2 == 1) false (bottom == top )
    where
    halfCnt  = cnt `div` 2
    zeroBot  = (complement $ (2^halfCnt) - 1) .&. hist
    top      = zeroBot .>>. halfCnt
    bottom   = hist - zeroBot

  hist :: Stream Word64
  hist = [0] ++ ((2^cnt) * cast string) + hist

  cnt :: Stream Word64
  cnt = [0] ++ cnt + 1

  -- Input tokens.
  string :: Stream Word8
  string = let x = [1,0,0,1,0,1] in 
           x P.++ x
             ++ 0 -- don't care about part of
                  -- stream after ++

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
