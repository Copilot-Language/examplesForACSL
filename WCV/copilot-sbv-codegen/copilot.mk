# Makefile rules for the Copilot driver.

CCFLAGS=-fnone 
CC=ccomp
SHELL := /bin/bash

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a

fval: 
	frama-c -val -main testing -slevel 10000000 *.h *.c | tee logval

fwp: 
	parallel frama-c -wp -wp-out . -wp-timeout 20 -wp-prover CVC4 -wp-split {} ::: *.c | tee >logfwp >(grep 'Proved\|Unknown\|Timeout\|Failed\|Qed:\s\|CVC4:\s\|Parsing .*\.c' > logfwpcompact) >(grep 'Proved\|Qed:\s\|CVC4:\s\|Unknown\|Timeout\|Failed\|Parsing .*\.c')

splint: 
	splint -comment-char % *.h *.c | tee logsplint
