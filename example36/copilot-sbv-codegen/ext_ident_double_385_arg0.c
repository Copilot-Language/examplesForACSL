/* File: "ext_ident_double_385_arg0.c". Automatically generated by SBV. Do not edit! */

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
4 [label="ext_ident_double_364",color=cyan4, style=filled]
3 -> 4
21 [label="const: 0.0",color=red1, style=filled]
3 -> 21
22 [label="op2: /",color=green4, style=filled]
2 -> 22
23 [label="op2: -",color=green4, style=filled]
22 -> 23
24 [label="ext_ident_double_381",color=cyan4, style=filled]
23 -> 24
607 [label="ext_ident_double_383",color=cyan4, style=filled]
23 -> 607
626 [label="ext_ident_double_384",color=cyan4, style=filled]
22 -> 626
643 [label="const: -1.0",color=red1, style=filled]
2 -> 643


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_364) < (0.0))) ? (((((ext_ident_double_381) - (ext_ident_double_383))) / (ext_ident_double_384))) : (-1.0))));
*/
SDouble ext_ident_double_385_arg0(const SDouble ext_ident_double_364,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_381,
                                  const SDouble ext_ident_double_372,
                                  const SWord64 ext_ident_word64_365,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_366,
                                  const SWord64 ext_ident_word64_367,
                                  const SWord64 ext_ident_word64_368,
                                  const SWord64 ext_ident_word64_369,
                                  const SWord64 ext_ident_word64_370,
                                  const SWord64 ext_ident_word64_371,
                                  const SDouble ext_ident_double_380,
                                  const SWord64 ext_ident_word64_373,
                                  const SWord64 ext_ident_word64_374,
                                  const SWord64 ext_ident_word64_375,
                                  const SWord64 ext_ident_word64_376,
                                  const SWord64 ext_ident_word64_377,
                                  const SWord64 ext_ident_word64_378,
                                  const SWord64 ext_ident_word64_379,
                                  const SDouble ext_ident_double_383,
                                  const SDouble ext_ident_double_382,
                                  const SDouble ext_ident_double_384)
{
  const SDouble s0 = ext_ident_double_364;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_381;
  const SDouble s10 = ext_ident_double_372;
  const SWord64 s11 = ext_ident_word64_365;
  const SDouble s12 = ext_ownship_position_z;
  const SWord64 s13 = ext_ident_word64_366;
  const SWord64 s14 = ext_ident_word64_367;
  const SWord64 s15 = ext_ident_word64_368;
  const SWord64 s16 = ext_ident_word64_369;
  const SWord64 s17 = ext_ident_word64_370;
  const SWord64 s18 = ext_ident_word64_371;
  const SDouble s19 = ext_ident_double_380;
  const SWord64 s20 = ext_ident_word64_373;
  const SWord64 s21 = ext_ident_word64_374;
  const SWord64 s22 = ext_ident_word64_375;
  const SWord64 s23 = ext_ident_word64_376;
  const SWord64 s24 = ext_ident_word64_377;
  const SWord64 s25 = ext_ident_word64_378;
  const SWord64 s26 = ext_ident_word64_379;
  const SDouble s27 = ext_ident_double_383;
  const SDouble s28 = ext_ident_double_382;
  const SDouble s29 = ext_ident_double_384;
  const SBool   s31 = s0 < 0.0;
  const SDouble s32 = s9 - s27;
  const SDouble s33 = s32 / s29;
  const SDouble s35 = s31 ? s33 : -1.0;
  const SDouble s36 = s35 /* taumod */;

  return s36;
}
