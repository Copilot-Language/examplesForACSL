/* File: "ext_ident_double_462_arg0.c". Automatically generated by SBV. Do not edit! */

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
5 [label="ext_ident_double_454",color=cyan4, style=filled]
4 -> 5
12 [label="ext_ident_double_455",color=cyan4, style=filled]
4 -> 12
19 [label="op2: -",color=green4, style=filled]
3 -> 19
20 [label="ext_ident_double_456",color=cyan4, style=filled]
19 -> 20
27 [label="ext_ident_double_457",color=cyan4, style=filled]
19 -> 27
34 [label="op2: *",color=green4, style=filled]
2 -> 34
35 [label="op2: -",color=green4, style=filled]
34 -> 35
36 [label="ext_ident_double_458",color=cyan4, style=filled]
35 -> 36
43 [label="ext_ident_double_459",color=cyan4, style=filled]
35 -> 43
50 [label="op2: -",color=green4, style=filled]
34 -> 50
51 [label="ext_ident_double_460",color=cyan4, style=filled]
50 -> 51
58 [label="ext_ident_double_461",color=cyan4, style=filled]
50 -> 58


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_454) - (ext_ident_double_455))) * (((ext_ident_double_456) - (ext_ident_double_457))))) + (((((ext_ident_double_458) - (ext_ident_double_459))) * (((ext_ident_double_460) - (ext_ident_double_461))))))));
*/
SDouble ext_ident_double_462_arg0(const SDouble ext_ident_double_454,
                                  const SDouble ext_ownship_vx, const SDouble ext_ident_double_455,
                                  const SDouble ext_intruder_vx, const SDouble ext_ident_double_456,
                                  const SDouble ext_ident_double_457,
                                  const SDouble ext_ident_double_458, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_459, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_460,
                                  const SDouble ext_ident_double_461)
{
  const SDouble s0 = ext_ident_double_454;
  const SDouble s2 = ext_ident_double_455;
  const SDouble s4 = ext_ident_double_456;
  const SDouble s5 = ext_ident_double_457;
  const SDouble s6 = ext_ident_double_458;
  const SDouble s8 = ext_ident_double_459;
  const SDouble s10 = ext_ident_double_460;
  const SDouble s11 = ext_ident_double_461;
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
