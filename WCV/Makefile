default:
	m4 main.hs > tmp.hs
	ghc tmp.hs -o main
	./main

sandbox:
	m4 main.hs > tmp.hs
	cabal exec -- ghc tmp.hs -o main
	./main

sindent:
	m4 main.hs > tmp.hs
	cabal exec -- ghc -fno-code -ddump-parsed tmp.hs

clean:
	rm *~
	rm tmp.hi
	rm tmp.o
	rm -rf copilot-c99-codegen
	rm main

dead:
	gcc script.cpp -o a
	for i in copilot-sbv-codegen/*; do if [ "$${i}" != "$${i%.c}" ];then ./a $$i > $$i.tmp; rm $$i; mv $$i.tmp $$i; fi; done

dot:
	gcc scriptdot.cpp -o a
	for i in copilot-sbv-codegen/*; do if [ "$${i}" != "$${i%.c}" ];then ./a $$i > $$i.gv; dot -Tps $$i.gv -o $$i.ps; fi; done

acsl:
	m4 main.hs > tmp.hs
	cabal exec -- ghc tmp.hs -o main
	./main
	make dead
	make dot
	make fwp -C copilot-sbv-codegen

compile:
	m4 -DproofACSL=compile main.hs > tmp.hs
	cabal exec -- ghc tmp.hs -o main
	./main
	make dead
	make all -C copilot-sbv-codegen

monitor:
	gcc -m32 -lm monitor.c copilot-sbv-codegen/driver.c copilot-sbv-codegen/internal.a -o monitor
