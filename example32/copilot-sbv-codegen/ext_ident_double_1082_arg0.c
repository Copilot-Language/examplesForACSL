/* File: "ext_ident_double_1082_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionConflict_part2.3.1" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) + (Extf_ident_double(label "theta_dir_2" Extf_ident_double(label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))))))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_999) - (ext_ident_double_1000))) + (((ext_ident_double_1079) * (((ext_ident_double_1080) - (ext_ident_double_1081))))))));
*/
SDouble ext_ident_double_1082_arg0(const SDouble ext_ident_double_999,
                                   const SBool *queue_0, const SWord32 ptr_0,
                                   const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                   const SWord32 ptr_1, const SDouble ext_ident_double_1000,
                                   const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                   const SWord32 ptr_2, const SDouble ext_ident_double_1079,
                                   const SDouble ext_ident_double_1078,
                                   const SDouble ext_ident_double_1067,
                                   const SDouble ext_ident_double_1010,
                                   const SDouble ext_ident_double_1009,
                                   const SDouble ext_ident_double_1001,
                                   const SDouble ext_ident_double_1002,
                                   const SDouble ext_ident_double_1003,
                                   const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                   const SWord32 ptr_7, const SDouble ext_ident_double_1004,
                                   const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                   const SWord32 ptr_3, const SDouble ext_ident_double_1005,
                                   const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                   const SWord32 ptr_4, const SDouble ext_ident_double_1006,
                                   const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                   const SWord32 ptr_5, const SDouble ext_ident_double_1007,
                                   const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                   const SWord32 ptr_8, const SDouble ext_ident_double_1008,
                                   const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                   const SWord32 ptr_6, const SDouble ext_ident_double_1066,
                                   const SDouble ext_ident_double_1024,
                                   const SBool ext_ident_bool_1019,
                                   const SDouble ext_ident_double_1018,
                                   const SDouble ext_ident_double_1013,
                                   const SDouble ext_ident_double_1011,
                                   const SDouble ext_ownship_position_z, const SDouble *queue_9,
                                   const SWord32 ptr_9, const SDouble ext_ident_double_1012,
                                   const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                   const SWord32 ptr_10, const SDouble ext_ident_double_1017,
                                   const SDouble ext_ident_double_1016,
                                   const SDouble ext_ident_double_1014,
                                   const SDouble ext_ident_double_1015,
                                   const SDouble ext_minimal_vertical_separation,
                                   const SDouble ext_ident_double_1023,
                                   const SDouble ext_direction_parameter_vertical,
                                   const SDouble ext_ident_double_1022,
                                   const SDouble ext_ident_double_1020,
                                   const SDouble ext_ident_double_1021,
                                   const SDouble ext_ident_double_1065, const SDouble ext_sqrt_1064,
                                   const SDouble ext_ident_double_1033,
                                   const SDouble ext_ident_double_1025,
                                   const SDouble ext_ident_double_1026,
                                   const SDouble ext_ident_double_1027,
                                   const SDouble ext_ident_double_1028,
                                   const SDouble ext_ident_double_1029,
                                   const SDouble ext_ident_double_1030,
                                   const SDouble ext_ident_double_1031,
                                   const SDouble ext_ident_double_1032,
                                   const SDouble ext_ident_double_1042,
                                   const SDouble ext_ident_double_1034,
                                   const SDouble ext_ident_double_1035,
                                   const SDouble ext_ident_double_1036,
                                   const SDouble ext_ident_double_1037,
                                   const SDouble ext_ident_double_1038,
                                   const SDouble ext_ident_double_1039,
                                   const SDouble ext_ident_double_1040,
                                   const SDouble ext_ident_double_1041,
                                   const SDouble ext_ident_double_1063,
                                   const SDouble ext_ident_double_1052,
                                   const SDouble ext_ident_double_1051,
                                   const SDouble ext_ident_double_1043,
                                   const SDouble ext_ident_double_1044,
                                   const SDouble ext_ident_double_1045,
                                   const SDouble ext_ident_double_1046,
                                   const SDouble ext_ident_double_1047,
                                   const SDouble ext_ident_double_1048,
                                   const SDouble ext_ident_double_1049,
                                   const SDouble ext_ident_double_1050,
                                   const SDouble ext_ident_double_1062,
                                   const SDouble ext_ident_double_1061,
                                   const SDouble ext_ident_double_1053,
                                   const SDouble ext_ident_double_1054,
                                   const SDouble ext_ident_double_1055,
                                   const SDouble ext_ident_double_1056,
                                   const SDouble ext_ident_double_1057,
                                   const SDouble ext_ident_double_1058,
                                   const SDouble ext_ident_double_1059,
                                   const SDouble ext_ident_double_1060,
                                   const SDouble ext_minimal_horizontal_separation,
                                   const SDouble ext_ident_double_1077,
                                   const SDouble ext_ident_double_1076,
                                   const SDouble ext_ident_double_1068,
                                   const SDouble ext_ident_double_1069,
                                   const SDouble ext_ident_double_1070,
                                   const SDouble ext_ident_double_1071,
                                   const SDouble ext_ident_double_1072,
                                   const SDouble ext_ident_double_1073,
                                   const SDouble ext_ident_double_1074,
                                   const SDouble ext_ident_double_1075,
                                   const SDouble ext_ident_double_1080,
                                   const SDouble ext_ident_double_1081)
{
  const SDouble s0 = ext_ident_double_999;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = queue_1[0];
  const SWord32 s5 = ptr_1;
  const SDouble s6 = ext_ident_double_1000;
  const SDouble s7 = ext_intruder_position_x;
  const SDouble s8 = queue_2[0];
  const SWord32 s9 = ptr_2;
  const SDouble s10 = ext_ident_double_1079;
  const SDouble s11 = ext_ident_double_1078;
  const SDouble s12 = ext_ident_double_1067;
  const SDouble s13 = ext_ident_double_1010;
  const SDouble s14 = ext_ident_double_1009;
  const SDouble s15 = ext_ident_double_1001;
  const SDouble s16 = ext_ident_double_1002;
  const SDouble s17 = ext_ident_double_1003;
  const SDouble s18 = ext_ownship_velocity_x;
  const SDouble s19 = queue_7[0];
  const SWord32 s20 = ptr_7;
  const SDouble s21 = ext_ident_double_1004;
  const SDouble s22 = ext_intruder_velocity_x;
  const SDouble s23 = queue_3[0];
  const SWord32 s24 = ptr_3;
  const SDouble s25 = ext_ident_double_1005;
  const SDouble s26 = ext_ownship_position_y;
  const SDouble s27 = queue_4[0];
  const SWord32 s28 = ptr_4;
  const SDouble s29 = ext_ident_double_1006;
  const SDouble s30 = ext_intruder_position_y;
  const SDouble s31 = queue_5[0];
  const SWord32 s32 = ptr_5;
  const SDouble s33 = ext_ident_double_1007;
  const SDouble s34 = ext_ownship_velocity_y;
  const SDouble s35 = queue_8[0];
  const SWord32 s36 = ptr_8;
  const SDouble s37 = ext_ident_double_1008;
  const SDouble s38 = ext_intruder_velocity_y;
  const SDouble s39 = queue_6[0];
  const SWord32 s40 = ptr_6;
  const SDouble s41 = ext_ident_double_1066;
  const SDouble s42 = ext_ident_double_1024;
  const SBool   s43 = ext_ident_bool_1019;
  const SDouble s44 = ext_ident_double_1018;
  const SDouble s45 = ext_ident_double_1013;
  const SDouble s46 = ext_ident_double_1011;
  const SDouble s47 = ext_ownship_position_z;
  const SDouble s48 = queue_9[0];
  const SWord32 s49 = ptr_9;
  const SDouble s50 = ext_ident_double_1012;
  const SDouble s51 = ext_intruder_position_z;
  const SDouble s52 = queue_10[0];
  const SWord32 s53 = ptr_10;
  const SDouble s54 = ext_ident_double_1017;
  const SDouble s55 = ext_ident_double_1016;
  const SDouble s56 = ext_ident_double_1014;
  const SDouble s57 = ext_ident_double_1015;
  const SDouble s58 = ext_minimal_vertical_separation;
  const SDouble s59 = ext_ident_double_1023;
  const SDouble s60 = ext_direction_parameter_vertical;
  const SDouble s61 = ext_ident_double_1022;
  const SDouble s62 = ext_ident_double_1020;
  const SDouble s63 = ext_ident_double_1021;
  const SDouble s64 = ext_ident_double_1065;
  const SDouble s65 = ext_sqrt_1064;
  const SDouble s66 = ext_ident_double_1033;
  const SDouble s67 = ext_ident_double_1025;
  const SDouble s68 = ext_ident_double_1026;
  const SDouble s69 = ext_ident_double_1027;
  const SDouble s70 = ext_ident_double_1028;
  const SDouble s71 = ext_ident_double_1029;
  const SDouble s72 = ext_ident_double_1030;
  const SDouble s73 = ext_ident_double_1031;
  const SDouble s74 = ext_ident_double_1032;
  const SDouble s75 = ext_ident_double_1042;
  const SDouble s76 = ext_ident_double_1034;
  const SDouble s77 = ext_ident_double_1035;
  const SDouble s78 = ext_ident_double_1036;
  const SDouble s79 = ext_ident_double_1037;
  const SDouble s80 = ext_ident_double_1038;
  const SDouble s81 = ext_ident_double_1039;
  const SDouble s82 = ext_ident_double_1040;
  const SDouble s83 = ext_ident_double_1041;
  const SDouble s84 = ext_ident_double_1063;
  const SDouble s85 = ext_ident_double_1052;
  const SDouble s86 = ext_ident_double_1051;
  const SDouble s87 = ext_ident_double_1043;
  const SDouble s88 = ext_ident_double_1044;
  const SDouble s89 = ext_ident_double_1045;
  const SDouble s90 = ext_ident_double_1046;
  const SDouble s91 = ext_ident_double_1047;
  const SDouble s92 = ext_ident_double_1048;
  const SDouble s93 = ext_ident_double_1049;
  const SDouble s94 = ext_ident_double_1050;
  const SDouble s95 = ext_ident_double_1062;
  const SDouble s96 = ext_ident_double_1061;
  const SDouble s97 = ext_ident_double_1053;
  const SDouble s98 = ext_ident_double_1054;
  const SDouble s99 = ext_ident_double_1055;
  const SDouble s100 = ext_ident_double_1056;
  const SDouble s101 = ext_ident_double_1057;
  const SDouble s102 = ext_ident_double_1058;
  const SDouble s103 = ext_ident_double_1059;
  const SDouble s104 = ext_ident_double_1060;
  const SDouble s105 = ext_minimal_horizontal_separation;
  const SDouble s106 = ext_ident_double_1077;
  const SDouble s107 = ext_ident_double_1076;
  const SDouble s108 = ext_ident_double_1068;
  const SDouble s109 = ext_ident_double_1069;
  const SDouble s110 = ext_ident_double_1070;
  const SDouble s111 = ext_ident_double_1071;
  const SDouble s112 = ext_ident_double_1072;
  const SDouble s113 = ext_ident_double_1073;
  const SDouble s114 = ext_ident_double_1074;
  const SDouble s115 = ext_ident_double_1075;
  const SDouble s116 = ext_ident_double_1080;
  const SDouble s117 = ext_ident_double_1081;
  const SDouble s118 = s0 - s6;
  const SDouble s119 = s116 - s117;
  const SDouble s120 = s10 * s119;
  const SDouble s121 = s118 + s120;
  const SDouble s122 = s121 /* verticalCriterionConflict_part2.3.1 */;

  return s122;
}
