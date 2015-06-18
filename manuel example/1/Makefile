default:
	ghc main.hs
	./main

sandbox:
	cabal exec -- ghc main.hs
	./main

clean:
	rm *~
	rm main.hi
	rm main.o
	rm -rf copilot-c99-codegen
	rm main
