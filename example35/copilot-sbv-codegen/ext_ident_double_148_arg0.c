/* File: "ext_ident_double_148_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_147));
*/
SDouble ext_ident_double_148_arg0(const SDouble ext_ident_double_147,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y)
{
  const SDouble s0 = ext_ident_double_147;
  const SDouble s1 = ext_ownship_velocity_x;
  const SDouble s2 = ext_intruder_velocity_x;
  const SDouble s3 = ext_ownship_velocity_y;
  const SDouble s4 = ext_intruder_velocity_y;
  const SDouble s5 = s0 /* normsq2dim */;

  return s5;
}
