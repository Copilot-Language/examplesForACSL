/* File: "ext_ident_double_336_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "theta_dir_2" Extf_ident_double(label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_335));
*/
SDouble ext_ident_double_336_arg0(const SDouble ext_ident_double_335,
                                  const SDouble ext_ident_double_332,
                                  const SDouble ext_ident_double_313,
                                  const SDouble ext_ident_double_312,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_331,
                                  const SDouble ext_ident_double_321,
                                  const SBool ext_ident_bool_318,
                                  const SDouble ext_ident_double_317,
                                  const SDouble ext_ident_double_314,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_316,
                                  const SDouble ext_ident_double_315,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_320,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_319,
                                  const SDouble ext_ident_double_330, const SDouble ext_sqrt_329,
                                  const SDouble ext_ident_double_322,
                                  const SDouble ext_ident_double_323,
                                  const SDouble ext_ident_double_328,
                                  const SDouble ext_ident_double_325,
                                  const SDouble ext_ident_double_324,
                                  const SDouble ext_ident_double_327,
                                  const SDouble ext_ident_double_326,
                                  const SDouble ext_minimal_horizontal_separation,
                                  const SDouble ext_ident_double_334,
                                  const SDouble ext_ident_double_333)
{
  const SDouble s0 = ext_ident_double_335;
  const SDouble s1 = ext_ident_double_332;
  const SDouble s2 = ext_ident_double_313;
  const SDouble s3 = ext_ident_double_312;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = ext_intruder_position_x;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_position_y;
  const SDouble s9 = ext_intruder_position_y;
  const SDouble s10 = ext_ownship_velocity_y;
  const SDouble s11 = ext_intruder_velocity_y;
  const SDouble s12 = ext_ident_double_331;
  const SDouble s13 = ext_ident_double_321;
  const SBool   s14 = ext_ident_bool_318;
  const SDouble s15 = ext_ident_double_317;
  const SDouble s16 = ext_ident_double_314;
  const SDouble s17 = ext_ownship_position_z;
  const SDouble s18 = ext_intruder_position_z;
  const SDouble s19 = ext_ident_double_316;
  const SDouble s20 = ext_ident_double_315;
  const SDouble s21 = ext_minimal_vertical_separation;
  const SDouble s22 = ext_ident_double_320;
  const SDouble s23 = ext_direction_parameter_vertical;
  const SDouble s24 = ext_ident_double_319;
  const SDouble s25 = ext_ident_double_330;
  const SDouble s26 = ext_sqrt_329;
  const SDouble s27 = ext_ident_double_322;
  const SDouble s28 = ext_ident_double_323;
  const SDouble s29 = ext_ident_double_328;
  const SDouble s30 = ext_ident_double_325;
  const SDouble s31 = ext_ident_double_324;
  const SDouble s32 = ext_ident_double_327;
  const SDouble s33 = ext_ident_double_326;
  const SDouble s34 = ext_minimal_horizontal_separation;
  const SDouble s35 = ext_ident_double_334;
  const SDouble s36 = ext_ident_double_333;
  const SDouble s37 = s0 /* theta_dir_2 */;

  return s37;
}
