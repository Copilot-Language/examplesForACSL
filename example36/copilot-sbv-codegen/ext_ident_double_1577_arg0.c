/* File: "ext_ident_double_1577_arg0.c". Automatically generated by SBV. Do not edit! */

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
3 [label="ext_ident_double_1568",color=cyan4, style=filled]
2 -> 3
293 [label="ext_ident_double_1576",color=cyan4, style=filled]
2 -> 293


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_1568) * (ext_ident_double_1576))));
*/
SDouble ext_ident_double_1577_arg0(const SDouble ext_ident_double_1568,
                                   const SWord64 ext_ident_word64_1561,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_1562,
                                   const SWord64 ext_ident_word64_1563,
                                   const SWord64 ext_ident_word64_1564,
                                   const SWord64 ext_ident_word64_1565,
                                   const SWord64 ext_ident_word64_1566,
                                   const SWord64 ext_ident_word64_1567,
                                   const SDouble ext_ident_double_1576,
                                   const SWord64 ext_ident_word64_1569,
                                   const SWord64 ext_ident_word64_1570,
                                   const SWord64 ext_ident_word64_1571,
                                   const SWord64 ext_ident_word64_1572,
                                   const SWord64 ext_ident_word64_1573,
                                   const SWord64 ext_ident_word64_1574,
                                   const SWord64 ext_ident_word64_1575)
{
  const SDouble s0 = ext_ident_double_1568;
  const SWord64 s1 = ext_ident_word64_1561;
  const SDouble s2 = ext_ownship_position_z;
  const SWord64 s3 = ext_ident_word64_1562;
  const SWord64 s4 = ext_ident_word64_1563;
  const SWord64 s5 = ext_ident_word64_1564;
  const SWord64 s6 = ext_ident_word64_1565;
  const SWord64 s7 = ext_ident_word64_1566;
  const SWord64 s8 = ext_ident_word64_1567;
  const SDouble s9 = ext_ident_double_1576;
  const SWord64 s10 = ext_ident_word64_1569;
  const SWord64 s11 = ext_ident_word64_1570;
  const SWord64 s12 = ext_ident_word64_1571;
  const SWord64 s13 = ext_ident_word64_1572;
  const SWord64 s14 = ext_ident_word64_1573;
  const SWord64 s15 = ext_ident_word64_1574;
  const SWord64 s16 = ext_ident_word64_1575;
  const SDouble s17 = s0 * s9;
  const SDouble s18 = s17 /* sq */;

  return s18;
}
