/* File: "ext_ident_double_277_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_267) * (ext_ident_double_276))));
*/
SDouble ext_ident_double_277_arg0(const SDouble ext_ident_double_267,
                                  const SBool ext_ident_bool_264,
                                  const SDouble ext_ident_double_263,
                                  const SDouble ext_ident_double_260,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_262,
                                  const SDouble ext_ident_double_261,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_266,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_265,
                                  const SDouble ext_ident_double_276, const SDouble ext_sqrt_275,
                                  const SDouble ext_ident_double_268,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_269,
                                  const SDouble ext_ident_double_274,
                                  const SDouble ext_ident_double_271,
                                  const SDouble ext_ident_double_270,
                                  const SDouble ext_ident_double_273,
                                  const SDouble ext_ident_double_272,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_267;
  const SBool   s1 = ext_ident_bool_264;
  const SDouble s2 = ext_ident_double_263;
  const SDouble s3 = ext_ident_double_260;
  const SDouble s4 = ext_ownship_position_z;
  const SDouble s5 = ext_intruder_position_z;
  const SDouble s6 = ext_ident_double_262;
  const SDouble s7 = ext_ident_double_261;
  const SDouble s8 = ext_minimal_vertical_separation;
  const SDouble s9 = ext_ident_double_266;
  const SDouble s10 = ext_direction_parameter_vertical;
  const SDouble s11 = ext_ident_double_265;
  const SDouble s12 = ext_ident_double_276;
  const SDouble s13 = ext_sqrt_275;
  const SDouble s14 = ext_ident_double_268;
  const SDouble s15 = ext_ownship_position_x;
  const SDouble s16 = ext_intruder_position_x;
  const SDouble s17 = ext_ownship_velocity_x;
  const SDouble s18 = ext_intruder_velocity_x;
  const SDouble s19 = ext_ownship_position_y;
  const SDouble s20 = ext_intruder_position_y;
  const SDouble s21 = ext_ownship_velocity_y;
  const SDouble s22 = ext_intruder_velocity_y;
  const SDouble s23 = ext_ident_double_269;
  const SDouble s24 = ext_ident_double_274;
  const SDouble s25 = ext_ident_double_271;
  const SDouble s26 = ext_ident_double_270;
  const SDouble s27 = ext_ident_double_273;
  const SDouble s28 = ext_ident_double_272;
  const SDouble s29 = ext_minimal_horizontal_separation;
  const SDouble s30 = s0 * s12;
  const SDouble s31 = s30 /* thetaVert_part1.2 */;

  return s31;
}
