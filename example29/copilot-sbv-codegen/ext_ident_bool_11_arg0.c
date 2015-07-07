/* File: "ext_ident_bool_11_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionLoss_part1" (Extf_ident_double(label "verticalCriterionLoss_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) * Extf_ident_double(label "absolute_value_splitting" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) < Ext_minimal_vertical_separation)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_10) < (ext_minimal_vertical_separation))));
*/
SBool ext_ident_bool_11_arg0(const SDouble ext_ident_double_10,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SDouble ext_ident_double_9,
                             const SDouble ext_minimal_vertical_separation)
{
  const SDouble s0 = ext_ident_double_10;
  const SDouble s1 = ext_ownship_position_z;
  const SDouble s2 = ext_intruder_position_z;
  const SDouble s3 = ext_ident_double_9;
  const SDouble s4 = ext_minimal_vertical_separation;
  const SBool   s5 = s0 < s4;
  const SBool   s6 = s5 /* verticalCriterionLoss_part1 */;

  return s6;
}
