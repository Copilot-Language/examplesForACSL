/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
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
static SDouble ext_ownship_planned_velocity_x = 0;
static SDouble ext_ownship_planned_velocity_y = 0;
static SDouble ext_ownship_planned_velocity_z = 0;
static SDouble ext_ownship_position_x = 0;
static SDouble ext_ownship_position_y = 0;
static SDouble ext_ownship_position_z = 0;
static SDouble ext_ownship_velocity_x = 0;
static SDouble ext_ownship_velocity_y = 0;
static SDouble ext_ownship_velocity_z = 0;
static SDouble ext_sqrt_0 = 0;
static SDouble ext_sqrt_1 = 0;
static SDouble ext_sqrt_2 = 0;
static SDouble ext_sqrt_3 = 0;
static SDouble ext_sqrt_4 = 0;
static SDouble ext_sqrt_5 = 0;
static SDouble ext_sqrt_6 = 0;
static SDouble ext_sqrt_7 = 0;
static SDouble ext_sqrt_8 = 0;
static SDouble ext_sqrt_9 = 0;
static SDouble ext_sqrt_10 = 0;
static SDouble ext_sqrt_11 = 0;
static SDouble ext_sqrt_12 = 0;
static SDouble ext_sqrt_13 = 0;
static SDouble ext_sqrt_14 = 0;
static SDouble ext_sqrt_15 = 0;
static SDouble ext_sqrt_16 = 0;

void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_2 = sqrt(ext_sqrt_2_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_3 = sqrt(ext_sqrt_3_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_4 = sqrt(ext_sqrt_4_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_5 = sqrt(ext_sqrt_5_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_6 = sqrt(ext_sqrt_6_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_7 = sqrt(ext_sqrt_7_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_8 = sqrt(ext_sqrt_8_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_9 = sqrt(ext_sqrt_9_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_10 = sqrt(ext_sqrt_10_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_11 = sqrt(ext_sqrt_11_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_12 = sqrt(ext_sqrt_12_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_13 = sqrt(ext_sqrt_13_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_14 = sqrt(ext_sqrt_14_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_15 = sqrt(ext_sqrt_15_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_16 = sqrt(ext_sqrt_16_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
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
  ext_ownship_planned_velocity_x = ownship_planned_velocity_x;
  ext_ownship_planned_velocity_y = ownship_planned_velocity_y;
  ext_ownship_planned_velocity_z = ownship_planned_velocity_z;
  ext_ownship_position_x = ownship_position_x;
  ext_ownship_position_y = ownship_position_y;
  ext_ownship_position_z = ownship_position_z;
  ext_ownship_velocity_x = ownship_velocity_x;
  ext_ownship_velocity_y = ownship_velocity_y;
  ext_ownship_velocity_z = ownship_velocity_z;
  ext_sqrt_0 = tmp_ext_sqrt_0;
  ext_sqrt_1 = tmp_ext_sqrt_1;
  ext_sqrt_2 = tmp_ext_sqrt_2;
  ext_sqrt_3 = tmp_ext_sqrt_3;
  ext_sqrt_4 = tmp_ext_sqrt_4;
  ext_sqrt_5 = tmp_ext_sqrt_5;
  ext_sqrt_6 = tmp_ext_sqrt_6;
  ext_sqrt_7 = tmp_ext_sqrt_7;
  ext_sqrt_8 = tmp_ext_sqrt_8;
  ext_sqrt_9 = tmp_ext_sqrt_9;
  ext_sqrt_10 = tmp_ext_sqrt_10;
  ext_sqrt_11 = tmp_ext_sqrt_11;
  ext_sqrt_12 = tmp_ext_sqrt_12;
  ext_sqrt_13 = tmp_ext_sqrt_13;
  ext_sqrt_14 = tmp_ext_sqrt_14;
  ext_sqrt_15 = tmp_ext_sqrt_15;
  ext_sqrt_16 = tmp_ext_sqrt_16;
}

void static fireTriggers(void) {
  if (trigger_guard_alert_3D_conflict_resolution_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_direction_parameter_horizontal, ext_sqrt_2, ext_ownship_planned_velocity_z, ext_intruder_velocity_z, ext_direction_parameter_vertical, ext_ownship_position_z, ext_intruder_position_z, ext_minimal_vertical_separation, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_sqrt_3, ext_sqrt_4, ext_sqrt_5, ext_sqrt_6, ext_sqrt_7, ext_sqrt_8, ext_sqrt_9, ext_sqrt_10, ext_sqrt_11, ext_sqrt_12, ext_sqrt_13, ext_sqrt_14, ext_sqrt_15, ext_sqrt_16))
    alert_3D_conflict_resolution_violation();
  if (trigger_guard_alert_3D_loss_separation_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_sqrt_0, ext_maximum_time_for_violation, ext_minimal_horizontal_separation, ext_sqrt_1, ext_ownship_position_z, ext_intruder_position_z, ext_minimal_vertical_separation, ext_ownship_planned_velocity_z, ext_intruder_velocity_z, ext_ownship_velocity_z))
    alert_3D_loss_separation_violation();
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns \nothing;
 */
void static updateStates(void) {
}

/*@
 assigns \nothing;
 */
void static updateBuffers(void) {
}

/*@
 assigns \nothing;
 */
void static updatePtrs(void) {
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
