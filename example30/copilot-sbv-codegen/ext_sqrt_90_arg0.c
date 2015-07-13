/* File: "ext_sqrt_90_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 ((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))))))
*/
/*@
 assigns \nothing;
 ensures \result == (((((ext_ident_double_83) * (ext_ident_double_84))) - (ext_ident_double_89)));
*/
SDouble ext_sqrt_90_arg0(const SDouble ext_ident_double_83,
                         const SDouble ext_ownship_position_x,
                         const SDouble ext_intruder_position_x,
                         const SDouble ext_ownship_velocity_x,
                         const SDouble ext_intruder_velocity_x,
                         const SDouble ext_ownship_position_y,
                         const SDouble ext_intruder_position_y,
                         const SDouble ext_ownship_velocity_y,
                         const SDouble ext_intruder_velocity_y,
                         const SDouble ext_ident_double_84,
                         const SDouble ext_ident_double_89,
                         const SDouble ext_ident_double_86,
                         const SDouble ext_ident_double_85,
                         const SDouble ext_ident_double_88,
                         const SDouble ext_ident_double_87,
                         const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_83;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_velocity_x;
  const SDouble s4 = ext_intruder_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ident_double_84;
  const SDouble s10 = ext_ident_double_89;
  const SDouble s11 = ext_ident_double_86;
  const SDouble s12 = ext_ident_double_85;
  const SDouble s13 = ext_ident_double_88;
  const SDouble s14 = ext_ident_double_87;
  const SDouble s15 = ext_minimal_horizontal_separation;
  const SDouble s16 = s0 * s9;
  const SDouble s17 = s16 - s10;

  return s17;
}
