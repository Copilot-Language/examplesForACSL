/* File: "ext_ident_double_1265_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part1.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_1257) - (ext_ident_double_1258))) * (((ext_ident_double_1259) - (ext_ident_double_1260))))) + (((((ext_ident_double_1261) - (ext_ident_double_1262))) * (((ext_ident_double_1263) - (ext_ident_double_1264))))))));
*/
SDouble ext_ident_double_1265_arg0(const SDouble ext_ident_double_1257,
                                   const SBool *queue_0, const SWord32 ptr_0,
                                   const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                   const SWord32 ptr_1, const SDouble ext_ident_double_1258,
                                   const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                   const SWord32 ptr_2, const SDouble ext_ident_double_1259,
                                   const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                   const SWord32 ptr_7, const SDouble ext_ident_double_1260,
                                   const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                   const SWord32 ptr_3, const SDouble ext_ident_double_1261,
                                   const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                   const SWord32 ptr_4, const SDouble ext_ident_double_1262,
                                   const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                   const SWord32 ptr_5, const SDouble ext_ident_double_1263,
                                   const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                   const SWord32 ptr_8, const SDouble ext_ident_double_1264,
                                   const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                   const SWord32 ptr_6)
{
  const SDouble s0 = ext_ident_double_1257;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = queue_1[0];
  const SWord32 s5 = ptr_1;
  const SDouble s6 = ext_ident_double_1258;
  const SDouble s7 = ext_intruder_position_x;
  const SDouble s8 = queue_2[0];
  const SWord32 s9 = ptr_2;
  const SDouble s10 = ext_ident_double_1259;
  const SDouble s11 = ext_ownship_velocity_x;
  const SDouble s12 = queue_7[0];
  const SWord32 s13 = ptr_7;
  const SDouble s14 = ext_ident_double_1260;
  const SDouble s15 = ext_intruder_velocity_x;
  const SDouble s16 = queue_3[0];
  const SWord32 s17 = ptr_3;
  const SDouble s18 = ext_ident_double_1261;
  const SDouble s19 = ext_ownship_position_y;
  const SDouble s20 = queue_4[0];
  const SWord32 s21 = ptr_4;
  const SDouble s22 = ext_ident_double_1262;
  const SDouble s23 = ext_intruder_position_y;
  const SDouble s24 = queue_5[0];
  const SWord32 s25 = ptr_5;
  const SDouble s26 = ext_ident_double_1263;
  const SDouble s27 = ext_ownship_velocity_y;
  const SDouble s28 = queue_8[0];
  const SWord32 s29 = ptr_8;
  const SDouble s30 = ext_ident_double_1264;
  const SDouble s31 = ext_intruder_velocity_y;
  const SDouble s32 = queue_6[0];
  const SWord32 s33 = ptr_6;
  const SDouble s34 = s0 - s6;
  const SDouble s35 = s10 - s14;
  const SDouble s36 = s34 * s35;
  const SDouble s37 = s18 - s22;
  const SDouble s38 = s26 - s30;
  const SDouble s39 = s37 * s38;
  const SDouble s40 = s36 + s39;
  const SDouble s41 = s40 /* thetaVert_part1.1 */;

  return s41;
}
