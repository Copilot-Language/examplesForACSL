/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SWord64 tmp_0 = 0;
static SWord64 queue_0[1] = { 0 };
static SWord32 ptr_0 = 0;
static SBool ext_my_AGflag = 0;
static SWord64 ext_my_ICAO24 = 0;
static SWord64 ext_my_altitude = 0;
static SWord64 ext_my_groundspeed = 0;
static SWord64 ext_my_heading = 0;
static SDouble ext_my_latitude = 0;
static SDouble ext_my_longitude = 0;
static SWord64 ext_my_timestamp = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
*/

/*@
 assigns ext_my_AGflag;
 assigns ext_my_ICAO24;
 assigns ext_my_altitude;
 assigns ext_my_groundspeed;
 assigns ext_my_heading;
 assigns ext_my_latitude;
 assigns ext_my_longitude;
 assigns ext_my_timestamp;
 //ensures ext_my_AGflag == my_AGflag;
 //ensures ext_my_ICAO24 == my_ICAO24;
 //ensures ext_my_altitude == my_altitude;
 //ensures ext_my_groundspeed == my_groundspeed;
 //ensures ext_my_heading == my_heading;
 //ensures ext_my_latitude == my_latitude;
 //ensures ext_my_longitude == my_longitude;
 //ensures ext_my_timestamp == my_timestamp;
*/
void static sampleExts(void) {
  ext_my_AGflag = my_AGflag;
  ext_my_ICAO24 = my_ICAO24;
  ext_my_altitude = my_altitude;
  ext_my_groundspeed = my_groundspeed;
  ext_my_heading = my_heading;
  ext_my_latitude = my_latitude;
  ext_my_longitude = my_longitude;
  ext_my_timestamp = my_timestamp;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_alert_inconsistent_data_from_me(ext_my_latitude, ext_my_longitude, ext_my_timestamp, queue_0, ptr_0, ext_my_ICAO24, ext_my_altitude, ext_my_groundspeed, ext_my_heading, ext_my_AGflag))
    alert_inconsistent_data_from_me();
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_0;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(ext_my_timestamp);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
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
