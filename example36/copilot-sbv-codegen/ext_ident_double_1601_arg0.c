/* File: "ext_ident_double_1601_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: normsq2dim",color=plum, style=filled]
0 -> 1
2 [label="ext_ident_double_1600",color=cyan4, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_1600));
*/
SDouble ext_ident_double_1601_arg0(const SDouble ext_ident_double_1600,
                                   const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y)
{
  const SDouble s0 = ext_ident_double_1600;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SDouble s5 = s0 /* normsq2dim */;

  return s5;
}
