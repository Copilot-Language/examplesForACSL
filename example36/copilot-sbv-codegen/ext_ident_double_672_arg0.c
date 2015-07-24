/* File: "ext_ident_double_672_arg0.c". Automatically generated by SBV. Do not edit! */

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
4 [label="ext_ident_double_651",color=cyan4, style=filled]
3 -> 4
21 [label="const: 0.0",color=red1, style=filled]
3 -> 21
22 [label="op2: /",color=green4, style=filled]
2 -> 22
23 [label="op2: -",color=green4, style=filled]
22 -> 23
24 [label="ext_ident_double_668",color=cyan4, style=filled]
23 -> 24
607 [label="ext_ident_double_670",color=cyan4, style=filled]
23 -> 607
626 [label="ext_ident_double_671",color=cyan4, style=filled]
22 -> 626
643 [label="const: -1.0",color=red1, style=filled]
2 -> 643


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_651) < (0.0))) ? (((((ext_ident_double_668) - (ext_ident_double_670))) / (ext_ident_double_671))) : (-1.0))));
*/
SDouble ext_ident_double_672_arg0(const SDouble ext_ident_double_651,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_668,
                                  const SDouble ext_ident_double_659,
                                  const SWord64 ext_ident_word64_652,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_653,
                                  const SWord64 ext_ident_word64_654,
                                  const SWord64 ext_ident_word64_655,
                                  const SWord64 ext_ident_word64_656,
                                  const SWord64 ext_ident_word64_657,
                                  const SWord64 ext_ident_word64_658,
                                  const SDouble ext_ident_double_667,
                                  const SWord64 ext_ident_word64_660,
                                  const SWord64 ext_ident_word64_661,
                                  const SWord64 ext_ident_word64_662,
                                  const SWord64 ext_ident_word64_663,
                                  const SWord64 ext_ident_word64_664,
                                  const SWord64 ext_ident_word64_665,
                                  const SWord64 ext_ident_word64_666,
                                  const SDouble ext_ident_double_670,
                                  const SDouble ext_ident_double_669,
                                  const SDouble ext_ident_double_671)
{
  const SDouble s0 = ext_ident_double_651;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_668;
  const SDouble s10 = ext_ident_double_659;
  const SWord64 s11 = ext_ident_word64_652;
  const SDouble s12 = ext_ownship_position_z;
  const SWord64 s13 = ext_ident_word64_653;
  const SWord64 s14 = ext_ident_word64_654;
  const SWord64 s15 = ext_ident_word64_655;
  const SWord64 s16 = ext_ident_word64_656;
  const SWord64 s17 = ext_ident_word64_657;
  const SWord64 s18 = ext_ident_word64_658;
  const SDouble s19 = ext_ident_double_667;
  const SWord64 s20 = ext_ident_word64_660;
  const SWord64 s21 = ext_ident_word64_661;
  const SWord64 s22 = ext_ident_word64_662;
  const SWord64 s23 = ext_ident_word64_663;
  const SWord64 s24 = ext_ident_word64_664;
  const SWord64 s25 = ext_ident_word64_665;
  const SWord64 s26 = ext_ident_word64_666;
  const SDouble s27 = ext_ident_double_670;
  const SDouble s28 = ext_ident_double_669;
  const SDouble s29 = ext_ident_double_671;
  const SBool   s31 = s0 < 0.0;
  const SDouble s32 = s9 - s27;
  const SDouble s33 = s32 / s29;
  const SDouble s35 = s31 ? s33 : -1.0;
  const SDouble s36 = s35 /* taumod */;

  return s36;
}
