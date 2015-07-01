/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SDouble ext_direction_parameter = 0;
static SDouble ext_intruder_position_x = 0;
static SDouble ext_intruder_position_y = 0;
static SDouble ext_intruder_velocity_x = 0;
static SDouble ext_intruder_velocity_y = 0;
static SDouble ext_maximum_time_for_horizontal_violation = 0;
static SDouble ext_minimal_horizontal_separation = 0;
static SDouble ext_ownship_planned_velocity_x = 0;
static SDouble ext_ownship_planned_velocity_y = 0;
static SDouble ext_ownship_position_x = 0;
static SDouble ext_ownship_position_y = 0;
static SDouble ext_ownship_velocity_x = 0;
static SDouble ext_ownship_velocity_y = 0;
static SDouble ext_sqrt_0 = 0;
static SDouble ext_sqrt_1 = 0;
static SDouble ext_sqrt_2 = 0;
/*ACSL following*/



/*@
 assigns ext_direction_parameter;
 assigns ext_intruder_position_x;
 assigns ext_intruder_position_y;
 assigns ext_intruder_velocity_x;
 assigns ext_intruder_velocity_y;
 assigns ext_maximum_time_for_horizontal_violation;
 assigns ext_minimal_horizontal_separation;
 assigns ext_ownship_planned_velocity_x;
 assigns ext_ownship_planned_velocity_y;
 assigns ext_ownship_position_x;
 assigns ext_ownship_position_y;
 assigns ext_ownship_velocity_x;
 assigns ext_ownship_velocity_y;
 //ensures ext_direction_parameter == direction_parameter;
 //ensures ext_intruder_position_x == intruder_position_x;
 //ensures ext_intruder_position_y == intruder_position_y;
 //ensures ext_intruder_velocity_x == intruder_velocity_x;
 //ensures ext_intruder_velocity_y == intruder_velocity_y;
 //ensures ext_maximum_time_for_horizontal_violation == maximum_time_for_horizontal_violation;
 //ensures ext_minimal_horizontal_separation == minimal_horizontal_separation;
 //ensures ext_ownship_planned_velocity_x == ownship_planned_velocity_x;
 //ensures ext_ownship_planned_velocity_y == ownship_planned_velocity_y;
 //ensures ext_ownship_position_x == ownship_position_x;
 //ensures ext_ownship_position_y == ownship_position_y;
 //ensures ext_ownship_velocity_x == ownship_velocity_x;
 //ensures ext_ownship_velocity_y == ownship_velocity_y;
 assigns ext_sqrt_0;
 assigns ext_sqrt_1;
 assigns ext_sqrt_2;
 //ensures ext_sqrt_0 == tmp_ext_sqrt_0;
 //ensures ext_sqrt_1 == tmp_ext_sqrt_1;
 //ensures ext_sqrt_2 == tmp_ext_sqrt_2;
*/
void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_2 = sqrt(ext_sqrt_2_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_minimal_horizontal_separation));
  ext_direction_parameter = direction_parameter;
  ext_intruder_position_x = intruder_position_x;
  ext_intruder_position_y = intruder_position_y;
  ext_intruder_velocity_x = intruder_velocity_x;
  ext_intruder_velocity_y = intruder_velocity_y;
  ext_maximum_time_for_horizontal_violation = maximum_time_for_horizontal_violation;
  ext_minimal_horizontal_separation = minimal_horizontal_separation;
  ext_ownship_planned_velocity_x = ownship_planned_velocity_x;
  ext_ownship_planned_velocity_y = ownship_planned_velocity_y;
  ext_ownship_position_x = ownship_position_x;
  ext_ownship_position_y = ownship_position_y;
  ext_ownship_velocity_x = ownship_velocity_x;
  ext_ownship_velocity_y = ownship_velocity_y;
  ext_sqrt_0 = tmp_ext_sqrt_0;
  ext_sqrt_1 = tmp_ext_sqrt_1;
  ext_sqrt_2 = tmp_ext_sqrt_2;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_alert_horizontal_criterion_conflict_resolution_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_direction_parameter, ext_sqrt_2, ext_minimal_horizontal_separation))
    alert_horizontal_criterion_conflict_resolution_violation();
  if (trigger_guard_alert_horizontal_criterion_loss_of_separation_violation(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_planned_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_planned_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_ownship_velocity_y, ext_sqrt_0, ext_maximum_time_for_horizontal_violation, ext_minimal_horizontal_separation, ext_sqrt_1))
    alert_horizontal_criterion_loss_of_separation_violation();
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
