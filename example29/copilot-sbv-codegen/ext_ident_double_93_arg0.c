/* File: "ext_ident_double_93_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_74) + (ext_ident_double_92))));
*/
SDouble ext_ident_double_93_arg0(const SDouble ext_ident_double_74,
                                 const SDouble ext_ident_double_73,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y,
                                 const SDouble ext_ident_double_92,
                                 const SDouble ext_ident_double_82, const SBool ext_ident_bool_79,
                                 const SDouble ext_ident_double_78,
                                 const SDouble ext_ident_double_75,
                                 const SDouble ext_ownship_position_z,
                                 const SDouble ext_intruder_position_z,
                                 const SDouble ext_ident_double_77,
                                 const SDouble ext_ident_double_76,
                                 const SDouble ext_minimal_vertical_separation,
                                 const SDouble ext_ident_double_81,
                                 const SDouble ext_direction_parameter_vertical,
                                 const SDouble ext_ident_double_80,
                                 const SDouble ext_ident_double_91, const SDouble ext_sqrt_90,
                                 const SDouble ext_ident_double_83,
                                 const SDouble ext_ident_double_84,
                                 const SDouble ext_ident_double_89,
                                 const SDouble ext_ident_double_86,
                                 const SDouble ext_ident_double_85,
                                 const SDouble ext_ident_double_88,
                                 const SDouble ext_ident_double_87,
                                 const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_74;
  const SDouble s1 = ext_ident_double_73;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_intruder_velocity_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_92;
  const SDouble s11 = ext_ident_double_82;
  const SBool   s12 = ext_ident_bool_79;
  const SDouble s13 = ext_ident_double_78;
  const SDouble s14 = ext_ident_double_75;
  const SDouble s15 = ext_ownship_position_z;
  const SDouble s16 = ext_intruder_position_z;
  const SDouble s17 = ext_ident_double_77;
  const SDouble s18 = ext_ident_double_76;
  const SDouble s19 = ext_minimal_vertical_separation;
  const SDouble s20 = ext_ident_double_81;
  const SDouble s21 = ext_direction_parameter_vertical;
  const SDouble s22 = ext_ident_double_80;
  const SDouble s23 = ext_ident_double_91;
  const SDouble s24 = ext_sqrt_90;
  const SDouble s25 = ext_ident_double_83;
  const SDouble s26 = ext_ident_double_84;
  const SDouble s27 = ext_ident_double_89;
  const SDouble s28 = ext_ident_double_86;
  const SDouble s29 = ext_ident_double_85;
  const SDouble s30 = ext_ident_double_88;
  const SDouble s31 = ext_ident_double_87;
  const SDouble s32 = ext_minimal_horizontal_separation;
  const SDouble s33 = s0 + s10;
  const SDouble s34 = s33 /* thetaVert_dividend */;

  return s34;
}
