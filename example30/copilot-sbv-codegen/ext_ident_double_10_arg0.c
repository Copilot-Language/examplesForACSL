/* File: "ext_ident_double_10_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionLoss_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) * Extf_ident_double(label "absolute_value_splitting" signum (Ext_ownship_position_z - Ext_intruder_position_z)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (ext_ident_double_9))));
*/
SDouble ext_ident_double_10_arg0(const SDouble ext_ownship_position_z,
                                 const SDouble ext_intruder_position_z,
                                 const SDouble ext_ident_double_9)
{
  const SDouble s0 = ext_ownship_position_z;
  const SDouble s1 = ext_intruder_position_z;
  const SDouble s2 = ext_ident_double_9;
  const SDouble s3 = s0 - s1;
  const SDouble s4 = s2 * s3;
  const SDouble s5 = s4 /* verticalCriterionLoss_part1.1 */;

  return s5;
}