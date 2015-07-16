/* File: "ext_sqrt_36_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 Extf_ident_double(label "delta" (Extf_ident_double(label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - (Extf_ident_double(label "det2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y)))) * Extf_ident_double(label "det2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y)))))))
*/
/*@
 assigns \nothing;
 ensures \result == (ext_ident_double_35);
*/
SDouble ext_sqrt_36_arg0(const SDouble ext_ident_double_35,
                         const SDouble ext_ident_double_32,
                         const SDouble ext_ident_double_31,
                         const SDouble ext_ownship_velocity_x,
                         const SDouble ext_intruder_velocity_x,
                         const SDouble ext_ownship_velocity_y,
                         const SDouble ext_intruder_velocity_y,
                         const SDouble ext_ident_double_33,
                         const SDouble ext_ownship_position_x,
                         const SDouble ext_intruder_position_x,
                         const SDouble ext_ownship_position_y,
                         const SDouble ext_intruder_position_y,
                         const SDouble ext_ident_double_34)
{
  const SDouble s0 = ext_ident_double_35;
  const SDouble s1 = ext_ident_double_32;
  const SDouble s2 = ext_ident_double_31;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_velocity_y;
  const SDouble s6 = ext_intruder_velocity_y;
  const SDouble s7 = ext_ident_double_33;
  const SDouble s8 = ext_ownship_position_x;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = ext_ownship_position_y;
  const SDouble s11 = ext_intruder_position_y;
  const SDouble s12 = ext_ident_double_34;
  return s0;
}
