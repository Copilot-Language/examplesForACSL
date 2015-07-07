/* File: "ext_ident_double_189_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))));
*/
SDouble ext_ident_double_189_arg0(const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y)
{
  const SDouble s0 = ext_ownship_velocity_x;
  const SDouble s1 = ext_intruder_velocity_x;
  const SDouble s2 = ext_ownship_velocity_y;
  const SDouble s3 = ext_intruder_velocity_y;
  const SDouble s4 = s0 - s1;
  const SDouble s5 = s4 * s4;
  const SDouble s6 = s2 - s3;
  const SDouble s7 = s6 * s6;
  const SDouble s8 = s5 + s7;
  const SDouble s9 = s8 /* normsq2dim */;

  return s9;
}
