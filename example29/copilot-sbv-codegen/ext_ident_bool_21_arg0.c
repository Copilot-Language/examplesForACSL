/* File: "ext_ident_bool_21_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) > 0.0)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_19) || (ext_ident_bool_20))));
*/
SBool ext_ident_bool_21_arg0(const SBool ext_ident_bool_19,
                             const SDouble ext_ownship_velocity_z,
                             const SDouble ext_intruder_velocity_z,
                             const SBool ext_ident_bool_20)
{
  const SBool   s0 = ext_ident_bool_19;
  const SDouble s1 = ext_ownship_velocity_z;
  const SDouble s2 = ext_intruder_velocity_z;
  const SBool   s3 = ext_ident_bool_20;
  const SBool   s4 = s0 || s3;
  const SBool   s5 = s4 /* zCriterion_part2.1 */;

  return s5;
}
