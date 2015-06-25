# Makefile rules for the Copilot driver.

#CCFLAGS= -std=c99 -Werror -Wall -Wextra -Wbad-function-cast -Wcast-align -Wcast-qual -Wconversion -Wdisabled-optimization -Wformat=2 -Winit-self -Winline -Wnested-externs -Wold-style-definition -Wpointer-arith -Wredundant-decls -Wstrict-prototypes -Wswitch-default -Wswitch-enum -Wundef -Wwrite-strings -Wshadow -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-label -O2 -march=native  -c
CCFLAGS= 
CC=ccomp

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a

fval: 
	frama-c -val -main testing -slevel 10000000 *.h *.c | tee logval

fwp: 
	frama-c -wp -wp-out . -wp-prover Z3 -main testing *.h *.c | tee logwp

splint: 
	splint -comment-char % *.h *.c | tee logsplint
