/* File: "ext_ident_double_805_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_sqrt_804));
*/
SDouble ext_ident_double_805_arg0(const SDouble ext_sqrt_804,
                                  const SDouble ext_ident_double_773,
                                  const SDouble ext_ident_double_765, const SBool *queue_0,
                                  const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                                  const SDouble *queue_1, const SWord32 ptr_1,
                                  const SDouble ext_ident_double_766,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SDouble ext_ident_double_767,
                                  const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                  const SWord32 ptr_7, const SDouble ext_ident_double_768,
                                  const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                  const SWord32 ptr_3, const SDouble ext_ident_double_769,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_770,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SDouble ext_ident_double_771,
                                  const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                  const SWord32 ptr_8, const SDouble ext_ident_double_772,
                                  const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                  const SWord32 ptr_6, const SDouble ext_ident_double_782,
                                  const SDouble ext_ident_double_774,
                                  const SDouble ext_ident_double_775,
                                  const SDouble ext_ident_double_776,
                                  const SDouble ext_ident_double_777,
                                  const SDouble ext_ident_double_778,
                                  const SDouble ext_ident_double_779,
                                  const SDouble ext_ident_double_780,
                                  const SDouble ext_ident_double_781,
                                  const SDouble ext_ident_double_803,
                                  const SDouble ext_ident_double_792,
                                  const SDouble ext_ident_double_791,
                                  const SDouble ext_ident_double_783,
                                  const SDouble ext_ident_double_784,
                                  const SDouble ext_ident_double_785,
                                  const SDouble ext_ident_double_786,
                                  const SDouble ext_ident_double_787,
                                  const SDouble ext_ident_double_788,
                                  const SDouble ext_ident_double_789,
                                  const SDouble ext_ident_double_790,
                                  const SDouble ext_ident_double_802,
                                  const SDouble ext_ident_double_801,
                                  const SDouble ext_ident_double_793,
                                  const SDouble ext_ident_double_794,
                                  const SDouble ext_ident_double_795,
                                  const SDouble ext_ident_double_796,
                                  const SDouble ext_ident_double_797,
                                  const SDouble ext_ident_double_798,
                                  const SDouble ext_ident_double_799,
                                  const SDouble ext_ident_double_800,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_sqrt_804;
  const SDouble s1 = ext_ident_double_773;
  const SDouble s2 = ext_ident_double_765;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_ownship_position_x;
  const SDouble s6 = queue_1[0];
  const SWord32 s7 = ptr_1;
  const SDouble s8 = ext_ident_double_766;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = queue_2[0];
  const SWord32 s11 = ptr_2;
  const SDouble s12 = ext_ident_double_767;
  const SDouble s13 = ext_ownship_velocity_x;
  const SDouble s14 = queue_7[0];
  const SWord32 s15 = ptr_7;
  const SDouble s16 = ext_ident_double_768;
  const SDouble s17 = ext_intruder_velocity_x;
  const SDouble s18 = queue_3[0];
  const SWord32 s19 = ptr_3;
  const SDouble s20 = ext_ident_double_769;
  const SDouble s21 = ext_ownship_position_y;
  const SDouble s22 = queue_4[0];
  const SWord32 s23 = ptr_4;
  const SDouble s24 = ext_ident_double_770;
  const SDouble s25 = ext_intruder_position_y;
  const SDouble s26 = queue_5[0];
  const SWord32 s27 = ptr_5;
  const SDouble s28 = ext_ident_double_771;
  const SDouble s29 = ext_ownship_velocity_y;
  const SDouble s30 = queue_8[0];
  const SWord32 s31 = ptr_8;
  const SDouble s32 = ext_ident_double_772;
  const SDouble s33 = ext_intruder_velocity_y;
  const SDouble s34 = queue_6[0];
  const SWord32 s35 = ptr_6;
  const SDouble s36 = ext_ident_double_782;
  const SDouble s37 = ext_ident_double_774;
  const SDouble s38 = ext_ident_double_775;
  const SDouble s39 = ext_ident_double_776;
  const SDouble s40 = ext_ident_double_777;
  const SDouble s41 = ext_ident_double_778;
  const SDouble s42 = ext_ident_double_779;
  const SDouble s43 = ext_ident_double_780;
  const SDouble s44 = ext_ident_double_781;
  const SDouble s45 = ext_ident_double_803;
  const SDouble s46 = ext_ident_double_792;
  const SDouble s47 = ext_ident_double_791;
  const SDouble s48 = ext_ident_double_783;
  const SDouble s49 = ext_ident_double_784;
  const SDouble s50 = ext_ident_double_785;
  const SDouble s51 = ext_ident_double_786;
  const SDouble s52 = ext_ident_double_787;
  const SDouble s53 = ext_ident_double_788;
  const SDouble s54 = ext_ident_double_789;
  const SDouble s55 = ext_ident_double_790;
  const SDouble s56 = ext_ident_double_802;
  const SDouble s57 = ext_ident_double_801;
  const SDouble s58 = ext_ident_double_793;
  const SDouble s59 = ext_ident_double_794;
  const SDouble s60 = ext_ident_double_795;
  const SDouble s61 = ext_ident_double_796;
  const SDouble s62 = ext_ident_double_797;
  const SDouble s63 = ext_ident_double_798;
  const SDouble s64 = ext_ident_double_799;
  const SDouble s65 = ext_ident_double_800;
  const SDouble s66 = ext_minimal_horizontal_separation;
  const SDouble s67 = s0 /* thetaVert_part2 */;

  return s67;
}