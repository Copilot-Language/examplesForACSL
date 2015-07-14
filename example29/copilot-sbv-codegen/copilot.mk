# Makefile rules for the Copilot driver.

CCFLAGS=-fnone -dasm
CC=armv7a-unknown-linux-gnueabi-ccomp
AR=armv7a-unknown-linux-gnueabi-ar

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a

fval: 
	frama-c -val -main testing -slevel 10000000 *.h *.c | tee logval

fwp: 
	frama-c -wp -wp-out . -wp-prover CVC4 -wp-split *.h *.c | tee logwp

splint: 
	splint -comment-char % *.h *.c | tee logsplint
