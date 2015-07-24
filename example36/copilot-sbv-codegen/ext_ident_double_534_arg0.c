/* File: "ext_ident_double_534_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: mini",color=plum, style=filled]
0 -> 1
2 [label="op3: mux",color=green4, style=filled]
1 -> 2
3 [label="op2: <=",color=green4, style=filled]
2 -> 3
4 [label="ext_ident_double_465",color=cyan4, style=filled]
3 -> 4
648 [label="ext_ident_double_488",color=cyan4, style=filled]
3 -> 648
1309 [label="ext_ident_double_510",color=cyan4, style=filled]
2 -> 1309
1953 [label="ext_ident_double_533",color=cyan4, style=filled]
2 -> 1953


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_465) <= (ext_ident_double_488))) ? (ext_ident_double_510) : (ext_ident_double_533))));
*/
SDouble ext_ident_double_534_arg0(const SDouble ext_ident_double_465,
                                  const SDouble ext_ident_double_444,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_461,
                                  const SDouble ext_ident_double_452,
                                  const SWord64 ext_ident_word64_445,
                                  const SDouble ext_ownship_position_z,
                                  const SWord64 ext_ident_word64_446,
                                  const SWord64 ext_ident_word64_447,
                                  const SWord64 ext_ident_word64_448,
                                  const SWord64 ext_ident_word64_449,
                                  const SWord64 ext_ident_word64_450,
                                  const SWord64 ext_ident_word64_451,
                                  const SDouble ext_ident_double_460,
                                  const SWord64 ext_ident_word64_453,
                                  const SWord64 ext_ident_word64_454,
                                  const SWord64 ext_ident_word64_455,
                                  const SWord64 ext_ident_word64_456,
                                  const SWord64 ext_ident_word64_457,
                                  const SWord64 ext_ident_word64_458,
                                  const SWord64 ext_ident_word64_459,
                                  const SDouble ext_ident_double_463,
                                  const SDouble ext_ident_double_462,
                                  const SDouble ext_ident_double_464,
                                  const SDouble ext_ident_double_488,
                                  const SDouble ext_ident_double_487,
                                  const SDouble ext_ident_double_466,
                                  const SDouble ext_ident_double_483,
                                  const SDouble ext_ident_double_474,
                                  const SWord64 ext_ident_word64_467,
                                  const SWord64 ext_ident_word64_468,
                                  const SWord64 ext_ident_word64_469,
                                  const SWord64 ext_ident_word64_470,
                                  const SWord64 ext_ident_word64_471,
                                  const SWord64 ext_ident_word64_472,
                                  const SWord64 ext_ident_word64_473,
                                  const SDouble ext_ident_double_482,
                                  const SWord64 ext_ident_word64_475,
                                  const SWord64 ext_ident_word64_476,
                                  const SWord64 ext_ident_word64_477,
                                  const SWord64 ext_ident_word64_478,
                                  const SWord64 ext_ident_word64_479,
                                  const SWord64 ext_ident_word64_480,
                                  const SWord64 ext_ident_word64_481,
                                  const SDouble ext_ident_double_485,
                                  const SDouble ext_ident_double_484,
                                  const SDouble ext_ident_double_486,
                                  const SDouble ext_ownship_velocity_z,
                                  const SDouble ext_ident_double_510,
                                  const SDouble ext_ident_double_489,
                                  const SDouble ext_ident_double_506,
                                  const SDouble ext_ident_double_497,
                                  const SWord64 ext_ident_word64_490,
                                  const SWord64 ext_ident_word64_491,
                                  const SWord64 ext_ident_word64_492,
                                  const SWord64 ext_ident_word64_493,
                                  const SWord64 ext_ident_word64_494,
                                  const SWord64 ext_ident_word64_495,
                                  const SWord64 ext_ident_word64_496,
                                  const SDouble ext_ident_double_505,
                                  const SWord64 ext_ident_word64_498,
                                  const SWord64 ext_ident_word64_499,
                                  const SWord64 ext_ident_word64_500,
                                  const SWord64 ext_ident_word64_501,
                                  const SWord64 ext_ident_word64_502,
                                  const SWord64 ext_ident_word64_503,
                                  const SWord64 ext_ident_word64_504,
                                  const SDouble ext_ident_double_508,
                                  const SDouble ext_ident_double_507,
                                  const SDouble ext_ident_double_509,
                                  const SDouble ext_ident_double_533,
                                  const SDouble ext_ident_double_532,
                                  const SDouble ext_ident_double_511,
                                  const SDouble ext_ident_double_528,
                                  const SDouble ext_ident_double_519,
                                  const SWord64 ext_ident_word64_512,
                                  const SWord64 ext_ident_word64_513,
                                  const SWord64 ext_ident_word64_514,
                                  const SWord64 ext_ident_word64_515,
                                  const SWord64 ext_ident_word64_516,
                                  const SWord64 ext_ident_word64_517,
                                  const SWord64 ext_ident_word64_518,
                                  const SDouble ext_ident_double_527,
                                  const SWord64 ext_ident_word64_520,
                                  const SWord64 ext_ident_word64_521,
                                  const SWord64 ext_ident_word64_522,
                                  const SWord64 ext_ident_word64_523,
                                  const SWord64 ext_ident_word64_524,
                                  const SWord64 ext_ident_word64_525,
                                  const SWord64 ext_ident_word64_526,
                                  const SDouble ext_ident_double_530,
                                  const SDouble ext_ident_double_529,
                                  const SDouble ext_ident_double_531)
{
  const SDouble s0 = ext_ident_double_465;
  const SDouble s1 = ext_ident_double_444;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_intruder_velocity_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_461;
  const SDouble s11 = ext_ident_double_452;
  const SWord64 s12 = ext_ident_word64_445;
  const SDouble s13 = ext_ownship_position_z;
  const SWord64 s14 = ext_ident_word64_446;
  const SWord64 s15 = ext_ident_word64_447;
  const SWord64 s16 = ext_ident_word64_448;
  const SWord64 s17 = ext_ident_word64_449;
  const SWord64 s18 = ext_ident_word64_450;
  const SWord64 s19 = ext_ident_word64_451;
  const SDouble s20 = ext_ident_double_460;
  const SWord64 s21 = ext_ident_word64_453;
  const SWord64 s22 = ext_ident_word64_454;
  const SWord64 s23 = ext_ident_word64_455;
  const SWord64 s24 = ext_ident_word64_456;
  const SWord64 s25 = ext_ident_word64_457;
  const SWord64 s26 = ext_ident_word64_458;
  const SWord64 s27 = ext_ident_word64_459;
  const SDouble s28 = ext_ident_double_463;
  const SDouble s29 = ext_ident_double_462;
  const SDouble s30 = ext_ident_double_464;
  const SDouble s31 = ext_ident_double_488;
  const SDouble s32 = ext_ident_double_487;
  const SDouble s33 = ext_ident_double_466;
  const SDouble s34 = ext_ident_double_483;
  const SDouble s35 = ext_ident_double_474;
  const SWord64 s36 = ext_ident_word64_467;
  const SWord64 s37 = ext_ident_word64_468;
  const SWord64 s38 = ext_ident_word64_469;
  const SWord64 s39 = ext_ident_word64_470;
  const SWord64 s40 = ext_ident_word64_471;
  const SWord64 s41 = ext_ident_word64_472;
  const SWord64 s42 = ext_ident_word64_473;
  const SDouble s43 = ext_ident_double_482;
  const SWord64 s44 = ext_ident_word64_475;
  const SWord64 s45 = ext_ident_word64_476;
  const SWord64 s46 = ext_ident_word64_477;
  const SWord64 s47 = ext_ident_word64_478;
  const SWord64 s48 = ext_ident_word64_479;
  const SWord64 s49 = ext_ident_word64_480;
  const SWord64 s50 = ext_ident_word64_481;
  const SDouble s51 = ext_ident_double_485;
  const SDouble s52 = ext_ident_double_484;
  const SDouble s53 = ext_ident_double_486;
  const SDouble s54 = ext_ownship_velocity_z;
  const SDouble s55 = ext_ident_double_510;
  const SDouble s56 = ext_ident_double_489;
  const SDouble s57 = ext_ident_double_506;
  const SDouble s58 = ext_ident_double_497;
  const SWord64 s59 = ext_ident_word64_490;
  const SWord64 s60 = ext_ident_word64_491;
  const SWord64 s61 = ext_ident_word64_492;
  const SWord64 s62 = ext_ident_word64_493;
  const SWord64 s63 = ext_ident_word64_494;
  const SWord64 s64 = ext_ident_word64_495;
  const SWord64 s65 = ext_ident_word64_496;
  const SDouble s66 = ext_ident_double_505;
  const SWord64 s67 = ext_ident_word64_498;
  const SWord64 s68 = ext_ident_word64_499;
  const SWord64 s69 = ext_ident_word64_500;
  const SWord64 s70 = ext_ident_word64_501;
  const SWord64 s71 = ext_ident_word64_502;
  const SWord64 s72 = ext_ident_word64_503;
  const SWord64 s73 = ext_ident_word64_504;
  const SDouble s74 = ext_ident_double_508;
  const SDouble s75 = ext_ident_double_507;
  const SDouble s76 = ext_ident_double_509;
  const SDouble s77 = ext_ident_double_533;
  const SDouble s78 = ext_ident_double_532;
  const SDouble s79 = ext_ident_double_511;
  const SDouble s80 = ext_ident_double_528;
  const SDouble s81 = ext_ident_double_519;
  const SWord64 s82 = ext_ident_word64_512;
  const SWord64 s83 = ext_ident_word64_513;
  const SWord64 s84 = ext_ident_word64_514;
  const SWord64 s85 = ext_ident_word64_515;
  const SWord64 s86 = ext_ident_word64_516;
  const SWord64 s87 = ext_ident_word64_517;
  const SWord64 s88 = ext_ident_word64_518;
  const SDouble s89 = ext_ident_double_527;
  const SWord64 s90 = ext_ident_word64_520;
  const SWord64 s91 = ext_ident_word64_521;
  const SWord64 s92 = ext_ident_word64_522;
  const SWord64 s93 = ext_ident_word64_523;
  const SWord64 s94 = ext_ident_word64_524;
  const SWord64 s95 = ext_ident_word64_525;
  const SWord64 s96 = ext_ident_word64_526;
  const SDouble s97 = ext_ident_double_530;
  const SDouble s98 = ext_ident_double_529;
  const SDouble s99 = ext_ident_double_531;
  const SBool   s100 = s0 <= s31;
  const SDouble s101 = s100 ? s55 : s77;
  const SDouble s102 = s101 /* mini */;

  return s102;
}
