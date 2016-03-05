# examplesForACSL

A little todo list for you, dear reader that readsme !

- Update cabal : cabal install cabal-install
Make sure that it is effectively updated : check your path, everything ...
- If not already updated, update the directory package to the needed version
- Update ghc to ghc 7.10 : you'll have to compile it by yourself. Download the sources and 
        
        ./configure
        sudo make install

- Install frama-c (Sodium or Magnesium), CompCert and its Standard C library (RTFM for that).
- Install splint (if you're still alive)


Then for merging with me :
==========
- Give me $ 802,708 first*
- Clone the (real) sbv repository git from the source.
- Make him understand where your sandbox is :

        cabal sandbox init --sandbox WHEREYOURSANDBOXIS

- Then just do the following :

        cabal build
        cabal install

- You now have a good version of sbv, now you can compile my beautiful project ! Just switch to the right branch (or merge it if you are not afraid of death), and make test in the Copilot directory, it should compile, but the copilot-regression will fail miserably ! What will the world be without planned obscolescence.

If you want to test it, you'll have to do the following :
========
- Clone the examplesForACSL respoitory (if you're reading that, it means that you have probably done it already). 
- Cd in an example directory (do not try zz, it will not work).
- Setup the sandbox with

         cabal sandbox init --sandbox WHEREYOURSANDBOXIS

- Run make sandbox
- cd in the directory named copilot-sbv-codegen
- Run make fval for the frama-c analysis, make splint for splint and make all for compiling it into a library.


- Or you can also paste this (warranty void if used).

          for D in */; do cd $D; echo $D; cabal sandbox init --sandbox ../../Copilot/.cabal-sandbox/ ; make sandbox; cd copilot-sbv-codegen; make all; frama-c -val -main testing -slevel 1000 *.h *.c | tee logval; cd ..; cd ..; done






        Total Physical Source Lines of Code (SLOC)                = 25,280
        Development Effort Estimate, Person-Years (Person-Months) = 5.94 (71.31)
        (Basic COCOMO model, Person-Months = 2.4 * (KSLOC**1.05))
        Schedule Estimate, Years (Months)                         = 1.05 (12.65)
        (Basic COCOMO model, Months = 2.5 * (person-months**0.38))
        Estimated Average Number of Developers (Effort/Schedule)  = 5.64
        Total Estimated Cost to Develop                           = $ 802,708
        (average salary = $56,286/year, overhead = 2.40).




What does not work
=================

- There are many features that are limited by either SBV or copilot, some are being fixed, other need just time until they get implemented.

SBV :
- No floating point functions implemented --> Use external functions !
- No Pow for integers --> Use an external function
- No Pow for doubles --> Use an external function


ACSL frama-c value analysis :
- No lemma supported
- No let bindings supported (DO NOT USE LOCAL KEYWORD !)
- No trigonometrical functions supported --> Use external sin, cos, tan as external functions ! They are already implemented, so you do not have to provide an implementation for them.
- No pow in ACSL for contracting the pow function.
- No global strong invariants implemented (as specified)
- No external function support (or variables) implemented. Gives status unknown for something like 

        SWord64 ff (Sword64 ext_a) return ext_a;

- Casts are sometimes strange ...

ACSL frama-c wp plugin :
- No global invariant implement (neither normal nor strong) !
- No bitwise handle.







List of examples :

1 Basic test, m4 support, and up to date Makefile.
2 Basic test, no feature.
3 Basic test, no feature.
4 Basic test, no feature.
5 Basic test, no feature.
6 Basic test, no feature.
7 Basic test, no feature.
8 Basic test, no feature.
9 Basic test, no feature.
10 Basic test, no feature.
11 Basic test, no feature.
12 Basic test, no feature.
13 Basic test, no feature.
14 Basic test, no feature.
15 Basic test, no feature.
16 Basic test, no feature.
17 Basic test, no feature.
18 Basic test, no feature.
19 Basic test, no feature.
20 Basic test, no feature.
21 Basic test, no feature.
22 Basic test, no feature.
23 Basic test, no feature.
24 Basic test, no feature.
25 Basic test, no feature.
26 Basic test, no feature.
27 Basic test, no feature.
28 Uncomplete test, unfinished.
29 Cesar's self separation criterion implementation. With labels, with up to date Makefile.
30 The same, without labels. Outdated.
31 The same criterions, but with 1 sampling memory for calculating the planned speed (t := t + 1), no labels
32 The same as 31 with labels
33 Basic test, m4 implemented. Used as a proof of concept for the 31.
34 Well clear implementation, without labels
35 Well clear implementation, with labels
36 TCAS II, with labels
37 Struct example, DOES NOT WORK
38 WCV, used for proofs only.
WCV The real example. (the one of the paper, that works)
manuel example 1 Basic test, no feature.
manuel example 2 Basic test, no feature.
