/* File: "ext_ident_double_111_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "theta_dir_3" Extf_ident_double(label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_110));
*/
SDouble ext_ident_double_111_arg0(const SDouble ext_ident_double_110,
                                  const SDouble ext_ident_double_107,
                                  const SDouble ext_ident_double_88,
                                  const SDouble ext_ident_double_87,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_106,
                                  const SDouble ext_ident_double_96, const SBool ext_ident_bool_93,
                                  const SDouble ext_ident_double_92,
                                  const SDouble ext_ident_double_89,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_91,
                                  const SDouble ext_ident_double_90,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_95,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_94,
                                  const SDouble ext_ident_double_105, const SDouble ext_sqrt_104,
                                  const SDouble ext_ident_double_97,
                                  const SDouble ext_ident_double_98,
                                  const SDouble ext_ident_double_103,
                                  const SDouble ext_ident_double_100,
                                  const SDouble ext_ident_double_99,
                                  const SDouble ext_ident_double_102,
                                  const SDouble ext_ident_double_101,
                                  const SDouble ext_minimal_horizontal_separation,
                                  const SDouble ext_ident_double_109,
                                  const SDouble ext_ident_double_108)
{
  const SDouble s0 = ext_ident_double_110;
  const SDouble s1 = ext_ident_double_107;
  const SDouble s2 = ext_ident_double_88;
  const SDouble s3 = ext_ident_double_87;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = ext_intruder_position_x;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_position_y;
  const SDouble s9 = ext_intruder_position_y;
  const SDouble s10 = ext_ownship_velocity_y;
  const SDouble s11 = ext_intruder_velocity_y;
  const SDouble s12 = ext_ident_double_106;
  const SDouble s13 = ext_ident_double_96;
  const SBool   s14 = ext_ident_bool_93;
  const SDouble s15 = ext_ident_double_92;
  const SDouble s16 = ext_ident_double_89;
  const SDouble s17 = ext_ownship_position_z;
  const SDouble s18 = ext_intruder_position_z;
  const SDouble s19 = ext_ident_double_91;
  const SDouble s20 = ext_ident_double_90;
  const SDouble s21 = ext_minimal_vertical_separation;
  const SDouble s22 = ext_ident_double_95;
  const SDouble s23 = ext_direction_parameter_vertical;
  const SDouble s24 = ext_ident_double_94;
  const SDouble s25 = ext_ident_double_105;
  const SDouble s26 = ext_sqrt_104;
  const SDouble s27 = ext_ident_double_97;
  const SDouble s28 = ext_ident_double_98;
  const SDouble s29 = ext_ident_double_103;
  const SDouble s30 = ext_ident_double_100;
  const SDouble s31 = ext_ident_double_99;
  const SDouble s32 = ext_ident_double_102;
  const SDouble s33 = ext_ident_double_101;
  const SDouble s34 = ext_minimal_horizontal_separation;
  const SDouble s35 = ext_ident_double_109;
  const SDouble s36 = ext_ident_double_108;
  const SDouble s37 = s0 /* theta_dir_3 */;

  return s37;
}
