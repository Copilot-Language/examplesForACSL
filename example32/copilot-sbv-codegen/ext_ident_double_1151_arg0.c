/* File: "ext_ident_double_1151_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_sqrt_1150));
*/
SDouble ext_ident_double_1151_arg0(const SDouble ext_sqrt_1150,
                                   const SDouble ext_ident_double_1119,
                                   const SDouble ext_ident_double_1111, const SBool *queue_0,
                                   const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                                   const SDouble *queue_1, const SWord32 ptr_1,
                                   const SDouble ext_ident_double_1112,
                                   const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                   const SWord32 ptr_2, const SDouble ext_ident_double_1113,
                                   const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                   const SWord32 ptr_7, const SDouble ext_ident_double_1114,
                                   const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                   const SWord32 ptr_3, const SDouble ext_ident_double_1115,
                                   const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                   const SWord32 ptr_4, const SDouble ext_ident_double_1116,
                                   const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                   const SWord32 ptr_5, const SDouble ext_ident_double_1117,
                                   const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                   const SWord32 ptr_8, const SDouble ext_ident_double_1118,
                                   const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                   const SWord32 ptr_6, const SDouble ext_ident_double_1128,
                                   const SDouble ext_ident_double_1120,
                                   const SDouble ext_ident_double_1121,
                                   const SDouble ext_ident_double_1122,
                                   const SDouble ext_ident_double_1123,
                                   const SDouble ext_ident_double_1124,
                                   const SDouble ext_ident_double_1125,
                                   const SDouble ext_ident_double_1126,
                                   const SDouble ext_ident_double_1127,
                                   const SDouble ext_ident_double_1149,
                                   const SDouble ext_ident_double_1138,
                                   const SDouble ext_ident_double_1137,
                                   const SDouble ext_ident_double_1129,
                                   const SDouble ext_ident_double_1130,
                                   const SDouble ext_ident_double_1131,
                                   const SDouble ext_ident_double_1132,
                                   const SDouble ext_ident_double_1133,
                                   const SDouble ext_ident_double_1134,
                                   const SDouble ext_ident_double_1135,
                                   const SDouble ext_ident_double_1136,
                                   const SDouble ext_ident_double_1148,
                                   const SDouble ext_ident_double_1147,
                                   const SDouble ext_ident_double_1139,
                                   const SDouble ext_ident_double_1140,
                                   const SDouble ext_ident_double_1141,
                                   const SDouble ext_ident_double_1142,
                                   const SDouble ext_ident_double_1143,
                                   const SDouble ext_ident_double_1144,
                                   const SDouble ext_ident_double_1145,
                                   const SDouble ext_ident_double_1146,
                                   const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_sqrt_1150;
  const SDouble s1 = ext_ident_double_1119;
  const SDouble s2 = ext_ident_double_1111;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_ownship_position_x;
  const SDouble s6 = queue_1[0];
  const SWord32 s7 = ptr_1;
  const SDouble s8 = ext_ident_double_1112;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = queue_2[0];
  const SWord32 s11 = ptr_2;
  const SDouble s12 = ext_ident_double_1113;
  const SDouble s13 = ext_ownship_velocity_x;
  const SDouble s14 = queue_7[0];
  const SWord32 s15 = ptr_7;
  const SDouble s16 = ext_ident_double_1114;
  const SDouble s17 = ext_intruder_velocity_x;
  const SDouble s18 = queue_3[0];
  const SWord32 s19 = ptr_3;
  const SDouble s20 = ext_ident_double_1115;
  const SDouble s21 = ext_ownship_position_y;
  const SDouble s22 = queue_4[0];
  const SWord32 s23 = ptr_4;
  const SDouble s24 = ext_ident_double_1116;
  const SDouble s25 = ext_intruder_position_y;
  const SDouble s26 = queue_5[0];
  const SWord32 s27 = ptr_5;
  const SDouble s28 = ext_ident_double_1117;
  const SDouble s29 = ext_ownship_velocity_y;
  const SDouble s30 = queue_8[0];
  const SWord32 s31 = ptr_8;
  const SDouble s32 = ext_ident_double_1118;
  const SDouble s33 = ext_intruder_velocity_y;
  const SDouble s34 = queue_6[0];
  const SWord32 s35 = ptr_6;
  const SDouble s36 = ext_ident_double_1128;
  const SDouble s37 = ext_ident_double_1120;
  const SDouble s38 = ext_ident_double_1121;
  const SDouble s39 = ext_ident_double_1122;
  const SDouble s40 = ext_ident_double_1123;
  const SDouble s41 = ext_ident_double_1124;
  const SDouble s42 = ext_ident_double_1125;
  const SDouble s43 = ext_ident_double_1126;
  const SDouble s44 = ext_ident_double_1127;
  const SDouble s45 = ext_ident_double_1149;
  const SDouble s46 = ext_ident_double_1138;
  const SDouble s47 = ext_ident_double_1137;
  const SDouble s48 = ext_ident_double_1129;
  const SDouble s49 = ext_ident_double_1130;
  const SDouble s50 = ext_ident_double_1131;
  const SDouble s51 = ext_ident_double_1132;
  const SDouble s52 = ext_ident_double_1133;
  const SDouble s53 = ext_ident_double_1134;
  const SDouble s54 = ext_ident_double_1135;
  const SDouble s55 = ext_ident_double_1136;
  const SDouble s56 = ext_ident_double_1148;
  const SDouble s57 = ext_ident_double_1147;
  const SDouble s58 = ext_ident_double_1139;
  const SDouble s59 = ext_ident_double_1140;
  const SDouble s60 = ext_ident_double_1141;
  const SDouble s61 = ext_ident_double_1142;
  const SDouble s62 = ext_ident_double_1143;
  const SDouble s63 = ext_ident_double_1144;
  const SDouble s64 = ext_ident_double_1145;
  const SDouble s65 = ext_ident_double_1146;
  const SDouble s66 = ext_minimal_horizontal_separation;
  const SDouble s67 = s0 /* thetaVert_part2 */;

  return s67;
}
