/* File: "ext_ident_double_505_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))))) else -1.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((( (ext_ident_bool_500) ? (ext_ident_double_504) : (-1.0))));
*/
SDouble ext_ident_double_505_arg0(const SBool ext_ident_bool_500,
                                  const SDouble ext_ident_double_499,
                                  const SDouble ext_ident_double_494,
                                  const SDouble ext_ident_double_492, const SBool *queue_0,
                                  const SWord32 ptr_0, const SDouble ext_ownship_position_z,
                                  const SDouble *queue_9, const SWord32 ptr_9,
                                  const SDouble ext_ident_double_493,
                                  const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                  const SWord32 ptr_10, const SDouble ext_ident_double_498,
                                  const SDouble ext_ident_double_497,
                                  const SDouble ext_ident_double_495,
                                  const SDouble ext_ident_double_496,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_504,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_503,
                                  const SDouble ext_ident_double_501,
                                  const SDouble ext_ident_double_502)
{
  const SBool   s0 = ext_ident_bool_500;
  const SDouble s1 = ext_ident_double_499;
  const SDouble s2 = ext_ident_double_494;
  const SDouble s3 = ext_ident_double_492;
  const SBool   s4 = queue_0[0];
  const SWord32 s5 = ptr_0;
  const SDouble s6 = ext_ownship_position_z;
  const SDouble s7 = queue_9[0];
  const SWord32 s8 = ptr_9;
  const SDouble s9 = ext_ident_double_493;
  const SDouble s10 = ext_intruder_position_z;
  const SDouble s11 = queue_10[0];
  const SWord32 s12 = ptr_10;
  const SDouble s13 = ext_ident_double_498;
  const SDouble s14 = ext_ident_double_497;
  const SDouble s15 = ext_ident_double_495;
  const SDouble s16 = ext_ident_double_496;
  const SDouble s17 = ext_minimal_vertical_separation;
  const SDouble s18 = ext_ident_double_504;
  const SDouble s19 = ext_direction_parameter_vertical;
  const SDouble s20 = ext_ident_double_503;
  const SDouble s21 = ext_ident_double_501;
  const SDouble s22 = ext_ident_double_502;
  const SDouble s24 = s0 ? s18 : -1.0;
  const SDouble s25 = s24 /* dirVert */;

  return s25;
}
