default:
	ghc main.hs
	./main

sandbox:
	cabal exec -- ghc main.hs
	./main

val:
	frama-c -val -main step copilot-sbv-codegen/internal.h copilot-sbv-codegen/copilot.h copilot-sbv-codegen/*.c -unspecified-access

clean:
	rm *~
	rm main.hi
	rm main.o
	rm -rf copilot-c99-codegen
	rm main
