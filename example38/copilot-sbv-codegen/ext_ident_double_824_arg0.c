/* File: "ext_ident_double_824_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ownVelocityY",color=plum, style=filled]
0 -> 1
2 [label="op2: /",color=green4, style=filled]
1 -> 2
3 [label="op2: *",color=green4, style=filled]
2 -> 3
4 [label="ext_ownship_vy",color=cyan1, style=filled]
3 -> 4
5 [label="const: 0.3048",color=red1, style=filled]
3 -> 5
6 [label="const: 1.0",color=red1, style=filled]
2 -> 6


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ownship_vy) * (0.3048))) / (1.0))));
*/
SDouble ext_ident_double_824_arg0(const SDouble ext_ownship_vy)
{
  const SDouble s0 = ext_ownship_vy;
  const SDouble s2 = s0 * 0.3048;
  const SDouble s4 = s2 / 1.0;
  const SDouble s5 = s4 /* ownVelocityY */;

  return s5;
}
