# Makefile rules for the Copilot driver.

driver: driver.c copilot.h internal.a
	${CC} ${CCFLAGS} $< -o $@ internal.a
