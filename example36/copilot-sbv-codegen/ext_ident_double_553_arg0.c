/* File: "ext_ident_double_553_arg0.c". Automatically generated by SBV. Do not edit! */

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
3 [label="ext_ident_double_544",color=cyan4, style=filled]
2 -> 3
293 [label="ext_ident_double_552",color=cyan4, style=filled]
2 -> 293


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_544) * (ext_ident_double_552))));
*/
SDouble ext_ident_double_553_arg0(const SDouble ext_ident_double_544,
                                  const SWord64 ext_ident_word64_537,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_538,
                                  const SWord64 ext_ident_word64_539,
                                  const SWord64 ext_ident_word64_540,
                                  const SWord64 ext_ident_word64_541,
                                  const SWord64 ext_ident_word64_542,
                                  const SWord64 ext_ident_word64_543,
                                  const SDouble ext_ident_double_552,
                                  const SWord64 ext_ident_word64_545,
                                  const SWord64 ext_ident_word64_546,
                                  const SWord64 ext_ident_word64_547,
                                  const SWord64 ext_ident_word64_548,
                                  const SWord64 ext_ident_word64_549,
                                  const SWord64 ext_ident_word64_550,
                                  const SWord64 ext_ident_word64_551)
{
  const SDouble s0 = ext_ident_double_544;
  const SWord64 s1 = ext_ident_word64_537;
  const SDouble s2 = ext_ownship_position_z;
  const SWord64 s3 = ext_ident_word64_538;
  const SWord64 s4 = ext_ident_word64_539;
  const SWord64 s5 = ext_ident_word64_540;
  const SWord64 s6 = ext_ident_word64_541;
  const SWord64 s7 = ext_ident_word64_542;
  const SWord64 s8 = ext_ident_word64_543;
  const SDouble s9 = ext_ident_double_552;
  const SWord64 s10 = ext_ident_word64_545;
  const SWord64 s11 = ext_ident_word64_546;
  const SWord64 s12 = ext_ident_word64_547;
  const SWord64 s13 = ext_ident_word64_548;
  const SWord64 s14 = ext_ident_word64_549;
  const SWord64 s15 = ext_ident_word64_550;
  const SWord64 s16 = ext_ident_word64_551;
  const SDouble s17 = s0 * s9;
  const SDouble s18 = s17 /* sq */;

  return s18;
}
