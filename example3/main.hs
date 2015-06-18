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

extArr :: Stream Word32
extArr = externArray "arr1" arrIdx 5 (Just $ L.repeat [7,8,9,10,11])

arrIdx :: Stream Word32
arrIdx = [0] ++ (arrIdx + 1) `mod` 4

arrIdx2 :: Stream Word8
arrIdx2 = extern "idx2" (Just [0,0..])

extArr2 :: Stream Word16 -> Stream Word32
extArr2 idx = externArray "arr2" idx 4 (Just $ L.repeat [1,2,3,4])

extArr3 :: Stream Word32
extArr3 = extArr2 (cast $ externW8 "idx3" (Just $ L.cycle [0,1,2])) 

spec :: Spec
spec = trigger "trigger" true [ arg extArr
                              , arg (extArr2 (cast arrIdx2))
                              , arg extArr3
-- Throws an exception since the index is too big for the array!
--                              , arg (extArr2 5)
                              ]

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
