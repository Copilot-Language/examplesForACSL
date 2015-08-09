/* File: "ext_ident_double_199_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: det2dim",color=plum, style=filled]
0 -> 1
2 [label="op2: -",color=green4, style=filled]
1 -> 2
3 [label="op2: *",color=green4, style=filled]
2 -> 3
4 [label="op2: -",color=green4, style=filled]
3 -> 4
5 [label="ext_ident_double_191",color=cyan4, style=filled]
4 -> 5
10 [label="ext_ident_double_192",color=cyan4, style=filled]
4 -> 10
15 [label="op2: -",color=green4, style=filled]
3 -> 15
16 [label="ext_ident_double_193",color=cyan4, style=filled]
15 -> 16
23 [label="ext_ident_double_194",color=cyan4, style=filled]
15 -> 23
30 [label="op2: *",color=green4, style=filled]
2 -> 30
31 [label="op2: -",color=green4, style=filled]
30 -> 31
32 [label="ext_ident_double_195",color=cyan4, style=filled]
31 -> 32
39 [label="ext_ident_double_196",color=cyan4, style=filled]
31 -> 39
46 [label="op2: -",color=green4, style=filled]
30 -> 46
47 [label="ext_ident_double_197",color=cyan4, style=filled]
46 -> 47
52 [label="ext_ident_double_198",color=cyan4, style=filled]
46 -> 52


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_191) - (ext_ident_double_192))) * (((ext_ident_double_193) - (ext_ident_double_194))))) - (((((ext_ident_double_195) - (ext_ident_double_196))) * (((ext_ident_double_197) - (ext_ident_double_198))))))));
*/
SDouble ext_ident_double_199_arg0(const SDouble ext_ident_double_191,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_ident_double_192,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ident_double_193, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_194, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_195, const SDouble ext_ownship_vx,
                                  const SDouble ext_ident_double_196, const SDouble ext_intruder_vx,
                                  const SDouble ext_ident_double_197,
                                  const SDouble ext_ident_double_198,
                                  const SDouble ext_intruder_y_position_ft)
{
  const SDouble s0 = ext_ident_double_191;
  const SDouble s2 = ext_ident_double_192;
  const SDouble s4 = ext_ident_double_193;
  const SDouble s6 = ext_ident_double_194;
  const SDouble s8 = ext_ident_double_195;
  const SDouble s10 = ext_ident_double_196;
  const SDouble s12 = ext_ident_double_197;
  const SDouble s13 = ext_ident_double_198;
  const SDouble s15 = s0 - s2;
  const SDouble s16 = s4 - s6;
  const SDouble s17 = s15 * s16;
  const SDouble s18 = s8 - s10;
  const SDouble s19 = s12 - s13;
  const SDouble s20 = s18 * s19;
  const SDouble s21 = s17 - s20;
  const SDouble s22 = s21 /* det2dim */;

  return s22;
}
