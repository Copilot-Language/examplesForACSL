/* File: "ext_ident_double_783_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ownPositionX",color=plum, style=filled]
0 -> 1
2 [label="op2: *",color=green4, style=filled]
1 -> 2
3 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
2 -> 3
4 [label="const: 0.3048",color=red1, style=filled]
2 -> 4


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ownship_x_position_ft) * (0.3048))));
*/
SDouble ext_ident_double_783_arg0(const SDouble ext_ownship_x_position_ft)
{
  const SDouble s0 = ext_ownship_x_position_ft;
  const SDouble s2 = s0 * 0.3048;
  const SDouble s3 = s2 /* ownPositionX */;

  return s3;
}
