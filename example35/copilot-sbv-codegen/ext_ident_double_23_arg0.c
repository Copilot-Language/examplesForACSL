/* File: "ext_ident_double_23_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "norm2dim" Extf_sqrt(Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" ((((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x))) * ((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)))) + (((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * ((Ext_ownship_position_y - Ext_intruder_position_y) + (Extf_ident_double(label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_sqrt_22));
*/
SDouble ext_ident_double_23_arg0(const SDouble ext_sqrt_22,
                                 const SDouble ext_ident_double_21,
                                 const SDouble ext_ident_double_20,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ident_double_7,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y,
                                 const SDouble ext_ident_double_4,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y,
                                 const SDouble ext_ident_double_6, const SDouble ext_ident_double_5,
                                 const SDouble ext_ident_double_11,
                                 const SDouble ext_ident_double_8,
                                 const SDouble ext_ident_double_10,
                                 const SDouble ext_ident_double_9,
                                 const SDouble ext_ident_double_15,
                                 const SDouble ext_ident_double_12,
                                 const SDouble ext_ident_double_14,
                                 const SDouble ext_ident_double_13,
                                 const SDouble ext_ident_double_19,
                                 const SDouble ext_ident_double_16,
                                 const SDouble ext_ident_double_18,
                                 const SDouble ext_ident_double_17)
{
  const SDouble s0 = ext_sqrt_22;
  const SDouble s1 = ext_ident_double_21;
  const SDouble s2 = ext_ident_double_20;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = ext_intruder_position_x;
  const SDouble s5 = ext_ident_double_7;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_4;
  const SDouble s11 = ext_ownship_position_y;
  const SDouble s12 = ext_intruder_position_y;
  const SDouble s13 = ext_ident_double_6;
  const SDouble s14 = ext_ident_double_5;
  const SDouble s15 = ext_ident_double_11;
  const SDouble s16 = ext_ident_double_8;
  const SDouble s17 = ext_ident_double_10;
  const SDouble s18 = ext_ident_double_9;
  const SDouble s19 = ext_ident_double_15;
  const SDouble s20 = ext_ident_double_12;
  const SDouble s21 = ext_ident_double_14;
  const SDouble s22 = ext_ident_double_13;
  const SDouble s23 = ext_ident_double_19;
  const SDouble s24 = ext_ident_double_16;
  const SDouble s25 = ext_ident_double_18;
  const SDouble s26 = ext_ident_double_17;
  const SDouble s27 = s0 /* norm2dim */;

  return s27;
}