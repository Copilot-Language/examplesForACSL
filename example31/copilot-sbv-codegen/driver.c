/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SBool tmp_0 = true;
static SDouble tmp_1 = 0.0;
static SDouble tmp_2 = 0.0;
static SDouble tmp_3 = 0.0;
static SDouble tmp_4 = 0.0;
static SDouble tmp_5 = 0.0;
static SDouble tmp_6 = 0.0;
static SDouble tmp_7 = 0.0;
static SDouble tmp_8 = 0.0;
static SDouble tmp_9 = 0.0;
static SDouble tmp_10 = 0.0;
static SDouble tmp_11 = 0.0;
static SDouble tmp_12 = 0.0;
static SBool queue_0[1] = { true };
static SDouble queue_1[1] = { 0.0 };
static SDouble queue_2[1] = { 0.0 };
static SDouble queue_3[1] = { 0.0 };
static SDouble queue_4[1] = { 0.0 };
static SDouble queue_5[1] = { 0.0 };
static SDouble queue_6[1] = { 0.0 };
static SDouble queue_7[1] = { 0.0 };
static SDouble queue_8[1] = { 0.0 };
static SDouble queue_9[1] = { 0.0 };
static SDouble queue_10[1] = { 0.0 };
static SDouble queue_11[1] = { 0.0 };
static SDouble queue_12[1] = { 0.0 };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord32 ptr_3 = 0;
static SWord32 ptr_4 = 0;
static SWord32 ptr_5 = 0;
static SWord32 ptr_6 = 0;
static SWord32 ptr_7 = 0;
static SWord32 ptr_8 = 0;
static SWord32 ptr_9 = 0;
static SWord32 ptr_10 = 0;
static SWord32 ptr_11 = 0;
static SWord32 ptr_12 = 0;
static SDouble ext_direction_parameter_horizontal = 0;
static SDouble ext_direction_parameter_vertical = 0;
static SDouble ext_intruder_position_x = 0;
static SDouble ext_intruder_position_y = 0;
static SDouble ext_intruder_position_z = 0;
static SDouble ext_intruder_velocity_x = 0;
static SDouble ext_intruder_velocity_y = 0;
static SDouble ext_intruder_velocity_z = 0;
static SDouble ext_maximum_time_for_violation = 0;
static SDouble ext_minimal_horizontal_separation = 0;
static SDouble ext_minimal_vertical_separation = 0;
static SDouble ext_ownship_position_x = 0;
static SDouble ext_ownship_position_y = 0;
static SDouble ext_ownship_position_z = 0;
static SDouble ext_ownship_velocity_x = 0;
static SDouble ext_ownship_velocity_y = 0;
static SDouble ext_ownship_velocity_z = 0;
static SDouble ext_sqrt_0 = 0;
static SDouble ext_sqrt_1 = 0;
static SDouble ext_ident_double_2 = 0;
static SDouble ext_sqrt_3 = 0;
static SDouble ext_ident_double_4 = 0;
static SDouble ext_sqrt_5 = 0;
static SDouble ext_ident_double_6 = 0;
static SDouble ext_sqrt_7 = 0;
static SDouble ext_ident_double_8 = 0;
static SDouble ext_sqrt_9 = 0;
static SDouble ext_ident_double_10 = 0;
static SDouble ext_sqrt_11 = 0;
static SDouble ext_ident_double_12 = 0;
static SDouble ext_sqrt_13 = 0;
static SDouble ext_ident_double_14 = 0;
static SDouble ext_sqrt_15 = 0;
static SDouble ext_ident_double_16 = 0;
static SDouble ext_sqrt_17 = 0;
static SDouble ext_ident_double_18 = 0;
static SDouble ext_sqrt_19 = 0;
static SDouble ext_ident_double_20 = 0;
static SDouble ext_sqrt_21 = 0;
static SDouble ext_ident_double_22 = 0;
static SDouble ext_sqrt_23 = 0;
static SDouble ext_ident_double_24 = 0;
static SDouble ext_sqrt_25 = 0;
static SDouble ext_ident_double_26 = 0;
static SDouble ext_sqrt_27 = 0;
static SDouble ext_ident_double_28 = 0;
static SDouble ext_sqrt_29 = 0;
static SDouble ext_sqrt_30 = 0;

void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5));
  SDouble tmp_ext_ident_double_2 = ident_double(ext_ident_double_2_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_3 = sqrt(ext_sqrt_3_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_4 = ident_double(ext_ident_double_4_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_5 = sqrt(ext_sqrt_5_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_6 = ident_double(ext_ident_double_6_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_7 = sqrt(ext_sqrt_7_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_8 = ident_double(ext_ident_double_8_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_9 = sqrt(ext_sqrt_9_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_10 = ident_double(ext_ident_double_10_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_11 = sqrt(ext_sqrt_11_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_12 = ident_double(ext_ident_double_12_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_13 = sqrt(ext_sqrt_13_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_14 = ident_double(ext_ident_double_14_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_15 = sqrt(ext_sqrt_15_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_16 = ident_double(ext_ident_double_16_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_17 = sqrt(ext_sqrt_17_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_18 = ident_double(ext_ident_double_18_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_19 = sqrt(ext_sqrt_19_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_20 = ident_double(ext_ident_double_20_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_21 = sqrt(ext_sqrt_21_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_22 = ident_double(ext_ident_double_22_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_23 = sqrt(ext_sqrt_23_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_24 = ident_double(ext_ident_double_24_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_25 = sqrt(ext_sqrt_25_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_26 = ident_double(ext_ident_double_26_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_27 = sqrt(ext_sqrt_27_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_28 = ident_double(ext_ident_double_28_arg0(queue_0, ptr_0, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10));
  SDouble tmp_ext_sqrt_29 = sqrt(ext_sqrt_29_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, queue_7, ptr_7, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, queue_8, ptr_8, ext_intruder_velocity_y, queue_6, ptr_6, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_30 = sqrt(ext_sqrt_30_arg0(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_minimal_horizontal_separation));
  ext_direction_parameter_horizontal = direction_parameter_horizontal;
  ext_direction_parameter_vertical = direction_parameter_vertical;
  ext_intruder_position_x = intruder_position_x;
  ext_intruder_position_y = intruder_position_y;
  ext_intruder_position_z = intruder_position_z;
  ext_intruder_velocity_x = intruder_velocity_x;
  ext_intruder_velocity_y = intruder_velocity_y;
  ext_intruder_velocity_z = intruder_velocity_z;
  ext_maximum_time_for_violation = maximum_time_for_violation;
  ext_minimal_horizontal_separation = minimal_horizontal_separation;
  ext_minimal_vertical_separation = minimal_vertical_separation;
  ext_ownship_position_x = ownship_position_x;
  ext_ownship_position_y = ownship_position_y;
  ext_ownship_position_z = ownship_position_z;
  ext_ownship_velocity_x = ownship_velocity_x;
  ext_ownship_velocity_y = ownship_velocity_y;
  ext_ownship_velocity_z = ownship_velocity_z;
  ext_sqrt_0 = tmp_ext_sqrt_0;
  ext_sqrt_1 = tmp_ext_sqrt_1;
  ext_ident_double_2 = tmp_ext_ident_double_2;
  ext_sqrt_3 = tmp_ext_sqrt_3;
  ext_ident_double_4 = tmp_ext_ident_double_4;
  ext_sqrt_5 = tmp_ext_sqrt_5;
  ext_ident_double_6 = tmp_ext_ident_double_6;
  ext_sqrt_7 = tmp_ext_sqrt_7;
  ext_ident_double_8 = tmp_ext_ident_double_8;
  ext_sqrt_9 = tmp_ext_sqrt_9;
  ext_ident_double_10 = tmp_ext_ident_double_10;
  ext_sqrt_11 = tmp_ext_sqrt_11;
  ext_ident_double_12 = tmp_ext_ident_double_12;
  ext_sqrt_13 = tmp_ext_sqrt_13;
  ext_ident_double_14 = tmp_ext_ident_double_14;
  ext_sqrt_15 = tmp_ext_sqrt_15;
  ext_ident_double_16 = tmp_ext_ident_double_16;
  ext_sqrt_17 = tmp_ext_sqrt_17;
  ext_ident_double_18 = tmp_ext_ident_double_18;
  ext_sqrt_19 = tmp_ext_sqrt_19;
  ext_ident_double_20 = tmp_ext_ident_double_20;
  ext_sqrt_21 = tmp_ext_sqrt_21;
  ext_ident_double_22 = tmp_ext_ident_double_22;
  ext_sqrt_23 = tmp_ext_sqrt_23;
  ext_ident_double_24 = tmp_ext_ident_double_24;
  ext_sqrt_25 = tmp_ext_sqrt_25;
  ext_ident_double_26 = tmp_ext_ident_double_26;
  ext_sqrt_27 = tmp_ext_sqrt_27;
  ext_ident_double_28 = tmp_ext_ident_double_28;
  ext_sqrt_29 = tmp_ext_sqrt_29;
  ext_sqrt_30 = tmp_ext_sqrt_30;
}

void static fireTriggers(void) {
  if (trigger_guard_alert_3D_conflict_resolution_violation(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_minimal_horizontal_separation, ext_ownship_velocity_x, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_velocity_y, ext_intruder_velocity_y, queue_6, ptr_6, ext_direction_parameter_horizontal, ext_sqrt_3, ext_ownship_velocity_z, ext_intruder_velocity_z, queue_11, ptr_11, ext_direction_parameter_vertical, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10, ext_minimal_vertical_separation, queue_7, ptr_7, queue_8, ptr_8, ext_ident_double_4, ext_sqrt_5, ext_ident_double_6, ext_sqrt_7, ext_ident_double_8, ext_sqrt_9, ext_ident_double_10, ext_sqrt_11, ext_ident_double_12, ext_sqrt_13, ext_ident_double_14, ext_sqrt_15, ext_ident_double_16, ext_sqrt_17, ext_ident_double_18, ext_sqrt_19, ext_ident_double_20, ext_sqrt_21, ext_ident_double_22, ext_sqrt_23, ext_ident_double_24, ext_sqrt_25, ext_ident_double_26, ext_sqrt_27, ext_ident_double_28, ext_sqrt_29, ext_sqrt_30))
    alert_3D_conflict_resolution_violation();
  if (trigger_guard_alert_3D_loss_separation_violation(queue_0, ptr_0, ext_ownship_position_x, queue_1, ptr_1, ext_intruder_position_x, queue_2, ptr_2, ext_ownship_velocity_x, ext_intruder_velocity_x, queue_3, ptr_3, ext_ownship_position_y, queue_4, ptr_4, ext_intruder_position_y, queue_5, ptr_5, ext_ownship_velocity_y, ext_intruder_velocity_y, queue_6, ptr_6, queue_7, ptr_7, queue_8, ptr_8, ext_sqrt_0, ext_maximum_time_for_violation, ext_minimal_horizontal_separation, ext_sqrt_1, ext_ownship_position_z, queue_9, ptr_9, ext_intruder_position_z, queue_10, ptr_10, ext_ident_double_2, ext_minimal_vertical_separation, ext_ownship_velocity_z, ext_intruder_velocity_z, queue_11, ptr_11, queue_12, ptr_12))
    alert_3D_loss_separation_violation();
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 assigns tmp_3;
 assigns tmp_4;
 assigns tmp_5;
 assigns tmp_6;
 assigns tmp_7;
 assigns tmp_8;
 assigns tmp_9;
 assigns tmp_10;
 assigns tmp_11;
 assigns tmp_12;
 */
void static updateStates(void) {
  tmp_0 = update_state_0();
  tmp_1 = update_state_1(ext_ownship_position_x);
  tmp_2 = update_state_2(ext_intruder_position_x);
  tmp_3 = update_state_3(ext_intruder_velocity_x);
  tmp_4 = update_state_4(ext_ownship_position_y);
  tmp_5 = update_state_5(ext_intruder_position_y);
  tmp_6 = update_state_6(ext_intruder_velocity_y);
  tmp_7 = update_state_7(ext_ownship_velocity_x);
  tmp_8 = update_state_8(ext_ownship_velocity_y);
  tmp_9 = update_state_9(ext_ownship_position_z);
  tmp_10 = update_state_10(ext_intruder_position_z);
  tmp_11 = update_state_11(ext_intruder_velocity_z);
  tmp_12 = update_state_12(ext_ownship_velocity_z);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 assigns queue_2[ptr_2];
 ensures queue_2[ptr_2] == tmp_2;
 assigns queue_3[ptr_3];
 ensures queue_3[ptr_3] == tmp_3;
 assigns queue_4[ptr_4];
 ensures queue_4[ptr_4] == tmp_4;
 assigns queue_5[ptr_5];
 ensures queue_5[ptr_5] == tmp_5;
 assigns queue_6[ptr_6];
 ensures queue_6[ptr_6] == tmp_6;
 assigns queue_7[ptr_7];
 ensures queue_7[ptr_7] == tmp_7;
 assigns queue_8[ptr_8];
 ensures queue_8[ptr_8] == tmp_8;
 assigns queue_9[ptr_9];
 ensures queue_9[ptr_9] == tmp_9;
 assigns queue_10[ptr_10];
 ensures queue_10[ptr_10] == tmp_10;
 assigns queue_11[ptr_11];
 ensures queue_11[ptr_11] == tmp_11;
 assigns queue_12[ptr_12];
 ensures queue_12[ptr_12] == tmp_12;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
  queue_3[ptr_3] = tmp_3;
  queue_4[ptr_4] = tmp_4;
  queue_5[ptr_5] = tmp_5;
  queue_6[ptr_6] = tmp_6;
  queue_7[ptr_7] = tmp_7;
  queue_8[ptr_8] = tmp_8;
  queue_9[ptr_9] = tmp_9;
  queue_10[ptr_10] = tmp_10;
  queue_11[ptr_11] = tmp_11;
  queue_12[ptr_12] = tmp_12;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 1;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 1;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 1;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 1;
 assigns ptr_8;
 ensures ptr_8 == (\old (ptr_8 ) + 1) % 1;
 assigns ptr_9;
 ensures ptr_9 == (\old (ptr_9 ) + 1) % 1;
 assigns ptr_10;
 ensures ptr_10 == (\old (ptr_10 ) + 1) % 1;
 assigns ptr_11;
 ensures ptr_11 == (\old (ptr_11 ) + 1) % 1;
 assigns ptr_12;
 ensures ptr_12 == (\old (ptr_12 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 1;
  ptr_3 = (ptr_3 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 1;
  ptr_5 = (ptr_5 + 1) % 1;
  ptr_6 = (ptr_6 + 1) % 1;
  ptr_7 = (ptr_7 + 1) % 1;
  ptr_8 = (ptr_8 + 1) % 1;
  ptr_9 = (ptr_9 + 1) % 1;
  ptr_10 = (ptr_10 + 1) % 1;
  ptr_11 = (ptr_11 + 1) % 1;
  ptr_12 = (ptr_12 + 1) % 1;
}
/* Idents */

/*@
 assigns \nothing;
 */
SBool ident_bool(SBool a) {return a;}
/*@
 assigns \nothing;
 */
SWord8 ident_word8(SWord8 a) {return a;}
/*@
 assigns \nothing;
 */
SWord16 ident_word16(SWord16 a) {return a;}
/*@
 assigns \nothing;
 */
SWord32 ident_word32(SWord32 a) {return a;}
/*@
 assigns \nothing;
 */
SWord64 ident_word64(SWord64 a) {return a;}
/*@
 assigns \nothing;
 */
SInt8 ident_int8(SInt8 a) {return a;}
/*@
 assigns \nothing;
 */
SInt16 ident_int16(SInt16 a) {return a;}
/*@
 assigns \nothing;
 */
SInt32 ident_int32(SInt32 a) {return a;}
/*@
 assigns \nothing;
 */
SInt64 ident_int64(SInt64 a) {return a;}
/*@
 assigns \nothing;
 */
SFloat ident_float(SFloat a) {return a;}
/*@
 assigns \nothing;
 */
SDouble ident_double(SDouble a) {return a;}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}

void testing(void) {
  for(;;) step();
}
