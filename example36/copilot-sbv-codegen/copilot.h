/* Generated by Copilot Core. */

#include <stdint.h>
#include <stdbool.h>

/* Observers (defined by Copilot): */


/* Triggers (must be defined by user): */

void alert_TCASII_RA();

/* External structs (must be defined by user): */


/* External variables (must be defined by user): */

extern double ownship_velocity_x;
extern double intruder_velocity_x;
extern double ownship_velocity_y;
extern double intruder_velocity_y;
extern double ownship_position_x;
extern double intruder_position_x;
extern double ownship_position_y;
extern double intruder_position_y;
extern double ownship_position_z;
extern double intruder_position_z;
extern double ownship_velocity_z;
extern double intruder_velocity_z;

/* External arrays (must be defined by user): */


/* External functions (must be defined by user): */

bool ident_bool(bool);
double ident_double(double);
uint64_t ident_word64(uint64_t);
double sqrt(double);

/* Step function: */

void step(void);