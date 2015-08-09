/* File: "ext_ident_double_828_arg0.c". Automatically generated by SBV. Do not edit! */

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
5 [label="ext_ident_double_820",color=cyan4, style=filled]
4 -> 5
12 [label="ext_ident_double_821",color=cyan4, style=filled]
4 -> 12
19 [label="op2: -",color=green4, style=filled]
3 -> 19
20 [label="ext_ident_double_822",color=cyan4, style=filled]
19 -> 20
27 [label="ext_ident_double_823",color=cyan4, style=filled]
19 -> 27
34 [label="op2: *",color=green4, style=filled]
2 -> 34
35 [label="op2: -",color=green4, style=filled]
34 -> 35
36 [label="ext_ident_double_824",color=cyan4, style=filled]
35 -> 36
43 [label="ext_ident_double_825",color=cyan4, style=filled]
35 -> 43
50 [label="op2: -",color=green4, style=filled]
34 -> 50
51 [label="ext_ident_double_826",color=cyan4, style=filled]
50 -> 51
58 [label="ext_ident_double_827",color=cyan4, style=filled]
50 -> 58


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_820) - (ext_ident_double_821))) * (((ext_ident_double_822) - (ext_ident_double_823))))) + (((((ext_ident_double_824) - (ext_ident_double_825))) * (((ext_ident_double_826) - (ext_ident_double_827))))))));
*/
SDouble ext_ident_double_828_arg0(const SDouble ext_ident_double_820,
                                  const SDouble ext_ownship_vx, const SDouble ext_ident_double_821,
                                  const SDouble ext_intruder_vx, const SDouble ext_ident_double_822,
                                  const SDouble ext_ident_double_823,
                                  const SDouble ext_ident_double_824, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_825, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_826,
                                  const SDouble ext_ident_double_827)
{
  const SDouble s0 = ext_ident_double_820;
  const SDouble s2 = ext_ident_double_821;
  const SDouble s4 = ext_ident_double_822;
  const SDouble s5 = ext_ident_double_823;
  const SDouble s6 = ext_ident_double_824;
  const SDouble s8 = ext_ident_double_825;
  const SDouble s10 = ext_ident_double_826;
  const SDouble s11 = ext_ident_double_827;
  const SDouble s12 = s0 - s2;
  const SDouble s13 = s4 - s5;
  const SDouble s14 = s12 * s13;
  const SDouble s15 = s6 - s8;
  const SDouble s16 = s10 - s11;
  const SDouble s17 = s15 * s16;
  const SDouble s18 = s14 + s17;
  const SDouble s19 = s18 /* scalar2dim */;

  return s19;
}
