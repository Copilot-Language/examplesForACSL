/* File: "ext_ident_double_299_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionConflict_part2.3.1" ((Ext_ownship_position_x - Ext_intruder_position_x) + (Extf_ident_double(label "theta_dir_2" Extf_ident_double(label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ownship_position_x) - (ext_intruder_position_x))) + (((ext_ident_double_298) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))))));
*/
SDouble ext_ident_double_299_arg0(const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ident_double_298,
                                  const SDouble ext_ident_double_297,
                                  const SDouble ext_ident_double_294,
                                  const SDouble ext_ident_double_275,
                                  const SDouble ext_ident_double_274,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_293,
                                  const SDouble ext_ident_double_283,
                                  const SBool ext_ident_bool_280,
                                  const SDouble ext_ident_double_279,
                                  const SDouble ext_ident_double_276,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_278,
                                  const SDouble ext_ident_double_277,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_282,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_281,
                                  const SDouble ext_ident_double_292, const SDouble ext_sqrt_291,
                                  const SDouble ext_ident_double_284,
                                  const SDouble ext_ident_double_285,
                                  const SDouble ext_ident_double_290,
                                  const SDouble ext_ident_double_287,
                                  const SDouble ext_ident_double_286,
                                  const SDouble ext_ident_double_289,
                                  const SDouble ext_ident_double_288,
                                  const SDouble ext_minimal_horizontal_separation,
                                  const SDouble ext_ident_double_296,
                                  const SDouble ext_ident_double_295)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ident_double_298;
  const SDouble s3 = ext_ident_double_297;
  const SDouble s4 = ext_ident_double_294;
  const SDouble s5 = ext_ident_double_275;
  const SDouble s6 = ext_ident_double_274;
  const SDouble s7 = ext_ownship_velocity_x;
  const SDouble s8 = ext_intruder_velocity_x;
  const SDouble s9 = ext_ownship_position_y;
  const SDouble s10 = ext_intruder_position_y;
  const SDouble s11 = ext_ownship_velocity_y;
  const SDouble s12 = ext_intruder_velocity_y;
  const SDouble s13 = ext_ident_double_293;
  const SDouble s14 = ext_ident_double_283;
  const SBool   s15 = ext_ident_bool_280;
  const SDouble s16 = ext_ident_double_279;
  const SDouble s17 = ext_ident_double_276;
  const SDouble s18 = ext_ownship_position_z;
  const SDouble s19 = ext_intruder_position_z;
  const SDouble s20 = ext_ident_double_278;
  const SDouble s21 = ext_ident_double_277;
  const SDouble s22 = ext_minimal_vertical_separation;
  const SDouble s23 = ext_ident_double_282;
  const SDouble s24 = ext_direction_parameter_vertical;
  const SDouble s25 = ext_ident_double_281;
  const SDouble s26 = ext_ident_double_292;
  const SDouble s27 = ext_sqrt_291;
  const SDouble s28 = ext_ident_double_284;
  const SDouble s29 = ext_ident_double_285;
  const SDouble s30 = ext_ident_double_290;
  const SDouble s31 = ext_ident_double_287;
  const SDouble s32 = ext_ident_double_286;
  const SDouble s33 = ext_ident_double_289;
  const SDouble s34 = ext_ident_double_288;
  const SDouble s35 = ext_minimal_horizontal_separation;
  const SDouble s36 = ext_ident_double_296;
  const SDouble s37 = ext_ident_double_295;
  const SDouble s38 = s0 - s1;
  const SDouble s39 = s7 - s8;
  const SDouble s40 = s2 * s39;
  const SDouble s41 = s38 + s40;
  const SDouble s42 = s41 /* verticalCriterionConflict_part2.3.1 */;

  return s42;
}
