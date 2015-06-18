import Copilot.Language.Reify
import Copilot.Language

import qualified Copilot.Compile.SBV as S
import qualified Prelude as P

--------------------------------------------------------------------------------


import qualified Data.List as L

nats :: Stream Word64
nats = [0] ++ nats + 1

alt :: Stream Bool
alt = [True] ++ not alt

logic :: Stream Bool
logic = [True, False] ++ logic || drop 1 logic

sumExterns :: Stream Word64
sumExterns =
  let
    e1 = extern "e1" (Just [0..])
    e2 = extern "e2" (Just $ L.cycle [2,3,4])
  in
    e1 + e2 + e1

spec :: Spec
spec = do
  trigger "trig1" alt [ arg $ nats < 3
                      , arg sumExterns 
                      , arg logic
                      ]


main = do
   interpret 10 spec
   --reify spec >>= C.compile C.defaultParams 
   reify spec >>=  S.compile S.defaultParams 


--------------------------------------------------------------------------------
