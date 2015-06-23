import Copilot.Language.Reify
import Copilot.Language
import Copilot.Library.Clocks
import Copilot.Library.Utils
import Copilot.Library.Statistics

import qualified Copilot.Compile.SBV as S
import qualified Copilot.Compile.C99 as C
import qualified Prelude as P
import Debug.Trace
import Control.Monad (foldM_)

--------------------------------------------------------------------------------


import qualified Data.List as L

inputData :: Stream Word16
inputData = replicate 5 0 ++ inputData + 5

inputFData :: Stream Float
inputFData = replicate 5 0 ++ inputFData + 5

minV :: Stream Word16
minV = min 3 inputData

maxV :: Stream Word16
maxV = max 3 inputData

sumV :: Stream Word16
sumV = sum 3 inputData

meanV :: Stream Float
meanV = mean 3 inputFData


spec :: Spec
spec = do
  observer "minV"  minV
  observer "maxV"  maxV
  observer "sumV"  sumV
  observer "meanV" meanV

main = do
   reify spec >>= C.compile C.defaultParams 
   reify spec >>= S.compile S.defaultParams


--------------------------------------------------------------------------------
