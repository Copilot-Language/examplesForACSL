/* File: "trigger_guard_alert_horizontal_criterion_loss_of_separation_violation.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*ACSL to write
 not (((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_planned_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_planned_velocity_y - Ext_intruder_velocity_y))) >= (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) && ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_planned_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_planned_velocity_y - Ext_intruder_velocity_y))) > ((Extf_sqrt((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) / Ext_maximum_time_for_horizontal_violation) * (Ext_minimal_horizontal_separation - Extf_sqrt((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y))))))))
*/
/*@
 assigns \nothing;
 ensures \result == (! ((((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))))))) >= (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) && (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))))))) > (((((ext_sqrt_1) / (ext_maximum_time_for_horizontal_violation))) * (((ext_minimal_horizontal_separation) - (ext_sqrt_1)))))))))));
*/
SBool trigger_guard_alert_horizontal_criterion_loss_of_separation_violation(const SDouble ext_ownship_position_x,
                                                                            const SDouble ext_intruder_position_x,
                                                                            const SDouble ext_ownship_planned_velocity_x,
                                                                            const SDouble ext_intruder_velocity_x,
                                                                            const SDouble ext_ownship_position_y,
                                                                            const SDouble ext_intruder_position_y,
                                                                            const SDouble ext_ownship_planned_velocity_y,
                                                                            const SDouble ext_intruder_velocity_y,
                                                                            const SDouble ext_ownship_velocity_x,
                                                                            const SDouble ext_ownship_velocity_y,
                                                                            const SDouble ext_sqrt_0,
                                                                            const SDouble ext_maximum_time_for_horizontal_violation,
                                                                            const SDouble ext_minimal_horizontal_separation,
                                                                            const SDouble ext_sqrt_1)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_planned_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_planned_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = ext_ownship_velocity_x;
  const SDouble s9 = ext_ownship_velocity_y;
  const SDouble s10 = ext_sqrt_0;
  const SDouble s11 = ext_maximum_time_for_horizontal_violation;
  const SDouble s12 = ext_minimal_horizontal_separation;
  const SDouble s13 = ext_sqrt_1;
  const SDouble s14 = s0 - s1;
  const SDouble s15 = s2 - s3;
  const SDouble s16 = s14 * s15;
  const SDouble s17 = s4 - s5;
  const SDouble s18 = s6 - s7;
  const SDouble s19 = s17 * s18;
  const SDouble s20 = s16 + s19;
  const SDouble s21 = s8 - s3;
  const SDouble s22 = s14 * s21;
  const SDouble s23 = s9 - s7;
  const SDouble s24 = s17 * s23;
  const SDouble s25 = s22 + s24;
  const SBool   s26 = s20 >= s25;
  const SDouble s27 = s13 / s11;
  const SDouble s28 = s12 - s13;
  const SDouble s29 = s27 * s28;
  const SBool   s30 = s20 > s29;
  const SBool   s31 = s26 && s30;
  const SBool   s32 = !s31;

  return s32;
}
