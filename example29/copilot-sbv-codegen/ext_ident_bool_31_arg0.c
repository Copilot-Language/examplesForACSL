/* File: "ext_ident_bool_31_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionConflict_part1.3" ((Ext_direction_parameter_vertical * (Ext_ownship_position_z - Ext_intruder_position_z)) >= Ext_minimal_vertical_separation)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_direction_parameter_vertical) * (((ext_ownship_position_z) - (ext_intruder_position_z))))) >= (ext_minimal_vertical_separation))));
*/
SBool ext_ident_bool_31_arg0(const SDouble ext_direction_parameter_vertical,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SDouble ext_minimal_vertical_separation)
{
  const SDouble s0 = ext_direction_parameter_vertical;
  const SDouble s1 = ext_ownship_position_z;
  const SDouble s2 = ext_intruder_position_z;
  const SDouble s3 = ext_minimal_vertical_separation;
  const SDouble s4 = s1 - s2;
  const SDouble s5 = s0 * s4;
  const SBool   s6 = s5 >= s3;
  const SBool   s7 = s6 /* verticalCriterionConflict_part1.3 */;

  return s7;
}
