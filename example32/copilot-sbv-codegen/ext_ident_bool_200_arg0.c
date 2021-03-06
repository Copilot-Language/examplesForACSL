/* File: "ext_ident_bool_200_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionConflict_part1.3" ((Ext_direction_parameter_vertical * (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) >= Ext_minimal_vertical_separation)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_direction_parameter_vertical) * (((ext_ident_double_198) - (ext_ident_double_199))))) >= (ext_minimal_vertical_separation))));
*/
SBool ext_ident_bool_200_arg0(const SDouble ext_direction_parameter_vertical,
                              const SDouble ext_ident_double_198, const SBool *queue_0,
                              const SWord32 ptr_0, const SDouble ext_ownship_position_z,
                              const SDouble *queue_9, const SWord32 ptr_9,
                              const SDouble ext_ident_double_199,
                              const SDouble ext_intruder_position_z, const SDouble *queue_10,
                              const SWord32 ptr_10,
                              const SDouble ext_minimal_vertical_separation)
{
  const SDouble s0 = ext_direction_parameter_vertical;
  const SDouble s1 = ext_ident_double_198;
  const SBool   s2 = queue_0[0];
  const SWord32 s3 = ptr_0;
  const SDouble s4 = ext_ownship_position_z;
  const SDouble s5 = queue_9[0];
  const SWord32 s6 = ptr_9;
  const SDouble s7 = ext_ident_double_199;
  const SDouble s8 = ext_intruder_position_z;
  const SDouble s9 = queue_10[0];
  const SWord32 s10 = ptr_10;
  const SDouble s11 = ext_minimal_vertical_separation;
  const SDouble s12 = s1 - s7;
  const SDouble s13 = s0 * s12;
  const SBool   s14 = s13 >= s11;
  const SBool   s15 = s14 /* verticalCriterionConflict_part1.3 */;

  return s15;
}
