/* File: "ext_ident_double_625_arg0.c". Automatically generated by SBV. Do not edit! */

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
2 [label="ext_ident_double_624",color=cyan4, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_624));
*/
SDouble ext_ident_double_625_arg0(const SDouble ext_ident_double_624,
                                  const SDouble ext_ident_double_616, const SDouble ext_ownship_vx,
                                  const SDouble ext_ident_double_617, const SDouble ext_intruder_vx,
                                  const SDouble ext_ident_double_618,
                                  const SDouble ext_ident_double_619,
                                  const SDouble ext_ident_double_620, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_621, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_622,
                                  const SDouble ext_ident_double_623)
{
  const SDouble s0 = ext_ident_double_624;
  const SDouble s13 = s0 /* normsq2dim */;

  return s13;
}
