/* File: "ext_ident_double_11_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "ttez_dividend" ((Ext_minimal_vertical_separation * Extf_ident_double(label "ttez_part01" signum (Ext_ownship_velocity_z - Ext_intruder_velocity_z))) - Extf_ident_double(label "ttez_part02" (Ext_ownship_position_z - Ext_intruder_position_z)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_minimal_vertical_separation) * (ext_ident_double_9))) - (ext_ident_double_10))));
*/
SDouble ext_ident_double_11_arg0(const SDouble ext_minimal_vertical_separation,
                                 const SDouble ext_ident_double_9,
                                 const SDouble ext_ownship_velocity_z,
                                 const SDouble ext_intruder_velocity_z,
                                 const SDouble ext_ident_double_10,
                                 const SDouble ext_ownship_position_z,
                                 const SDouble ext_intruder_position_z)
{
  const SDouble s0 = ext_minimal_vertical_separation;
  const SDouble s1 = ext_ident_double_9;
  const SDouble s2 = ext_ownship_velocity_z;
  const SDouble s3 = ext_intruder_velocity_z;
  const SDouble s4 = ext_ident_double_10;
  const SDouble s5 = ext_ownship_position_z;
  const SDouble s6 = ext_intruder_position_z;
  const SDouble s7 = s0 * s1;
  const SDouble s8 = s7 - s4;
  const SDouble s9 = s8 /* ttez_dividend */;

  return s9;
}