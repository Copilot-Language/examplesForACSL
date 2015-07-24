/* File: "ext_ident_double_1536_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: taumod",color=plum, style=filled]
0 -> 1
2 [label="op3: mux",color=green4, style=filled]
1 -> 2
3 [label="op2: <",color=green4, style=filled]
2 -> 3
4 [label="ext_ident_double_1515",color=cyan4, style=filled]
3 -> 4
21 [label="const: 0.0",color=red1, style=filled]
3 -> 21
22 [label="op2: /",color=green4, style=filled]
2 -> 22
23 [label="op2: -",color=green4, style=filled]
22 -> 23
24 [label="ext_ident_double_1532",color=cyan4, style=filled]
23 -> 24
607 [label="ext_ident_double_1534",color=cyan4, style=filled]
23 -> 607
626 [label="ext_ident_double_1535",color=cyan4, style=filled]
22 -> 626
643 [label="const: -1.0",color=red1, style=filled]
2 -> 643


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_1515) < (0.0))) ? (((((ext_ident_double_1532) - (ext_ident_double_1534))) / (ext_ident_double_1535))) : (-1.0))));
*/
SDouble ext_ident_double_1536_arg0(const SDouble ext_ident_double_1515,
                                   const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_velocity_x,
                                   const SDouble ext_intruder_velocity_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y,
                                   const SDouble ext_ownship_velocity_y,
                                   const SDouble ext_intruder_velocity_y,
                                   const SDouble ext_ident_double_1532,
                                   const SDouble ext_ident_double_1523,
                                   const SWord64 ext_ident_word64_1516,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_1517,
                                   const SWord64 ext_ident_word64_1518,
                                   const SWord64 ext_ident_word64_1519,
                                   const SWord64 ext_ident_word64_1520,
                                   const SWord64 ext_ident_word64_1521,
                                   const SWord64 ext_ident_word64_1522,
                                   const SDouble ext_ident_double_1531,
                                   const SWord64 ext_ident_word64_1524,
                                   const SWord64 ext_ident_word64_1525,
                                   const SWord64 ext_ident_word64_1526,
                                   const SWord64 ext_ident_word64_1527,
                                   const SWord64 ext_ident_word64_1528,
                                   const SWord64 ext_ident_word64_1529,
                                   const SWord64 ext_ident_word64_1530,
                                   const SDouble ext_ident_double_1534,
                                   const SDouble ext_ident_double_1533,
                                   const SDouble ext_ident_double_1535)
{
  const SDouble s0 = ext_ident_double_1515;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_1532;
  const SDouble s10 = ext_ident_double_1523;
  const SWord64 s11 = ext_ident_word64_1516;
  const SDouble s12 = ext_ownship_position_z;
  const SWord64 s13 = ext_ident_word64_1517;
  const SWord64 s14 = ext_ident_word64_1518;
  const SWord64 s15 = ext_ident_word64_1519;
  const SWord64 s16 = ext_ident_word64_1520;
  const SWord64 s17 = ext_ident_word64_1521;
  const SWord64 s18 = ext_ident_word64_1522;
  const SDouble s19 = ext_ident_double_1531;
  const SWord64 s20 = ext_ident_word64_1524;
  const SWord64 s21 = ext_ident_word64_1525;
  const SWord64 s22 = ext_ident_word64_1526;
  const SWord64 s23 = ext_ident_word64_1527;
  const SWord64 s24 = ext_ident_word64_1528;
  const SWord64 s25 = ext_ident_word64_1529;
  const SWord64 s26 = ext_ident_word64_1530;
  const SDouble s27 = ext_ident_double_1534;
  const SDouble s28 = ext_ident_double_1533;
  const SDouble s29 = ext_ident_double_1535;
  const SBool   s31 = s0 < 0.0;
  const SDouble s32 = s9 - s27;
  const SDouble s33 = s32 / s29;
  const SDouble s35 = s31 ? s33 : -1.0;
  const SDouble s36 = s35 /* taumod */;

  return s36;
}
