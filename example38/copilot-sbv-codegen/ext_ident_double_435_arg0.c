/* File: "ext_ident_double_435_arg0.c". Automatically generated by SBV. Do not edit! */

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
2 [label="ext_ident_double_434",color=cyan4, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_434));
*/
SDouble ext_ident_double_435_arg0(const SDouble ext_ident_double_434,
                                  const SDouble ext_ident_double_426, const SDouble ext_ownship_vx,
                                  const SDouble ext_ident_double_427, const SDouble ext_intruder_vx,
                                  const SDouble ext_ident_double_428,
                                  const SDouble ext_ident_double_429,
                                  const SDouble ext_ident_double_430, const SDouble ext_ownship_vy,
                                  const SDouble ext_ident_double_431, const SDouble ext_intruder_vy,
                                  const SDouble ext_ident_double_432,
                                  const SDouble ext_ident_double_433)
{
  const SDouble s0 = ext_ident_double_434;
  const SDouble s13 = s0 /* normsq2dim */;

  return s13;
}
