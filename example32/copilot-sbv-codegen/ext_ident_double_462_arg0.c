/* File: "ext_ident_double_462_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_405) + (ext_ident_double_461))));
*/
SDouble ext_ident_double_462_arg0(const SDouble ext_ident_double_405,
                                  const SDouble ext_ident_double_404,
                                  const SDouble ext_ident_double_396, const SBool *queue_0,
                                  const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                                  const SDouble *queue_1, const SWord32 ptr_1,
                                  const SDouble ext_ident_double_397,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SDouble ext_ident_double_398,
                                  const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                  const SWord32 ptr_7, const SDouble ext_ident_double_399,
                                  const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                  const SWord32 ptr_3, const SDouble ext_ident_double_400,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_401,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SDouble ext_ident_double_402,
                                  const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                  const SWord32 ptr_8, const SDouble ext_ident_double_403,
                                  const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                  const SWord32 ptr_6, const SDouble ext_ident_double_461,
                                  const SDouble ext_ident_double_419,
                                  const SBool ext_ident_bool_414,
                                  const SDouble ext_ident_double_413,
                                  const SDouble ext_ident_double_408,
                                  const SDouble ext_ident_double_406,
                                  const SDouble ext_ownship_position_z, const SDouble *queue_9,
                                  const SWord32 ptr_9, const SDouble ext_ident_double_407,
                                  const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                  const SWord32 ptr_10, const SDouble ext_ident_double_412,
                                  const SDouble ext_ident_double_411,
                                  const SDouble ext_ident_double_409,
                                  const SDouble ext_ident_double_410,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_418,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_417,
                                  const SDouble ext_ident_double_415,
                                  const SDouble ext_ident_double_416,
                                  const SDouble ext_ident_double_460, const SDouble ext_sqrt_459,
                                  const SDouble ext_ident_double_428,
                                  const SDouble ext_ident_double_420,
                                  const SDouble ext_ident_double_421,
                                  const SDouble ext_ident_double_422,
                                  const SDouble ext_ident_double_423,
                                  const SDouble ext_ident_double_424,
                                  const SDouble ext_ident_double_425,
                                  const SDouble ext_ident_double_426,
                                  const SDouble ext_ident_double_427,
                                  const SDouble ext_ident_double_437,
                                  const SDouble ext_ident_double_429,
                                  const SDouble ext_ident_double_430,
                                  const SDouble ext_ident_double_431,
                                  const SDouble ext_ident_double_432,
                                  const SDouble ext_ident_double_433,
                                  const SDouble ext_ident_double_434,
                                  const SDouble ext_ident_double_435,
                                  const SDouble ext_ident_double_436,
                                  const SDouble ext_ident_double_458,
                                  const SDouble ext_ident_double_447,
                                  const SDouble ext_ident_double_446,
                                  const SDouble ext_ident_double_438,
                                  const SDouble ext_ident_double_439,
                                  const SDouble ext_ident_double_440,
                                  const SDouble ext_ident_double_441,
                                  const SDouble ext_ident_double_442,
                                  const SDouble ext_ident_double_443,
                                  const SDouble ext_ident_double_444,
                                  const SDouble ext_ident_double_445,
                                  const SDouble ext_ident_double_457,
                                  const SDouble ext_ident_double_456,
                                  const SDouble ext_ident_double_448,
                                  const SDouble ext_ident_double_449,
                                  const SDouble ext_ident_double_450,
                                  const SDouble ext_ident_double_451,
                                  const SDouble ext_ident_double_452,
                                  const SDouble ext_ident_double_453,
                                  const SDouble ext_ident_double_454,
                                  const SDouble ext_ident_double_455,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_405;
  const SDouble s1 = ext_ident_double_404;
  const SDouble s2 = ext_ident_double_396;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_ownship_position_x;
  const SDouble s6 = queue_1[0];
  const SWord32 s7 = ptr_1;
  const SDouble s8 = ext_ident_double_397;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = queue_2[0];
  const SWord32 s11 = ptr_2;
  const SDouble s12 = ext_ident_double_398;
  const SDouble s13 = ext_ownship_velocity_x;
  const SDouble s14 = queue_7[0];
  const SWord32 s15 = ptr_7;
  const SDouble s16 = ext_ident_double_399;
  const SDouble s17 = ext_intruder_velocity_x;
  const SDouble s18 = queue_3[0];
  const SWord32 s19 = ptr_3;
  const SDouble s20 = ext_ident_double_400;
  const SDouble s21 = ext_ownship_position_y;
  const SDouble s22 = queue_4[0];
  const SWord32 s23 = ptr_4;
  const SDouble s24 = ext_ident_double_401;
  const SDouble s25 = ext_intruder_position_y;
  const SDouble s26 = queue_5[0];
  const SWord32 s27 = ptr_5;
  const SDouble s28 = ext_ident_double_402;
  const SDouble s29 = ext_ownship_velocity_y;
  const SDouble s30 = queue_8[0];
  const SWord32 s31 = ptr_8;
  const SDouble s32 = ext_ident_double_403;
  const SDouble s33 = ext_intruder_velocity_y;
  const SDouble s34 = queue_6[0];
  const SWord32 s35 = ptr_6;
  const SDouble s36 = ext_ident_double_461;
  const SDouble s37 = ext_ident_double_419;
  const SBool   s38 = ext_ident_bool_414;
  const SDouble s39 = ext_ident_double_413;
  const SDouble s40 = ext_ident_double_408;
  const SDouble s41 = ext_ident_double_406;
  const SDouble s42 = ext_ownship_position_z;
  const SDouble s43 = queue_9[0];
  const SWord32 s44 = ptr_9;
  const SDouble s45 = ext_ident_double_407;
  const SDouble s46 = ext_intruder_position_z;
  const SDouble s47 = queue_10[0];
  const SWord32 s48 = ptr_10;
  const SDouble s49 = ext_ident_double_412;
  const SDouble s50 = ext_ident_double_411;
  const SDouble s51 = ext_ident_double_409;
  const SDouble s52 = ext_ident_double_410;
  const SDouble s53 = ext_minimal_vertical_separation;
  const SDouble s54 = ext_ident_double_418;
  const SDouble s55 = ext_direction_parameter_vertical;
  const SDouble s56 = ext_ident_double_417;
  const SDouble s57 = ext_ident_double_415;
  const SDouble s58 = ext_ident_double_416;
  const SDouble s59 = ext_ident_double_460;
  const SDouble s60 = ext_sqrt_459;
  const SDouble s61 = ext_ident_double_428;
  const SDouble s62 = ext_ident_double_420;
  const SDouble s63 = ext_ident_double_421;
  const SDouble s64 = ext_ident_double_422;
  const SDouble s65 = ext_ident_double_423;
  const SDouble s66 = ext_ident_double_424;
  const SDouble s67 = ext_ident_double_425;
  const SDouble s68 = ext_ident_double_426;
  const SDouble s69 = ext_ident_double_427;
  const SDouble s70 = ext_ident_double_437;
  const SDouble s71 = ext_ident_double_429;
  const SDouble s72 = ext_ident_double_430;
  const SDouble s73 = ext_ident_double_431;
  const SDouble s74 = ext_ident_double_432;
  const SDouble s75 = ext_ident_double_433;
  const SDouble s76 = ext_ident_double_434;
  const SDouble s77 = ext_ident_double_435;
  const SDouble s78 = ext_ident_double_436;
  const SDouble s79 = ext_ident_double_458;
  const SDouble s80 = ext_ident_double_447;
  const SDouble s81 = ext_ident_double_446;
  const SDouble s82 = ext_ident_double_438;
  const SDouble s83 = ext_ident_double_439;
  const SDouble s84 = ext_ident_double_440;
  const SDouble s85 = ext_ident_double_441;
  const SDouble s86 = ext_ident_double_442;
  const SDouble s87 = ext_ident_double_443;
  const SDouble s88 = ext_ident_double_444;
  const SDouble s89 = ext_ident_double_445;
  const SDouble s90 = ext_ident_double_457;
  const SDouble s91 = ext_ident_double_456;
  const SDouble s92 = ext_ident_double_448;
  const SDouble s93 = ext_ident_double_449;
  const SDouble s94 = ext_ident_double_450;
  const SDouble s95 = ext_ident_double_451;
  const SDouble s96 = ext_ident_double_452;
  const SDouble s97 = ext_ident_double_453;
  const SDouble s98 = ext_ident_double_454;
  const SDouble s99 = ext_ident_double_455;
  const SDouble s100 = ext_minimal_horizontal_separation;
  const SDouble s101 = s0 + s36;
  const SDouble s102 = s101 /* thetaVert_dividend */;

  return s102;
}
