/* Generated by Copilot Core. */

#include <stdint.h>
#include <stdbool.h>

/* Observers (defined by Copilot): */


/* Triggers (must be defined by user): */

void alert_3D_loss_separation_violation();
void alert_3D_conflict_resolution_violation();

/* External structs (must be defined by user): */


/* External variables (must be defined by user): */

extern double ownship_position_x;
extern double intruder_position_x;
extern double ownship_planned_velocity_x;
extern double intruder_velocity_x;
extern double ownship_position_y;
extern double intruder_position_y;
extern double ownship_planned_velocity_y;
extern double intruder_velocity_y;
extern double ownship_velocity_x;
extern double ownship_velocity_y;
extern double maximum_time_for_violation;
extern double minimal_horizontal_separation;
extern double ownship_position_z;
extern double intruder_position_z;
extern double minimal_vertical_separation;
extern double ownship_planned_velocity_z;
extern double intruder_velocity_z;
extern double ownship_velocity_z;
extern double direction_parameter_horizontal;
extern double direction_parameter_vertical;

/* External arrays (must be defined by user): */


/* External functions (must be defined by user): */

double sqrt(double);

/* Step function: */

void step(void);