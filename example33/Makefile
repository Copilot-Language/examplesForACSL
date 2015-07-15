default:
	m4 main.hs > tmp.hs
	ghc tmp.hs -o main
	./main

sandbox:
	m4 main.hs > tmp.hs
	cabal exec -- ghc tmp.hs -o main
	./main

val:
	frama-c -val -main step copilot-sbv-codegen/internal.h copilot-sbv-codegen/copilot.h copilot-sbv-codegen/*.c -unspecified-access

clean:
	rm *~
	rm tmp.hi
	rm tmp.o
	rm -rf copilot-c99-codegen
	rm main
