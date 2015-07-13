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
/*ACSL following*/



/*@
 assigns ext_direction_parameter_horizontal;
 assigns ext_direction_parameter_vertical;
 assigns ext_intruder_position_x;
 assigns ext_intruder_position_y;
 assigns ext_intruder_position_z;
 assigns ext_intruder_velocity_x;
 assigns ext_intruder_velocity_y;
 assigns ext_intruder_velocity_z;
 assigns ext_maximum_time_for_violation;
 assigns ext_minimal_horizontal_separation;
 assigns ext_minimal_vertical_separation;
 assigns ext_ownship_planned_velocity_x;
 assigns ext_ownship_planned_velocity_y;
 assigns ext_ownship_planned_velocity_z;
 assigns ext_ownship_position_x;
 assigns ext_ownship_position_y;
 assigns ext_ownship_position_z;
 assigns ext_ownship_velocity_x;
 assigns ext_ownship_velocity_y;
 assigns ext_ownship_velocity_z;
 //ensures ext_direction_parameter_horizontal == direction_parameter_horizontal;
 //ensures ext_direction_parameter_vertical == direction_parameter_vertical;
 //ensures ext_intruder_position_x == intruder_position_x;
 //ensures ext_intruder_position_y == intruder_position_y;
 //ensures ext_intruder_position_z == intruder_position_z;
 //ensures ext_intruder_velocity_x == intruder_velocity_x;
 //ensures ext_intruder_velocity_y == intruder_velocity_y;
 //ensures ext_intruder_velocity_z == intruder_velocity_z;
 //ensures ext_maximum_time_for_violation == maximum_time_for_violation;
 //ensures ext_minimal_horizontal_separation == minimal_horizontal_separation;
 //ensures ext_minimal_vertical_separation == minimal_vertical_separation;
 //ensures ext_ownship_planned_velocity_x == ownship_planned_velocity_x;
 //ensures ext_ownship_planned_velocity_y == ownship_planned_velocity_y;
 //ensures ext_ownship_planned_velocity_z == ownship_planned_velocity_z;
 //ensures ext_ownship_position_x == ownship_position_x;
 //ensures ext_ownship_position_y == ownship_position_y;
 //ensures ext_ownship_position_z == ownship_position_z;
 //ensures ext_ownship_velocity_x == ownship_velocity_x;
 //ensures ext_ownship_velocity_y == ownship_velocity_y;
 //ensures ext_ownship_velocity_z == ownship_velocity_z;
 assigns ext_sqrt_0;
 assigns ext_sqrt_1;
 assigns ext_ident_double_2;
 assigns ext_sqrt_3;
 assigns ext_ident_double_4;
 assigns ext_sqrt_5;
 assigns ext_ident_double_6;
 assigns ext_sqrt_7;
 assigns ext_ident_double_8;
 assigns ext_sqrt_9;
 assigns ext_ident_double_10;
 assigns ext_sqrt_11;
 assigns ext_ident_double_12;
 assigns ext_sqrt_13;
 assigns ext_ident_double_14;
 assigns ext_sqrt_15;
 assigns ext_ident_double_16;
 assigns ext_sqrt_17;
 assigns ext_ident_double_18;
 assigns ext_sqrt_19;
 assigns ext_ident_double_20;
 assigns ext_sqrt_21;
 assigns ext_ident_double_22;
 assigns ext_sqrt_23;
 assigns ext_ident_double_24;
 assigns ext_sqrt_25;
 assigns ext_ident_double_26;
 assigns ext_sqrt_27;
 assigns ext_ident_double_28;
 assigns ext_sqrt_29;
 assigns ext_sqrt_30;
 //ensures ext_sqrt_0 == tmp_ext_sqrt_0;
 //ensures ext_sqrt_1 == tmp_ext_sqrt_1;
 //ensures ext_ident_double_2 == tmp_ext_ident_double_2;
 //ensures ext_sqrt_3 == tmp_ext_sqrt_3;
 //ensures ext_ident_double_4 == tmp_ext_ident_double_4;
 //ensures ext_sqrt_5 == tmp_ext_sqrt_5;
 //ensures ext_ident_double_6 == tmp_ext_ident_double_6;
 //ensures ext_sqrt_7 == tmp_ext_sqrt_7;
 //ensures ext_ident_double_8 == tmp_ext_ident_double_8;
 //ensures ext_sqrt_9 == tmp_ext_sqrt_9;
 //ensures ext_ident_double_10 == tmp_ext_ident_double_10;
 //ensures ext_sqrt_11 == tmp_ext_sqrt_11;
 //ensures ext_ident_double_12 == tmp_ext_ident_double_12;
 //ensures ext_sqrt_13 == tmp_ext_sqrt_13;
 //ensures ext_ident_double_14 == tmp_ext_ident_double_14;
 //ensures ext_sqrt_15 == tmp_ext_sqrt_15;
 //ensures ext_ident_double_16 == tmp_ext_ident_double_16;
 //ensures ext_sqrt_17 == tmp_ext_sqrt_17;
 //ensures ext_ident_double_18 == tmp_ext_ident_double_18;
 //ensures ext_sqrt_19 == tmp_ext_sqrt_19;
 //ensures ext_ident_double_20 == tmp_ext_ident_double_20;
 //ensures ext_sqrt_21 == tmp_ext_sqrt_21;
 //ensures ext_ident_double_22 == tmp_ext_ident_double_22;
 //ensures ext_sqrt_23 == tmp_ext_sqrt_23;
 //ensures ext_ident_double_24 == tmp_ext_ident_double_24;
 //ensures ext_sqrt_25 == tmp_ext_sqrt_25;
 //ensures ext_ident_double_26 == tmp_ext_ident_double_26;
 //ensures ext_sqrt_27 == tmp_ext_sqrt_27;
 //ensures ext_ident_double_28 == tmp_ext_ident_double_28;
 //ensures ext_sqrt_29 == tmp_ext_sqrt_29;
 //ensures ext_sqrt_30 == tmp_ext_sqrt_30;
*/
void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_2 = ident_double(ext_ident_double_2_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_3 = sqrt(ext_sqrt_3_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_4 = ident_double(ext_ident_double_4_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_5 = sqrt(ext_sqrt_5_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_6 = ident_double(ext_ident_double_6_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_7 = sqrt(ext_sqrt_7_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_8 = ident_double(ext_ident_double_8_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_9 = sqrt(ext_sqrt_9_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_10 = ident_double(ext_ident_double_10_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_11 = sqrt(ext_sqrt_11_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_12 = ident_double(ext_ident_double_12_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_13 = sqrt(ext_sqrt_13_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_14 = ident_double(ext_ident_double_14_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_15 = sqrt(ext_sqrt_15_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_16 = ident_double(ext_ident_double_16_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_17 = sqrt(ext_sqrt_17_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_18 = ident_double(ext_ident_double_18_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_19 = sqrt(ext_sqrt_19_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_20 = ident_double(ext_ident_double_20_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_21 = sqrt(ext_sqrt_21_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_22 = ident_double(ext_ident_double_22_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_23 = sqrt(ext_sqrt_23_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_24 = ident_double(ext_ident_double_24_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_25 = sqrt(ext_sqrt_25_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_26 = ident_double(ext_ident_double_26_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_27 = sqrt(ext_sqrt_27_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_ident_double_28 = ident_double(ext_ident_double_28_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_sqrt_29 = sqrt(ext_sqrt_29_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_30 = sqrt(ext_sqrt_30_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
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

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_alert_3D_conflict_resolution_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_direction_parameter_horizontal, ext_sqrt_3, ext_ownship_planned_velocity_z, ext_intruder_velocity_z, ext_direction_parameter_vertical, ext_ownship_position_z, ext_intruder_position_z, ext_minimal_vertical_separation, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_ident_double_4, ext_sqrt_5, ext_ident_double_6, ext_sqrt_7, ext_ident_double_8, ext_sqrt_9, ext_ident_double_10, ext_sqrt_11, ext_ident_double_12, ext_sqrt_13, ext_ident_double_14, ext_sqrt_15, ext_ident_double_16, ext_sqrt_17, ext_ident_double_18, ext_sqrt_19, ext_ident_double_20, ext_sqrt_21, ext_ident_double_22, ext_sqrt_23, ext_ident_double_24, ext_sqrt_25, ext_ident_double_26, ext_sqrt_27, ext_ident_double_28, ext_sqrt_29, ext_sqrt_30))
    alert_3D_conflict_resolution_violation();
  if (trigger_guard_alert_3D_loss_separation_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_sqrt_0, ext_maximum_time_for_violation, ext_minimal_horizontal_separation, ext_sqrt_1, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_2, ext_minimal_vertical_separation, ext_ownship_planned_velocity_z, ext_intruder_velocity_z, ext_ownship_velocity_z))
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
