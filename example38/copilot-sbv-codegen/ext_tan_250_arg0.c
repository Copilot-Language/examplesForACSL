/* File: "ext_tan_250_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op2: +",color=green4, style=filled]
0 -> 1
2 [label="op2: /",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_double_246",color=cyan4, style=filled]
2 -> 3
6 [label="const: 4.0",color=red1, style=filled]
2 -> 6
7 [label="op2: /",color=green4, style=filled]
1 -> 7
8 [label="ext_ident_double_249",color=cyan4, style=filled]
7 -> 8
19 [label="const: 2.0",color=red1, style=filled]
7 -> 19


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (((((ext_ident_double_246) / (4.0))) + (((ext_ident_double_249) / (2.0)))));
*/
SDouble ext_tan_250_arg0(const SDouble ext_ident_double_246,
                         const SDouble ext_ident_double_249,
                         const SDouble ext_intruder_latitude,
                         const SDouble ext_ident_double_248,
                         const SDouble ext_ident_double_247)
{
  const SDouble s0 = ext_ident_double_246;
  const SDouble s1 = ext_ident_double_249;
  const SDouble s6 = s0 / 4.0;
  const SDouble s8 = s1 / 2.0;
  const SDouble s9 = s6 + s8;

  return s9;
}
