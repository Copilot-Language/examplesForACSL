import Copilot.Language
import Copilot.Language.Reify
import Copilot.Core.Type
import Copilot.Core.PrettyDot as PD
import Copilot.Language.Operators.Extern
import qualified Copilot.Compile.SBV as C
import qualified Prelude

simple :: Stream Bool -- STRUCTS MUST BE OF TYPE Stream Bool
simple = externStruct "simple" [ ("example", arg example) ]
  where
    example :: Stream Bool
    example = true
--simple = externStruct "simple" [ structarg "running" (arg running), structarg "temp" (arg temp) ]

run :: Stream Bool
run = simple#"example"

spec :: Spec
spec = do
  observer "trigger1" run


main :: IO ()
main = do
  reify spec >>= (putStr . PD.prettyPrintDot)
  reify spec >>= C.compile C.defaultParams
