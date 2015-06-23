# examplesForACSL

A little todo list for you, dear reader that readsme !

- Update cabal : cabal install cabal-install
Make sure that it is effectively updated : check your path, everything ...
- If not already updated, update the directory package to the needed version
- Update ghc to ghc 7.10 : you'll have to compile it by yourself. Download the sources and 
        
        ./configure
        sudo make install

- Install frama-c (Sodium), CompCert and its Standard C library (RTFM for that).
- Install splint (if you're still alive)


Then for merging with me :
- Give me $ 802,708 first*
- Clone the (real) sbv repository git from the source.
- Make him understand where your sandbox is :
        cabal sandbox init --sandbox WHEREYOURSANDBOXIS
-Then just do the following :
        cabal build
        cabal install
-You now have a good version of sbv, now you can compile my beautiful project ! Just switch to the right branch (or merge it if you are not affraid of death), and make test in the Copilot directory, it should compile, but the copilot-regression will fail miserably ! What will the world be without planned obscolescence.

If you want to test it, you'll have to do the following :
- Clone the examplesForACSL respoitory (if you're reading that, it means that you have probably done it already). 
- Cd in an example directory (do not try zz, it will not work).
- Setup the sandbox with
         cabal sandbox init --sandbox WHEREYOURSANDBOXIS
- Run make sandbox
- cd in the directory named copilot-sbv-codegen
- Run make fval for the frama-c analysis, make splint for splint and make all for compiling it into a library.






Total Physical Source Lines of Code (SLOC)                = 25,280
Development Effort Estimate, Person-Years (Person-Months) = 5.94 (71.31)
 (Basic COCOMO model, Person-Months = 2.4 * (KSLOC**1.05))
Schedule Estimate, Years (Months)                         = 1.05 (12.65)
 (Basic COCOMO model, Months = 2.5 * (person-months**0.38))
Estimated Average Number of Developers (Effort/Schedule)  = 5.64
Total Estimated Cost to Develop                           = $ 802,708
 (average salary = $56,286/year, overhead = 2.40).

