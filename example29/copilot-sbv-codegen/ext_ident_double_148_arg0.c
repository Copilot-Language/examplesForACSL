/* File: "ext_ident_double_148_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_145) / (ext_ident_double_147))));
*/
SDouble ext_ident_double_148_arg0(const SDouble ext_ident_double_145,
                                  const SDouble ext_ident_double_126,
                                  const SDouble ext_ident_double_125,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_144,
                                  const SDouble ext_ident_double_134,
                                  const SBool ext_ident_bool_131,
                                  const SDouble ext_ident_double_130,
                                  const SDouble ext_ident_double_127,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_129,
                                  const SDouble ext_ident_double_128,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_133,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_132,
                                  const SDouble ext_ident_double_143, const SDouble ext_sqrt_142,
                                  const SDouble ext_ident_double_135,
                                  const SDouble ext_ident_double_136,
                                  const SDouble ext_ident_double_141,
                                  const SDouble ext_ident_double_138,
                                  const SDouble ext_ident_double_137,
                                  const SDouble ext_ident_double_140,
                                  const SDouble ext_ident_double_139,
                                  const SDouble ext_minimal_horizontal_separation,
                                  const SDouble ext_ident_double_147,
                                  const SDouble ext_ident_double_146)
{
  const SDouble s0 = ext_ident_double_145;
  const SDouble s1 = ext_ident_double_126;
  const SDouble s2 = ext_ident_double_125;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = ext_intruder_position_x;
  const SDouble s5 = ext_ownship_velocity_x;
  const SDouble s6 = ext_intruder_velocity_x;
  const SDouble s7 = ext_ownship_position_y;
  const SDouble s8 = ext_intruder_position_y;
  const SDouble s9 = ext_ownship_velocity_y;
  const SDouble s10 = ext_intruder_velocity_y;
  const SDouble s11 = ext_ident_double_144;
  const SDouble s12 = ext_ident_double_134;
  const SBool   s13 = ext_ident_bool_131;
  const SDouble s14 = ext_ident_double_130;
  const SDouble s15 = ext_ident_double_127;
  const SDouble s16 = ext_ownship_position_z;
  const SDouble s17 = ext_intruder_position_z;
  const SDouble s18 = ext_ident_double_129;
  const SDouble s19 = ext_ident_double_128;
  const SDouble s20 = ext_minimal_vertical_separation;
  const SDouble s21 = ext_ident_double_133;
  const SDouble s22 = ext_direction_parameter_vertical;
  const SDouble s23 = ext_ident_double_132;
  const SDouble s24 = ext_ident_double_143;
  const SDouble s25 = ext_sqrt_142;
  const SDouble s26 = ext_ident_double_135;
  const SDouble s27 = ext_ident_double_136;
  const SDouble s28 = ext_ident_double_141;
  const SDouble s29 = ext_ident_double_138;
  const SDouble s30 = ext_ident_double_137;
  const SDouble s31 = ext_ident_double_140;
  const SDouble s32 = ext_ident_double_139;
  const SDouble s33 = ext_minimal_horizontal_separation;
  const SDouble s34 = ext_ident_double_147;
  const SDouble s35 = ext_ident_double_146;
  const SDouble s36 = s0 / s34;
  const SDouble s37 = s36 /* thetaVert */;

  return s37;
}