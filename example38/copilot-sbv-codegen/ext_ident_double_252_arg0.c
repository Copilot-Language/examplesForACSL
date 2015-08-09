/* File: "ext_ident_double_252_arg0.c". Automatically generated by SBV. Do not edit! */

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
5 [label="ext_ident_double_244",color=cyan4, style=filled]
4 -> 5
10 [label="ext_ident_double_245",color=cyan4, style=filled]
4 -> 10
15 [label="op2: -",color=green4, style=filled]
3 -> 15
16 [label="ext_ident_double_246",color=cyan4, style=filled]
15 -> 16
23 [label="ext_ident_double_247",color=cyan4, style=filled]
15 -> 23
30 [label="op2: *",color=green4, style=filled]
2 -> 30
31 [label="op2: -",color=green4, style=filled]
30 -> 31
32 [label="ext_ident_double_248",color=cyan4, style=filled]
31 -> 32
39 [label="ext_ident_double_249",color=cyan4, style=filled]
31 -> 39
46 [label="op2: -",color=green4, style=filled]
30 -> 46
47 [label="ext_ident_double_250",color=cyan4, style=filled]
46 -> 47
52 [label="ext_ident_double_251",color=cyan4, style=filled]
46 -> 52


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_244) - (ext_ident_double_245))) * (((ext_ident_double_246) - (ext_ident_double_247))))) - (((((ext_ident_double_248) - (ext_ident_double_249))) * (((ext_ident_double_250) - (ext_ident_double_251))))))));
*/
SDouble ext_ident_double_252_arg0(const SDouble ext_ident_double_244,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_ident_double_245,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ident_double_246, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_247, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_248, const SDouble ext_ownship_vx,
                                  const SDouble ext_ident_double_249, const SDouble ext_intruder_vx,
                                  const SDouble ext_ident_double_250,
                                  const SDouble ext_ident_double_251,
                                  const SDouble ext_intruder_y_position_ft)
{
  const SDouble s0 = ext_ident_double_244;
  const SDouble s2 = ext_ident_double_245;
  const SDouble s4 = ext_ident_double_246;
  const SDouble s6 = ext_ident_double_247;
  const SDouble s8 = ext_ident_double_248;
  const SDouble s10 = ext_ident_double_249;
  const SDouble s12 = ext_ident_double_250;
  const SDouble s13 = ext_ident_double_251;
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
