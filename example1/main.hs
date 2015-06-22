import Copilot.Language.Reify
import Copilot.Language

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace

--------------------------------------------------------------------------------


import qualified Data.List as L

nats :: Stream Word8
nats = [0,1] ++ (nats + 1)

alt :: Stream Bool
alt = [True] ++ not alt

logic :: Stream Bool
logic = [True, False] ++ logic || (drop 1 logic && ((drop 1 nats) `mod` 2 == 0))

sumExterns :: Stream Word64
sumExterns =
  let
    e1 = extern "e1" (Just [0..])
    e2 = extern "e2" (Just $ L.cycle [2,3,4])
    e3 = externArrayW64 "e3" (nats+6) 256 (Just $ repeat [0..255])
    e4 = externFun "ff" [arg nats] Nothing
  in
    e1 + e2 + e3 + e4

spec :: Spec
spec = do
  trigger "trig1" alt [ arg $ nats < 3
                      , arg sumExterns 
                      , arg logic
                      ]


main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>=  S.compile S.defaultParams


--------------------------------------------------------------------------------
