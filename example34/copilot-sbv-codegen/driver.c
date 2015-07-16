/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SDouble ext_intruder_position_x = 0;
static SDouble ext_intruder_position_y = 0;
static SDouble ext_intruder_position_z = 0;
static SDouble ext_intruder_velocity_x = 0;
static SDouble ext_intruder_velocity_y = 0;
static SDouble ext_intruder_velocity_z = 0;
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

void static sampleExts(void) {
  SDouble tmp_ext_sqrt_0 = sqrt(ext_sqrt_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_1 = sqrt(ext_sqrt_1_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_2 = sqrt(ext_sqrt_2_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_3 = sqrt(ext_sqrt_3_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_4 = sqrt(ext_sqrt_4_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_5 = sqrt(ext_sqrt_5_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_6 = sqrt(ext_sqrt_6_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_7 = sqrt(ext_sqrt_7_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_8 = sqrt(ext_sqrt_8_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_9 = sqrt(ext_sqrt_9_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_y, ext_intruder_position_y));
  ext_intruder_position_x = intruder_position_x;
  ext_intruder_position_y = intruder_position_y;
  ext_intruder_position_z = intruder_position_z;
  ext_intruder_velocity_x = intruder_velocity_x;
  ext_intruder_velocity_y = intruder_velocity_y;
  ext_intruder_velocity_z = intruder_velocity_z;
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
}

void static fireTriggers(void) {
  if (trigger_guard_alert_WCVtau(ext_sqrt_8, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_sqrt_9, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z))
    alert_WCVtau();
  if (trigger_guard_alert_WCVtaumod(ext_sqrt_4, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_sqrt_5, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z))
    alert_WCVtaumod();
  if (trigger_guard_alert_WCVtcpa(ext_sqrt_6, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_sqrt_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z))
    alert_WCVtcpa();
  if (trigger_guard_alert_WCVtep(ext_sqrt_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_sqrt_1, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_sqrt_2, ext_sqrt_3, ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z))
    alert_WCVtep();
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
