/* File: "ext_ident_double_973_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_962) * (ext_ident_double_972))));
*/
SDouble ext_ident_double_973_arg0(const SDouble ext_ident_double_962,
                                  const SDouble ext_ident_double_961,
                                  const SDouble ext_ident_double_953, const SBool *queue_0,
                                  const SWord32 ptr_0, const SDouble ext_ownship_velocity_x,
                                  const SDouble *queue_7, const SWord32 ptr_7,
                                  const SDouble ext_ident_double_954,
                                  const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                  const SWord32 ptr_3, const SDouble ext_ident_double_955,
                                  const SDouble ext_ident_double_956,
                                  const SDouble ext_ident_double_957,
                                  const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                  const SWord32 ptr_8, const SDouble ext_ident_double_958,
                                  const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                  const SWord32 ptr_6, const SDouble ext_ident_double_959,
                                  const SDouble ext_ident_double_960,
                                  const SDouble ext_ident_double_972,
                                  const SDouble ext_ident_double_971,
                                  const SDouble ext_ident_double_963,
                                  const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                  const SWord32 ptr_1, const SDouble ext_ident_double_964,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SDouble ext_ident_double_965,
                                  const SDouble ext_ident_double_966,
                                  const SDouble ext_ident_double_967,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_968,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SDouble ext_ident_double_969,
                                  const SDouble ext_ident_double_970,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_962;
  const SDouble s1 = ext_ident_double_961;
  const SDouble s2 = ext_ident_double_953;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_ownship_velocity_x;
  const SDouble s6 = queue_7[0];
  const SWord32 s7 = ptr_7;
  const SDouble s8 = ext_ident_double_954;
  const SDouble s9 = ext_intruder_velocity_x;
  const SDouble s10 = queue_3[0];
  const SWord32 s11 = ptr_3;
  const SDouble s12 = ext_ident_double_955;
  const SDouble s13 = ext_ident_double_956;
  const SDouble s14 = ext_ident_double_957;
  const SDouble s15 = ext_ownship_velocity_y;
  const SDouble s16 = queue_8[0];
  const SWord32 s17 = ptr_8;
  const SDouble s18 = ext_ident_double_958;
  const SDouble s19 = ext_intruder_velocity_y;
  const SDouble s20 = queue_6[0];
  const SWord32 s21 = ptr_6;
  const SDouble s22 = ext_ident_double_959;
  const SDouble s23 = ext_ident_double_960;
  const SDouble s24 = ext_ident_double_972;
  const SDouble s25 = ext_ident_double_971;
  const SDouble s26 = ext_ident_double_963;
  const SDouble s27 = ext_ownship_position_x;
  const SDouble s28 = queue_1[0];
  const SWord32 s29 = ptr_1;
  const SDouble s30 = ext_ident_double_964;
  const SDouble s31 = ext_intruder_position_x;
  const SDouble s32 = queue_2[0];
  const SWord32 s33 = ptr_2;
  const SDouble s34 = ext_ident_double_965;
  const SDouble s35 = ext_ident_double_966;
  const SDouble s36 = ext_ident_double_967;
  const SDouble s37 = ext_ownship_position_y;
  const SDouble s38 = queue_4[0];
  const SWord32 s39 = ptr_4;
  const SDouble s40 = ext_ident_double_968;
  const SDouble s41 = ext_intruder_position_y;
  const SDouble s42 = queue_5[0];
  const SWord32 s43 = ptr_5;
  const SDouble s44 = ext_ident_double_969;
  const SDouble s45 = ext_ident_double_970;
  const SDouble s46 = ext_minimal_horizontal_separation;
  const SDouble s47 = s0 * s24;
  const SDouble s48 = s47 /* thetaVert_part2.3 */;

  return s48;
}
