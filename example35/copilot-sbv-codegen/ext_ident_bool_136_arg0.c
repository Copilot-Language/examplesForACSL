/* File: "ext_ident_bool_136_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "horizontalWCV" ((Extf_ident_double(label "norm2dim" Extf_sqrt(Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y))))))) <= 1.0) || ((Extf_ident_double(label "norm2dim" Extf_sqrt(Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" ((((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x))) * ((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)))) + (((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * ((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))))))) <= 1.0) && ((0.0 <= Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))))))) && (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) <= 30.0))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_107) <= (1.0))) || (((((ext_ident_double_127) <= (1.0))) && (((((0.0) <= (ext_ident_double_131))) && (((ext_ident_double_135) <= (30.0))))))))));
*/
SBool ext_ident_bool_136_arg0(const SDouble ext_ident_double_107,
                              const SDouble ext_sqrt_106, const SDouble ext_ident_double_105,
                              const SDouble ext_ident_double_104,
                              const SDouble ext_ownship_position_x,
                              const SDouble ext_intruder_position_x,
                              const SDouble ext_ownship_position_y,
                              const SDouble ext_intruder_position_y,
                              const SDouble ext_ident_double_127, const SDouble ext_sqrt_126,
                              const SDouble ext_ident_double_125,
                              const SDouble ext_ident_double_124,
                              const SDouble ext_ident_double_111,
                              const SDouble ext_ownship_velocity_x,
                              const SDouble ext_intruder_velocity_x,
                              const SDouble ext_ownship_velocity_y,
                              const SDouble ext_intruder_velocity_y,
                              const SDouble ext_ident_double_108,
                              const SDouble ext_ident_double_110,
                              const SDouble ext_ident_double_109,
                              const SDouble ext_ident_double_115,
                              const SDouble ext_ident_double_112,
                              const SDouble ext_ident_double_114,
                              const SDouble ext_ident_double_113,
                              const SDouble ext_ident_double_119,
                              const SDouble ext_ident_double_116,
                              const SDouble ext_ident_double_118,
                              const SDouble ext_ident_double_117,
                              const SDouble ext_ident_double_123,
                              const SDouble ext_ident_double_120,
                              const SDouble ext_ident_double_122,
                              const SDouble ext_ident_double_121,
                              const SDouble ext_ident_double_131,
                              const SDouble ext_ident_double_128,
                              const SDouble ext_ident_double_130,
                              const SDouble ext_ident_double_129,
                              const SDouble ext_ident_double_135,
                              const SDouble ext_ident_double_132,
                              const SDouble ext_ident_double_134,
                              const SDouble ext_ident_double_133)
{
  const SDouble s0 = ext_ident_double_107;
  const SDouble s1 = ext_sqrt_106;
  const SDouble s2 = ext_ident_double_105;
  const SDouble s3 = ext_ident_double_104;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = ext_intruder_position_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ident_double_127;
  const SDouble s9 = ext_sqrt_126;
  const SDouble s10 = ext_ident_double_125;
  const SDouble s11 = ext_ident_double_124;
  const SDouble s12 = ext_ident_double_111;
  const SDouble s13 = ext_ownship_velocity_x;
  const SDouble s14 = ext_intruder_velocity_x;
  const SDouble s15 = ext_ownship_velocity_y;
  const SDouble s16 = ext_intruder_velocity_y;
  const SDouble s17 = ext_ident_double_108;
  const SDouble s18 = ext_ident_double_110;
  const SDouble s19 = ext_ident_double_109;
  const SDouble s20 = ext_ident_double_115;
  const SDouble s21 = ext_ident_double_112;
  const SDouble s22 = ext_ident_double_114;
  const SDouble s23 = ext_ident_double_113;
  const SDouble s24 = ext_ident_double_119;
  const SDouble s25 = ext_ident_double_116;
  const SDouble s26 = ext_ident_double_118;
  const SDouble s27 = ext_ident_double_117;
  const SDouble s28 = ext_ident_double_123;
  const SDouble s29 = ext_ident_double_120;
  const SDouble s30 = ext_ident_double_122;
  const SDouble s31 = ext_ident_double_121;
  const SDouble s32 = ext_ident_double_131;
  const SDouble s33 = ext_ident_double_128;
  const SDouble s34 = ext_ident_double_130;
  const SDouble s35 = ext_ident_double_129;
  const SDouble s36 = ext_ident_double_135;
  const SDouble s37 = ext_ident_double_132;
  const SDouble s38 = ext_ident_double_134;
  const SDouble s39 = ext_ident_double_133;
  const SBool   s41 = s0 <= 1.0;
  const SBool   s42 = s8 <= 1.0;
  const SBool   s44 = 0.0 <= s32;
  const SBool   s46 = s36 <= 30.0;
  const SBool   s47 = s44 && s46;
  const SBool   s48 = s42 && s47;
  const SBool   s49 = s41 || s48;
  const SBool   s50 = s49 /* horizontalWCV */;

  return s50;
}
