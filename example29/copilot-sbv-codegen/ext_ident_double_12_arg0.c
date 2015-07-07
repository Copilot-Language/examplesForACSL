/* File: "ext_ident_double_12_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "ttez_divisor" (Ext_ownship_velocity_z - Ext_intruder_velocity_z)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))));
*/
SDouble ext_ident_double_12_arg0(const SDouble ext_ownship_velocity_z,
                                 const SDouble ext_intruder_velocity_z)
{
  const SDouble s0 = ext_ownship_velocity_z;
  const SDouble s1 = ext_intruder_velocity_z;
  const SDouble s2 = s0 - s1;
  const SDouble s3 = s2 /* ttez_divisor */;

  return s3;
}
