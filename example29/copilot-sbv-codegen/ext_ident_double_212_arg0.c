/* File: "ext_ident_double_212_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) * Extf_ident_double(label "thetaVert_part2.2" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_sqrt_211));
*/
SDouble ext_ident_double_212_arg0(const SDouble ext_sqrt_211,
                                  const SDouble ext_ident_double_204,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_205,
                                  const SDouble ext_ident_double_210,
                                  const SDouble ext_ident_double_207,
                                  const SDouble ext_ident_double_206,
                                  const SDouble ext_ident_double_209,
                                  const SDouble ext_ident_double_208,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_sqrt_211;
  const SDouble s1 = ext_ident_double_204;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_intruder_velocity_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_205;
  const SDouble s11 = ext_ident_double_210;
  const SDouble s12 = ext_ident_double_207;
  const SDouble s13 = ext_ident_double_206;
  const SDouble s14 = ext_ident_double_209;
  const SDouble s15 = ext_ident_double_208;
  const SDouble s16 = ext_minimal_horizontal_separation;
  const SDouble s17 = s0 /* thetaVert_part2 */;

  return s17;
}
