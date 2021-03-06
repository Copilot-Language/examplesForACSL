/* File: "ext_sqrt_1064_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 ((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))))))
*/
/*@
 assigns \nothing;
 ensures \result == (((((ext_ident_double_1033) * (ext_ident_double_1042))) - (ext_ident_double_1063)));
*/
SDouble ext_sqrt_1064_arg0(const SDouble ext_ident_double_1033,
                           const SDouble ext_ident_double_1025, const SBool *queue_0,
                           const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                           const SDouble *queue_1, const SWord32 ptr_1,
                           const SDouble ext_ident_double_1026,
                           const SDouble ext_intruder_position_x, const SDouble *queue_2,
                           const SWord32 ptr_2, const SDouble ext_ident_double_1027,
                           const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                           const SWord32 ptr_7, const SDouble ext_ident_double_1028,
                           const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                           const SWord32 ptr_3, const SDouble ext_ident_double_1029,
                           const SDouble ext_ownship_position_y, const SDouble *queue_4,
                           const SWord32 ptr_4, const SDouble ext_ident_double_1030,
                           const SDouble ext_intruder_position_y, const SDouble *queue_5,
                           const SWord32 ptr_5, const SDouble ext_ident_double_1031,
                           const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                           const SWord32 ptr_8, const SDouble ext_ident_double_1032,
                           const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                           const SWord32 ptr_6, const SDouble ext_ident_double_1042,
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
                           const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_1033;
  const SDouble s1 = ext_ident_double_1025;
  const SBool   s2 = queue_0[0];
  const SWord32 s3 = ptr_0;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = queue_1[0];
  const SWord32 s6 = ptr_1;
  const SDouble s7 = ext_ident_double_1026;
  const SDouble s8 = ext_intruder_position_x;
  const SDouble s9 = queue_2[0];
  const SWord32 s10 = ptr_2;
  const SDouble s11 = ext_ident_double_1027;
  const SDouble s12 = ext_ownship_velocity_x;
  const SDouble s13 = queue_7[0];
  const SWord32 s14 = ptr_7;
  const SDouble s15 = ext_ident_double_1028;
  const SDouble s16 = ext_intruder_velocity_x;
  const SDouble s17 = queue_3[0];
  const SWord32 s18 = ptr_3;
  const SDouble s19 = ext_ident_double_1029;
  const SDouble s20 = ext_ownship_position_y;
  const SDouble s21 = queue_4[0];
  const SWord32 s22 = ptr_4;
  const SDouble s23 = ext_ident_double_1030;
  const SDouble s24 = ext_intruder_position_y;
  const SDouble s25 = queue_5[0];
  const SWord32 s26 = ptr_5;
  const SDouble s27 = ext_ident_double_1031;
  const SDouble s28 = ext_ownship_velocity_y;
  const SDouble s29 = queue_8[0];
  const SWord32 s30 = ptr_8;
  const SDouble s31 = ext_ident_double_1032;
  const SDouble s32 = ext_intruder_velocity_y;
  const SDouble s33 = queue_6[0];
  const SWord32 s34 = ptr_6;
  const SDouble s35 = ext_ident_double_1042;
  const SDouble s36 = ext_ident_double_1034;
  const SDouble s37 = ext_ident_double_1035;
  const SDouble s38 = ext_ident_double_1036;
  const SDouble s39 = ext_ident_double_1037;
  const SDouble s40 = ext_ident_double_1038;
  const SDouble s41 = ext_ident_double_1039;
  const SDouble s42 = ext_ident_double_1040;
  const SDouble s43 = ext_ident_double_1041;
  const SDouble s44 = ext_ident_double_1063;
  const SDouble s45 = ext_ident_double_1052;
  const SDouble s46 = ext_ident_double_1051;
  const SDouble s47 = ext_ident_double_1043;
  const SDouble s48 = ext_ident_double_1044;
  const SDouble s49 = ext_ident_double_1045;
  const SDouble s50 = ext_ident_double_1046;
  const SDouble s51 = ext_ident_double_1047;
  const SDouble s52 = ext_ident_double_1048;
  const SDouble s53 = ext_ident_double_1049;
  const SDouble s54 = ext_ident_double_1050;
  const SDouble s55 = ext_ident_double_1062;
  const SDouble s56 = ext_ident_double_1061;
  const SDouble s57 = ext_ident_double_1053;
  const SDouble s58 = ext_ident_double_1054;
  const SDouble s59 = ext_ident_double_1055;
  const SDouble s60 = ext_ident_double_1056;
  const SDouble s61 = ext_ident_double_1057;
  const SDouble s62 = ext_ident_double_1058;
  const SDouble s63 = ext_ident_double_1059;
  const SDouble s64 = ext_ident_double_1060;
  const SDouble s65 = ext_minimal_horizontal_separation;
  const SDouble s66 = s0 * s35;
  const SDouble s67 = s66 - s44;

  return s67;
}
