/* File: "ext_ident_double_161_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "tcpa" (if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) / Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((( (((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) == (0.0))) && (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) == (0.0))))) ? (0.0) : (((((0.0) - (ext_ident_double_158))) / (ext_ident_double_160))))));
*/
SDouble ext_ident_double_161_arg0(const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_158,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ident_double_160,
                                  const SDouble ext_ident_double_159)
{
  const SDouble s0 = ext_ownship_velocity_x;
  const SDouble s1 = ext_intruder_velocity_x;
  const SDouble s2 = ext_ownship_velocity_y;
  const SDouble s3 = ext_intruder_velocity_y;
  const SDouble s4 = ext_ident_double_158;
  const SDouble s5 = ext_ownship_position_x;
  const SDouble s6 = ext_intruder_position_x;
  const SDouble s7 = ext_ownship_position_y;
  const SDouble s8 = ext_intruder_position_y;
  const SDouble s9 = ext_ident_double_160;
  const SDouble s10 = ext_ident_double_159;
  const SDouble s11 = s0 - s1;
  const SBool   s13 = s11 == 0.0;
  const SDouble s14 = s2 - s3;
  const SBool   s15 = 0.0 == s14;
  const SBool   s16 = s13 && s15;
  const SDouble s17 = 0.0 - s4;
  const SDouble s18 = s17 / s9;
  const SDouble s19 = s16 ? 0.0 : s18;
  const SDouble s20 = s19 /* tcpa */;

  return s20;
}
