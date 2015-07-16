/* File: "ext_ident_double_97_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "taumod" (if (Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) < 0.0) then ((1.0 - Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))))) / Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) else -1.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_93) < (0.0))) ? (((((1.0) - (ext_ident_double_95))) / (ext_ident_double_96))) : (-1.0))));
*/
SDouble ext_ident_double_97_arg0(const SDouble ext_ident_double_93,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y,
                                 const SDouble ext_ident_double_95,
                                 const SDouble ext_ident_double_94,
                                 const SDouble ext_ident_double_96)
{
  const SDouble s0 = ext_ident_double_93;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_95;
  const SDouble s10 = ext_ident_double_94;
  const SDouble s11 = ext_ident_double_96;
  const SBool   s13 = s0 < 0.0;
  const SDouble s15 = 1.0 - s9;
  const SDouble s16 = s15 / s11;
  const SDouble s18 = s13 ? s16 : -1.0;
  const SDouble s19 = s18 /* taumod */;

  return s19;
}
