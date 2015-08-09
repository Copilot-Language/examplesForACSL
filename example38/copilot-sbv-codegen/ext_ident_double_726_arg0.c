/* File: "ext_ident_double_726_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: scalar2dim",color=plum, style=filled]
0 -> 1
2 [label="op2: +",color=green4, style=filled]
1 -> 2
3 [label="op2: *",color=green4, style=filled]
2 -> 3
4 [label="op2: -",color=green4, style=filled]
3 -> 4
5 [label="ext_ident_double_718",color=cyan4, style=filled]
4 -> 5
10 [label="ext_ident_double_719",color=cyan4, style=filled]
4 -> 10
15 [label="op2: -",color=green4, style=filled]
3 -> 15
16 [label="ext_ident_double_720",color=cyan4, style=filled]
15 -> 16
23 [label="ext_ident_double_721",color=cyan4, style=filled]
15 -> 23
30 [label="op2: *",color=green4, style=filled]
2 -> 30
31 [label="op2: -",color=green4, style=filled]
30 -> 31
32 [label="ext_ident_double_722",color=cyan4, style=filled]
31 -> 32
37 [label="ext_ident_double_723",color=cyan4, style=filled]
31 -> 37
42 [label="op2: -",color=green4, style=filled]
30 -> 42
43 [label="ext_ident_double_724",color=cyan4, style=filled]
42 -> 43
50 [label="ext_ident_double_725",color=cyan4, style=filled]
42 -> 50


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_718) - (ext_ident_double_719))) * (((ext_ident_double_720) - (ext_ident_double_721))))) + (((((ext_ident_double_722) - (ext_ident_double_723))) * (((ext_ident_double_724) - (ext_ident_double_725))))))));
*/
SDouble ext_ident_double_726_arg0(const SDouble ext_ident_double_718,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_ident_double_719,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ident_double_720, const SDouble ext_ownship_vx,
                                  const SDouble ext_ident_double_721, const SDouble ext_intruder_vx,
                                  const SDouble ext_ident_double_722,
                                  const SDouble ext_ident_double_723,
                                  const SDouble ext_intruder_y_position_ft,
                                  const SDouble ext_ident_double_724, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_725, const SDouble ext_intruder_vy)
{
  const SDouble s0 = ext_ident_double_718;
  const SDouble s2 = ext_ident_double_719;
  const SDouble s4 = ext_ident_double_720;
  const SDouble s6 = ext_ident_double_721;
  const SDouble s8 = ext_ident_double_722;
  const SDouble s9 = ext_ident_double_723;
  const SDouble s11 = ext_ident_double_724;
  const SDouble s13 = ext_ident_double_725;
  const SDouble s15 = s0 - s2;
  const SDouble s16 = s4 - s6;
  const SDouble s17 = s15 * s16;
  const SDouble s18 = s8 - s9;
  const SDouble s19 = s11 - s13;
  const SDouble s20 = s18 * s19;
  const SDouble s21 = s17 + s20;
  const SDouble s22 = s21 /* scalar2dim */;

  return s22;
}
