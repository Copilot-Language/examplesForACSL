/* File: "ext_ident_double_627_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: quadtime",color=plum, style=filled]
0 -> 1
2 [label="ext_ident_double_626",color=cyan4, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_626));
*/
SDouble ext_ident_double_627_arg0(const SDouble ext_ident_double_626,
                                  const SDouble ext_ident_double_557,
                                  const SDouble ext_ident_double_536,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_553,
                                  const SDouble ext_ident_double_544,
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
                                  const SWord64 ext_ident_word64_551,
                                  const SDouble ext_ident_double_555,
                                  const SDouble ext_ident_double_554,
                                  const SDouble ext_ident_double_556,
                                  const SDouble ext_ident_double_580,
                                  const SDouble ext_ident_double_579,
                                  const SDouble ext_ident_double_558,
                                  const SDouble ext_ident_double_575,
                                  const SDouble ext_ident_double_566,
                                  const SWord64 ext_ident_word64_559,
                                  const SWord64 ext_ident_word64_560,
                                  const SWord64 ext_ident_word64_561,
                                  const SWord64 ext_ident_word64_562,
                                  const SWord64 ext_ident_word64_563,
                                  const SWord64 ext_ident_word64_564,
                                  const SWord64 ext_ident_word64_565,
                                  const SDouble ext_ident_double_574,
                                  const SWord64 ext_ident_word64_567,
                                  const SWord64 ext_ident_word64_568,
                                  const SWord64 ext_ident_word64_569,
                                  const SWord64 ext_ident_word64_570,
                                  const SWord64 ext_ident_word64_571,
                                  const SWord64 ext_ident_word64_572,
                                  const SWord64 ext_ident_word64_573,
                                  const SDouble ext_ident_double_577,
                                  const SDouble ext_ident_double_576,
                                  const SDouble ext_ident_double_578,
                                  const SDouble ext_ownship_velocity_z,
                                  const SDouble ext_ident_double_602,
                                  const SDouble ext_ident_double_581,
                                  const SDouble ext_ident_double_598,
                                  const SDouble ext_ident_double_589,
                                  const SWord64 ext_ident_word64_582,
                                  const SWord64 ext_ident_word64_583,
                                  const SWord64 ext_ident_word64_584,
                                  const SWord64 ext_ident_word64_585,
                                  const SWord64 ext_ident_word64_586,
                                  const SWord64 ext_ident_word64_587,
                                  const SWord64 ext_ident_word64_588,
                                  const SDouble ext_ident_double_597,
                                  const SWord64 ext_ident_word64_590,
                                  const SWord64 ext_ident_word64_591,
                                  const SWord64 ext_ident_word64_592,
                                  const SWord64 ext_ident_word64_593,
                                  const SWord64 ext_ident_word64_594,
                                  const SWord64 ext_ident_word64_595,
                                  const SWord64 ext_ident_word64_596,
                                  const SDouble ext_ident_double_600,
                                  const SDouble ext_ident_double_599,
                                  const SDouble ext_ident_double_601,
                                  const SDouble ext_ident_double_625,
                                  const SDouble ext_ident_double_624,
                                  const SDouble ext_ident_double_603,
                                  const SDouble ext_ident_double_620,
                                  const SDouble ext_ident_double_611,
                                  const SWord64 ext_ident_word64_604,
                                  const SWord64 ext_ident_word64_605,
                                  const SWord64 ext_ident_word64_606,
                                  const SWord64 ext_ident_word64_607,
                                  const SWord64 ext_ident_word64_608,
                                  const SWord64 ext_ident_word64_609,
                                  const SWord64 ext_ident_word64_610,
                                  const SDouble ext_ident_double_619,
                                  const SWord64 ext_ident_word64_612,
                                  const SWord64 ext_ident_word64_613,
                                  const SWord64 ext_ident_word64_614,
                                  const SWord64 ext_ident_word64_615,
                                  const SWord64 ext_ident_word64_616,
                                  const SWord64 ext_ident_word64_617,
                                  const SWord64 ext_ident_word64_618,
                                  const SDouble ext_ident_double_622,
                                  const SDouble ext_ident_double_621,
                                  const SDouble ext_ident_double_623)
{
  const SDouble s0 = ext_ident_double_626;
  const SDouble s1 = ext_ident_double_557;
  const SDouble s2 = ext_ident_double_536;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = ext_intruder_position_x;
  const SDouble s5 = ext_ownship_velocity_x;
  const SDouble s6 = ext_intruder_velocity_x;
  const SDouble s7 = ext_ownship_position_y;
  const SDouble s8 = ext_intruder_position_y;
  const SDouble s9 = ext_ownship_velocity_y;
  const SDouble s10 = ext_intruder_velocity_y;
  const SDouble s11 = ext_ident_double_553;
  const SDouble s12 = ext_ident_double_544;
  const SWord64 s13 = ext_ident_word64_537;
  const SDouble s14 = ext_ownship_position_z;
  const SWord64 s15 = ext_ident_word64_538;
  const SWord64 s16 = ext_ident_word64_539;
  const SWord64 s17 = ext_ident_word64_540;
  const SWord64 s18 = ext_ident_word64_541;
  const SWord64 s19 = ext_ident_word64_542;
  const SWord64 s20 = ext_ident_word64_543;
  const SDouble s21 = ext_ident_double_552;
  const SWord64 s22 = ext_ident_word64_545;
  const SWord64 s23 = ext_ident_word64_546;
  const SWord64 s24 = ext_ident_word64_547;
  const SWord64 s25 = ext_ident_word64_548;
  const SWord64 s26 = ext_ident_word64_549;
  const SWord64 s27 = ext_ident_word64_550;
  const SWord64 s28 = ext_ident_word64_551;
  const SDouble s29 = ext_ident_double_555;
  const SDouble s30 = ext_ident_double_554;
  const SDouble s31 = ext_ident_double_556;
  const SDouble s32 = ext_ident_double_580;
  const SDouble s33 = ext_ident_double_579;
  const SDouble s34 = ext_ident_double_558;
  const SDouble s35 = ext_ident_double_575;
  const SDouble s36 = ext_ident_double_566;
  const SWord64 s37 = ext_ident_word64_559;
  const SWord64 s38 = ext_ident_word64_560;
  const SWord64 s39 = ext_ident_word64_561;
  const SWord64 s40 = ext_ident_word64_562;
  const SWord64 s41 = ext_ident_word64_563;
  const SWord64 s42 = ext_ident_word64_564;
  const SWord64 s43 = ext_ident_word64_565;
  const SDouble s44 = ext_ident_double_574;
  const SWord64 s45 = ext_ident_word64_567;
  const SWord64 s46 = ext_ident_word64_568;
  const SWord64 s47 = ext_ident_word64_569;
  const SWord64 s48 = ext_ident_word64_570;
  const SWord64 s49 = ext_ident_word64_571;
  const SWord64 s50 = ext_ident_word64_572;
  const SWord64 s51 = ext_ident_word64_573;
  const SDouble s52 = ext_ident_double_577;
  const SDouble s53 = ext_ident_double_576;
  const SDouble s54 = ext_ident_double_578;
  const SDouble s55 = ext_ownship_velocity_z;
  const SDouble s56 = ext_ident_double_602;
  const SDouble s57 = ext_ident_double_581;
  const SDouble s58 = ext_ident_double_598;
  const SDouble s59 = ext_ident_double_589;
  const SWord64 s60 = ext_ident_word64_582;
  const SWord64 s61 = ext_ident_word64_583;
  const SWord64 s62 = ext_ident_word64_584;
  const SWord64 s63 = ext_ident_word64_585;
  const SWord64 s64 = ext_ident_word64_586;
  const SWord64 s65 = ext_ident_word64_587;
  const SWord64 s66 = ext_ident_word64_588;
  const SDouble s67 = ext_ident_double_597;
  const SWord64 s68 = ext_ident_word64_590;
  const SWord64 s69 = ext_ident_word64_591;
  const SWord64 s70 = ext_ident_word64_592;
  const SWord64 s71 = ext_ident_word64_593;
  const SWord64 s72 = ext_ident_word64_594;
  const SWord64 s73 = ext_ident_word64_595;
  const SWord64 s74 = ext_ident_word64_596;
  const SDouble s75 = ext_ident_double_600;
  const SDouble s76 = ext_ident_double_599;
  const SDouble s77 = ext_ident_double_601;
  const SDouble s78 = ext_ident_double_625;
  const SDouble s79 = ext_ident_double_624;
  const SDouble s80 = ext_ident_double_603;
  const SDouble s81 = ext_ident_double_620;
  const SDouble s82 = ext_ident_double_611;
  const SWord64 s83 = ext_ident_word64_604;
  const SWord64 s84 = ext_ident_word64_605;
  const SWord64 s85 = ext_ident_word64_606;
  const SWord64 s86 = ext_ident_word64_607;
  const SWord64 s87 = ext_ident_word64_608;
  const SWord64 s88 = ext_ident_word64_609;
  const SWord64 s89 = ext_ident_word64_610;
  const SDouble s90 = ext_ident_double_619;
  const SWord64 s91 = ext_ident_word64_612;
  const SWord64 s92 = ext_ident_word64_613;
  const SWord64 s93 = ext_ident_word64_614;
  const SWord64 s94 = ext_ident_word64_615;
  const SWord64 s95 = ext_ident_word64_616;
  const SWord64 s96 = ext_ident_word64_617;
  const SWord64 s97 = ext_ident_word64_618;
  const SDouble s98 = ext_ident_double_622;
  const SDouble s99 = ext_ident_double_621;
  const SDouble s100 = ext_ident_double_623;
  const SDouble s101 = s0 /* quadtime */;

  return s101;
}
