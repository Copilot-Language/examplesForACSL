/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SDouble ext_direction_parameter = 0;
static SDouble ext_intruder_position_x = 0;
static SDouble ext_intruder_position_y = 0;
static SDouble ext_intruder_position_z = 0;
static SDouble ext_intruder_velocity_x = 0;
static SDouble ext_intruder_velocity_y = 0;
static SDouble ext_intruder_velocity_z = 0;
static SDouble ext_maximum_time_for_horizontal_violation = 0;
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
/*ACSL following*/



/*@
 assigns ext_direction_parameter;
 assigns ext_intruder_position_x;
 assigns ext_intruder_position_y;
 assigns ext_intruder_position_z;
 assigns ext_intruder_velocity_x;
 assigns ext_intruder_velocity_y;
 assigns ext_intruder_velocity_z;
 assigns ext_maximum_time_for_horizontal_violation;
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
 //ensures ext_direction_parameter == direction_parameter;
 //ensures ext_intruder_position_x == intruder_position_x;
 //ensures ext_intruder_position_y == intruder_position_y;
 //ensures ext_intruder_position_z == intruder_position_z;
 //ensures ext_intruder_velocity_x == intruder_velocity_x;
 //ensures ext_intruder_velocity_y == intruder_velocity_y;
 //ensures ext_intruder_velocity_z == intruder_velocity_z;
 //ensures ext_maximum_time_for_horizontal_violation == maximum_time_for_horizontal_violation;
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
 assigns ext_sqrt_0;
 assigns ext_sqrt_1;
 assigns ext_sqrt_2;
 assigns ext_sqrt_3;
 assigns ext_sqrt_4;
 assigns ext_sqrt_5;
 assigns ext_sqrt_6;
 assigns ext_sqrt_7;
 assigns ext_sqrt_8;
 assigns ext_sqrt_9;
 assigns ext_sqrt_10;
 assigns ext_sqrt_11;
 assigns ext_sqrt_12;
 assigns ext_sqrt_13;
 //ensures ext_sqrt_0 == tmp_ext_sqrt_0;
 //ensures ext_sqrt_1 == tmp_ext_sqrt_1;
 //ensures ext_sqrt_2 == tmp_ext_sqrt_2;
 //ensures ext_sqrt_3 == tmp_ext_sqrt_3;
 //ensures ext_sqrt_4 == tmp_ext_sqrt_4;
 //ensures ext_sqrt_5 == tmp_ext_sqrt_5;
 //ensures ext_sqrt_6 == tmp_ext_sqrt_6;
 //ensures ext_sqrt_7 == tmp_ext_sqrt_7;
 //ensures ext_sqrt_8 == tmp_ext_sqrt_8;
 //ensures ext_sqrt_9 == tmp_ext_sqrt_9;
 //ensures ext_sqrt_10 == tmp_ext_sqrt_10;
 //ensures ext_sqrt_11 == tmp_ext_sqrt_11;
 //ensures ext_sqrt_12 == tmp_ext_sqrt_12;
 //ensures ext_sqrt_13 == tmp_ext_sqrt_13;
*/
void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_2 = sqrt(ext_sqrt_2_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_3 = sqrt(ext_sqrt_3_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_4 = sqrt(ext_sqrt_4_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_5 = sqrt(ext_sqrt_5_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_6 = sqrt(ext_sqrt_6_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_7 = sqrt(ext_sqrt_7_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_8 = sqrt(ext_sqrt_8_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_9 = sqrt(ext_sqrt_9_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_10 = sqrt(ext_sqrt_10_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_minimal_horizontal_separation));
  SDouble tmp_ext_sqrt_11 = sqrt(ext_sqrt_11_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_12 = sqrt(ext_sqrt_12_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_13 = sqrt(ext_sqrt_13_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
  ext_direction_parameter = direction_parameter;
  ext_intruder_position_x = intruder_position_x;
  ext_intruder_position_y = intruder_position_y;
  ext_intruder_position_z = intruder_position_z;
  ext_intruder_velocity_x = intruder_velocity_x;
  ext_intruder_velocity_y = intruder_velocity_y;
  ext_intruder_velocity_z = intruder_velocity_z;
  ext_maximum_time_for_horizontal_violation = maximum_time_for_horizontal_violation;
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
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_alert_horizontal_criterion_conflict_resolution_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_direction_parameter, ext_sqrt_13, ext_minimal_horizontal_separation))
    alert_horizontal_criterion_conflict_resolution_violation();
  if (trigger_guard_alert_horizontal_criterion_loss_of_separation_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_sqrt_11, ext_maximum_time_for_horizontal_violation, ext_minimal_horizontal_separation, ext_sqrt_12))
    alert_horizontal_criterion_loss_of_separation_violation();
  if (trigger_guard_alert_vertical_criterion_conflict_resolution_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_z, ext_intruder_velocity_z, ext_direction_parameter, ext_ownship_position_z, ext_intruder_position_z, ext_minimal_vertical_separation, ext_minimal_horizontal_separation, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_sqrt_0, ext_ownship_planned_velocity_x, ext_sqrt_1, ext_ownship_planned_velocity_y, ext_sqrt_2, ext_sqrt_3, ext_sqrt_4, ext_sqrt_5, ext_sqrt_6, ext_sqrt_7, ext_sqrt_8, ext_sqrt_9, ext_sqrt_10))
    alert_vertical_criterion_conflict_resolution_violation();
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
