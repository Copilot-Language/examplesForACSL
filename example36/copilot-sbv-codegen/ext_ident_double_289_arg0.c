/* File: "ext_ident_double_289_arg0.c". Automatically generated by SBV. Do not edit! */

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
3 [label="ext_ident_double_280",color=cyan4, style=filled]
2 -> 3
293 [label="ext_ident_double_288",color=cyan4, style=filled]
2 -> 293


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_280) * (ext_ident_double_288))));
*/
SDouble ext_ident_double_289_arg0(const SDouble ext_ident_double_280,
                                  const SWord64 ext_ident_word64_273,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_274,
                                  const SWord64 ext_ident_word64_275,
                                  const SWord64 ext_ident_word64_276,
                                  const SWord64 ext_ident_word64_277,
                                  const SWord64 ext_ident_word64_278,
                                  const SWord64 ext_ident_word64_279,
                                  const SDouble ext_ident_double_288,
                                  const SWord64 ext_ident_word64_281,
                                  const SWord64 ext_ident_word64_282,
                                  const SWord64 ext_ident_word64_283,
                                  const SWord64 ext_ident_word64_284,
                                  const SWord64 ext_ident_word64_285,
                                  const SWord64 ext_ident_word64_286,
                                  const SWord64 ext_ident_word64_287)
{
  const SDouble s0 = ext_ident_double_280;
  const SWord64 s1 = ext_ident_word64_273;
  const SDouble s2 = ext_ownship_position_z;
  const SWord64 s3 = ext_ident_word64_274;
  const SWord64 s4 = ext_ident_word64_275;
  const SWord64 s5 = ext_ident_word64_276;
  const SWord64 s6 = ext_ident_word64_277;
  const SWord64 s7 = ext_ident_word64_278;
  const SWord64 s8 = ext_ident_word64_279;
  const SDouble s9 = ext_ident_double_288;
  const SWord64 s10 = ext_ident_word64_281;
  const SWord64 s11 = ext_ident_word64_282;
  const SWord64 s12 = ext_ident_word64_283;
  const SWord64 s13 = ext_ident_word64_284;
  const SWord64 s14 = ext_ident_word64_285;
  const SWord64 s15 = ext_ident_word64_286;
  const SWord64 s16 = ext_ident_word64_287;
  const SDouble s17 = s0 * s9;
  const SDouble s18 = s17 /* sq */;

  return s18;
}
