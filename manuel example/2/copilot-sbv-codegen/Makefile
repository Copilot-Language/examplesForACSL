# Makefile for internal. Automatically generated by SBV. Do not edit!

# include any user-defined .mk file in the current directory.
-include *.mk

CC=gcc
CCFLAGS?=-Wall -O3 -DNDEBUG -fomit-frame-pointer
AR=ar
ARFLAGS=cr

all: internal.a

internal.a: update_statett_0.o update_statett_1.o update_statett_2.o trigger_guard_trig1.o trigger_trig1_arg_0.o trigger_trig1_arg_1.o trigger_trig1_arg_2.o
	${AR} ${ARFLAGS} $@ $^

update_statett_0.o: update_statett_0.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

update_statett_1.o: update_statett_1.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

update_statett_2.o: update_statett_2.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

trigger_guard_trig1.o: trigger_guard_trig1.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

trigger_trig1_arg_0.o: trigger_trig1_arg_0.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

trigger_trig1_arg_1.o: trigger_trig1_arg_1.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

trigger_trig1_arg_2.o: trigger_trig1_arg_2.c internal.h
	${CC} ${CCFLAGS} -c $< -o $@

clean:
	rm -f *.o

veryclean: clean
	rm -f internal.a
