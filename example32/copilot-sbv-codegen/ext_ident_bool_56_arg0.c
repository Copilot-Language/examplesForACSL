/* File: "ext_ident_bool_56_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "zCriterion_part1" (Extf_ident_bool(label "zCriterion_part1.1" ((Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) < 0.0)) || Extf_ident_bool(label "zCriterion_part1.2" ((Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) > 0.0)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_53) || (ext_ident_bool_55))));
*/
SBool ext_ident_bool_56_arg0(const SBool ext_ident_bool_53,
                             const SDouble ext_ownship_velocity_z,
                             const SDouble ext_ident_double_52, const SBool *queue_0,
                             const SWord32 ptr_0, const SDouble ext_intruder_velocity_z,
                             const SDouble *queue_11, const SWord32 ptr_11,
                             const SBool ext_ident_bool_55, const SDouble ext_ident_double_54)
{
  const SBool   s0 = ext_ident_bool_53;
  const SDouble s1 = ext_ownship_velocity_z;
  const SDouble s2 = ext_ident_double_52;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_intruder_velocity_z;
  const SDouble s6 = queue_11[0];
  const SWord32 s7 = ptr_11;
  const SBool   s8 = ext_ident_bool_55;
  const SDouble s9 = ext_ident_double_54;
  const SBool   s10 = s0 || s8;
  const SBool   s11 = s10 /* zCriterion_part1 */;

  return s11;
}