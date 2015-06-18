import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks
import Copilot.Library.Statistics
import Copilot.Library.Voting

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

spec :: Spec
spec = do 
  trigger "maj" true [ arg maj ]

  trigger "aMaj" true 
    [ arg $ aMajority xs maj ]

  where

  maj = majority xs
  xs = concat (replicate 1 ls)
  ls = [a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z]

  a = [0] ++ a + 1 :: Stream Word32
  b = [0] ++ b + 1
  c = [0] ++ c + 1
  d = [0] ++ d + 1
  e = [1] ++ e + 1
  f = [1] ++ f + 1
  g = [1] ++ g + 1
  h = [1] ++ h + 1
  i = [1] ++ i + 1
  j = [1] ++ j + 1
  k = [1] ++ k + 1
  l = [1] ++ l + 1
  m = [1] ++ m + 1
  n = [1] ++ n + 1
  o = [1] ++ o + 1
  p = [1] ++ p + 1
  q = [1] ++ q + 1
  r = [1] ++ r + 1
  s = [1] ++ s + 1
  t = [1] ++ t + 1
  u = [1] ++ u + 1
  v = [1] ++ v + 1
  w = [1] ++ w + 1
  x = [1] ++ x + 1
  y = [1] ++ y + 1
  z = [1] ++ z + 1

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
