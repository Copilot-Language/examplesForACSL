/* File: "ext_ident_bool_67_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_66) >= (ext_minimal_vertical_separation))));
*/
SBool ext_ident_bool_67_arg0(const SDouble ext_ident_double_66,
                             const SDouble ext_ident_double_63,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SDouble ext_ident_double_65,
                             const SDouble ext_ident_double_64,
                             const SDouble ext_minimal_vertical_separation)
{
  const SDouble s0 = ext_ident_double_66;
  const SDouble s1 = ext_ident_double_63;
  const SDouble s2 = ext_ownship_position_z;
  const SDouble s3 = ext_intruder_position_z;
  const SDouble s4 = ext_ident_double_65;
  const SDouble s5 = ext_ident_double_64;
  const SDouble s6 = ext_minimal_vertical_separation;
  const SBool   s7 = s0 >= s6;
  const SBool   s8 = s7 /* dirVert_part1 */;

  return s8;
}
