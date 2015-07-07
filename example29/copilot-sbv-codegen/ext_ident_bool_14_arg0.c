/* File: "ext_ident_bool_14_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "vertical_los_criterion" (Ext_maximum_time_for_violation >= Extf_ident_double(label "ttez" (Extf_ident_double(label "ttez_dividend" ((Ext_minimal_vertical_separation * Extf_ident_double(label "ttez_part01" signum (Ext_ownship_velocity_z - Ext_intruder_velocity_z))) - Extf_ident_double(label "ttez_part02" (Ext_ownship_position_z - Ext_intruder_position_z)))) / Extf_ident_double(label "ttez_divisor" (Ext_ownship_velocity_z - Ext_intruder_velocity_z)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_maximum_time_for_violation) >= (ext_ident_double_13))));
*/
SBool ext_ident_bool_14_arg0(const SDouble ext_maximum_time_for_violation,
                             const SDouble ext_ident_double_13,
                             const SDouble ext_ident_double_11,
                             const SDouble ext_minimal_vertical_separation,
                             const SDouble ext_ident_double_9,
                             const SDouble ext_ownship_velocity_z,
                             const SDouble ext_intruder_velocity_z,
                             const SDouble ext_ident_double_10,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SDouble ext_ident_double_12)
{
  const SDouble s0 = ext_maximum_time_for_violation;
  const SDouble s1 = ext_ident_double_13;
  const SDouble s2 = ext_ident_double_11;
  const SDouble s3 = ext_minimal_vertical_separation;
  const SDouble s4 = ext_ident_double_9;
  const SDouble s5 = ext_ownship_velocity_z;
  const SDouble s6 = ext_intruder_velocity_z;
  const SDouble s7 = ext_ident_double_10;
  const SDouble s8 = ext_ownship_position_z;
  const SDouble s9 = ext_intruder_position_z;
  const SDouble s10 = ext_ident_double_12;
  const SBool   s11 = s0 >= s1;
  const SBool   s12 = s11 /* vertical_los_criterion */;

  return s12;
}