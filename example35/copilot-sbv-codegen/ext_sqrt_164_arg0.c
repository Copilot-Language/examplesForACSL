/* File: "ext_sqrt_164_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" ((((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x))) * ((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)))) + (((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * ((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))
*/
/*@
 assigns \nothing;
 ensures \result == (ext_ident_double_163);
*/
SDouble ext_sqrt_164_arg0(const SDouble ext_ident_double_163,
                          const SDouble ext_ident_double_162,
                          const SDouble ext_ownship_position_x,
                          const SDouble ext_intruder_position_x,
                          const SDouble ext_ident_double_149,
                          const SDouble ext_ownship_velocity_x,
                          const SDouble ext_intruder_velocity_x,
                          const SDouble ext_ownship_velocity_y,
                          const SDouble ext_intruder_velocity_y,
                          const SDouble ext_ident_double_146,
                          const SDouble ext_ownship_position_y,
                          const SDouble ext_intruder_position_y,
                          const SDouble ext_ident_double_148,
                          const SDouble ext_ident_double_147,
                          const SDouble ext_ident_double_153,
                          const SDouble ext_ident_double_150,
                          const SDouble ext_ident_double_152,
                          const SDouble ext_ident_double_151,
                          const SDouble ext_ident_double_157,
                          const SDouble ext_ident_double_154,
                          const SDouble ext_ident_double_156,
                          const SDouble ext_ident_double_155,
                          const SDouble ext_ident_double_161,
                          const SDouble ext_ident_double_158,
                          const SDouble ext_ident_double_160,
                          const SDouble ext_ident_double_159)
{
  const SDouble s0 = ext_ident_double_163;
  const SDouble s1 = ext_ident_double_162;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ident_double_149;
  const SDouble s5 = ext_ownship_velocity_x;
  const SDouble s6 = ext_intruder_velocity_x;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_146;
  const SDouble s10 = ext_ownship_position_y;
  const SDouble s11 = ext_intruder_position_y;
  const SDouble s12 = ext_ident_double_148;
  const SDouble s13 = ext_ident_double_147;
  const SDouble s14 = ext_ident_double_153;
  const SDouble s15 = ext_ident_double_150;
  const SDouble s16 = ext_ident_double_152;
  const SDouble s17 = ext_ident_double_151;
  const SDouble s18 = ext_ident_double_157;
  const SDouble s19 = ext_ident_double_154;
  const SDouble s20 = ext_ident_double_156;
  const SDouble s21 = ext_ident_double_155;
  const SDouble s22 = ext_ident_double_161;
  const SDouble s23 = ext_ident_double_158;
  const SDouble s24 = ext_ident_double_160;
  const SDouble s25 = ext_ident_double_159;
  return s0;
}
