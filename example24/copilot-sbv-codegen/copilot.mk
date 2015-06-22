# Makefile rules for the Copilot driver.

#CCFLAGS= -std=c99 -Werror -Wall -Wextra -Wbad-function-cast -Wcast-align -Wcast-qual -Wconversion -Wdisabled-optimization -Wformat=2 -Winit-self -Winline -Wnested-externs -Wold-style-definition -Wpointer-arith -Wredundant-decls -Wstrict-prototypes -Wswitch-default -Wswitch-enum -Wundef -Wwrite-strings -Wshadow -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-label -O2 -march=native  -c

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a