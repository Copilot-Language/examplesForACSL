# Makefile rules for the Copilot driver.

CCFLAGS=-fnone 
CC=ccomp

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a

fval: 
	frama-c -val -main testing -slevel 10000000 *.h *.c | tee logval

fwp: 
	frama-c -wp -wp-out . -wp-prover CVC4 -wp-split *.h *.c | tee logwp

splint: 
	splint -comment-char % *.h *.c | tee logsplint
