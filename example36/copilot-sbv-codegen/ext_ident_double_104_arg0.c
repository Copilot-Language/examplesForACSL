/* File: "ext_ident_double_104_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: sq",color=plum, style=filled]
0 -> 1
2 [label="op2: *",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_double_95",color=cyan4, style=filled]
2 -> 3
293 [label="ext_ident_double_103",color=cyan4, style=filled]
2 -> 293


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_95) * (ext_ident_double_103))));
*/
SDouble ext_ident_double_104_arg0(const SDouble ext_ident_double_95,
                                  const SWord64 ext_ident_word64_88,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_89,
                                  const SWord64 ext_ident_word64_90,
                                  const SWord64 ext_ident_word64_91,
                                  const SWord64 ext_ident_word64_92,
                                  const SWord64 ext_ident_word64_93,
                                  const SWord64 ext_ident_word64_94,
                                  const SDouble ext_ident_double_103,
                                  const SWord64 ext_ident_word64_96,
                                  const SWord64 ext_ident_word64_97,
                                  const SWord64 ext_ident_word64_98,
                                  const SWord64 ext_ident_word64_99,
                                  const SWord64 ext_ident_word64_100,
                                  const SWord64 ext_ident_word64_101,
                                  const SWord64 ext_ident_word64_102)
{
  const SDouble s0 = ext_ident_double_95;
  const SDouble s9 = ext_ident_double_103;
  const SDouble s17 = s0 * s9;
  const SDouble s18 = s17 /* sq */;

  return s18;
}
