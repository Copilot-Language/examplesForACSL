/* File: "ext_ident_double_177_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((( (ext_ident_bool_174) ? (ext_ident_double_176) : (-1.0))));
*/
SDouble ext_ident_double_177_arg0(const SBool ext_ident_bool_174,
                                  const SDouble ext_ident_double_173,
                                  const SDouble ext_ident_double_170,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_172,
                                  const SDouble ext_ident_double_171,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_176,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_175)
{
  const SBool   s0 = ext_ident_bool_174;
  const SDouble s1 = ext_ident_double_173;
  const SDouble s2 = ext_ident_double_170;
  const SDouble s3 = ext_ownship_position_z;
  const SDouble s4 = ext_intruder_position_z;
  const SDouble s5 = ext_ident_double_172;
  const SDouble s6 = ext_ident_double_171;
  const SDouble s7 = ext_minimal_vertical_separation;
  const SDouble s8 = ext_ident_double_176;
  const SDouble s9 = ext_direction_parameter_vertical;
  const SDouble s10 = ext_ident_double_175;
  const SDouble s12 = s0 ? s8 : -1.0;
  const SDouble s13 = s12 /* dirVert */;

  return s13;
}
