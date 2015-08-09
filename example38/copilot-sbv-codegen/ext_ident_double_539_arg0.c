/* File: "ext_ident_double_539_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: absolute_value_splitting",color=plum, style=filled]
0 -> 1
2 [label="op1: signum",color=green4, style=filled]
1 -> 2
3 [label="op2: -",color=green4, style=filled]
2 -> 3
4 [label="ext_ident_double_537",color=cyan4, style=filled]
3 -> 4
9 [label="ext_ident_double_538",color=cyan4, style=filled]
3 -> 9


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_537) - (ext_ident_double_538))) > 0)? 1 : ((((ext_ident_double_537) - (ext_ident_double_538))) < 0 ? -1 : (((ext_ident_double_537) - (ext_ident_double_538))))));
*/
SDouble ext_ident_double_539_arg0(const SDouble ext_ident_double_537,
                                  const SDouble ext_ownship_z_position_ft,
                                  const SDouble ext_ident_double_538,
                                  const SDouble ext_intruder_z_position_ft)
{
  const SDouble s0 = ext_ident_double_537;
  const SDouble s2 = ext_ident_double_538;
  const SDouble s4 = s0 - s2;
  const SBool   s6 = s4 > 0.0;
  const SBool   s8 = s4 < 0.0;
  const SDouble s10 = s8 ? -1.0 : s4;
  const SDouble s11 = s6 ? 1.0 : s10;
  const SDouble s12 = s11 /* absolute_value_splitting */;

  return s12;
}
