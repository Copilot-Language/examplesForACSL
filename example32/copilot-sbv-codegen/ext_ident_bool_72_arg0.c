/* File: "ext_ident_bool_72_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "zCriterion_part2.1" ((Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) < 0.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_70) - (ext_ident_double_71))) < (0.0))));
*/
SBool ext_ident_bool_72_arg0(const SDouble ext_ident_double_70,
                             const SBool *queue_0, const SWord32 ptr_0,
                             const SDouble ext_ownship_velocity_z, const SDouble *queue_12,
                             const SWord32 ptr_12, const SDouble ext_ident_double_71,
                             const SDouble ext_intruder_velocity_z, const SDouble *queue_11,
                             const SWord32 ptr_11)
{
  const SDouble s0 = ext_ident_double_70;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_velocity_z;
  const SDouble s4 = queue_12[0];
  const SWord32 s5 = ptr_12;
  const SDouble s6 = ext_ident_double_71;
  const SDouble s7 = ext_intruder_velocity_z;
  const SDouble s8 = queue_11[0];
  const SWord32 s9 = ptr_11;
  const SDouble s10 = s0 - s6;
  const SBool   s12 = s10 < 0.0;
  const SBool   s13 = s12 /* zCriterion_part2.1 */;

  return s13;
}
