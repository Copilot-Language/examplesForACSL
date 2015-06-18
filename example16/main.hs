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
-- | Number of sat variables and a Boolean function over those variables.
type SatFunc = (Int, [Stream Bool] -> Stream Bool)

-- Takes a Sat function and returns the stream of variables and a SAT function.
sat :: SatFunc -> ([Stream Bool], Stream Bool)
sat (i,f) = (xs, res)
  where
  -- If it becomes true, it stays true.
  res   = [False] ++ (f xs || res)

  xs  = xs' i

  xs' 0 = []
  xs' n = clk (period $ 2 P.^ n) (phase (0 :: Int)) : xs' (n P.- 1)

satSpec :: SatFunc -> Spec
satSpec f = do
  observer "sat" (snd $ sat f)
  observer "done" done
  foldM_ mkObs (0 :: Int) xs

  where
  xs = fst $ sat f
  cnt :: Stream Word64 -- Would need to be extended depending on number of
                       -- variables.
  cnt = [1] ++ cnt + 1
  done = cnt == (2 P.^ length xs)
  mkObs idx strm = do observer ("obs" P.++ show idx) strm
                      return (idx P.+ 1)


f0 :: SatFunc
--f0 = (3, \[a,b,c] -> a && (b || (not c)))
f0 = (3, f) 
  where 
  f [a,b,c] = a && (b || (not c))
  f _       = error "Bad SAT function."

f1 :: SatFunc
f1 = (9, f')
  where
  f' [a,b,c,d,e,f,g,h,i] = 
    a && b && c && d && e && 
      f && g && h && i && i && not i
  f' _ = error "Bad SAT function."


spec :: Spec
spec = satSpec f0

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
