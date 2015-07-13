/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SBool tmp_27 = true;
static SBool queue_27[1] = { true };
static SWord32 ptr_27 = 0;
static SBool ext_cooler = 0;
static SWord8 ext_tmp_probe_0 = 0;
static SWord8 ext_tmp_probe_1 = 0;
static SWord8 ext_tmp_probe_2 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_27: ptr_27 < 1 ; 
 global invariant a_pos_ptr_27: ptr_27 >= 0 ; 
 global invariant a_valid_ptr_27: \valid (queue_27 + (0.. 0 ));
*/

/*@
 assigns ext_cooler;
 assigns ext_tmp_probe_0;
 assigns ext_tmp_probe_1;
 assigns ext_tmp_probe_2;
 //ensures ext_cooler == cooler;
 //ensures ext_tmp_probe_0 == tmp_probe_0;
 //ensures ext_tmp_probe_1 == tmp_probe_1;
 //ensures ext_tmp_probe_2 == tmp_probe_2;
*/
void static sampleExts(void) {
  ext_cooler = cooler;
  ext_tmp_probe_0 = tmp_probe_0;
  ext_tmp_probe_1 = tmp_probe_1;
  ext_tmp_probe_2 = tmp_probe_2;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_shutoff(ext_tmp_probe_1, ext_tmp_probe_0, ext_tmp_probe_2, ext_cooler, queue_27, ptr_27))
    shutoff(trigger_shutoff_arg_0(ext_tmp_probe_1, ext_tmp_probe_0, ext_tmp_probe_2));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_27;
 */
void static updateStates(void) {
  tmp_27 = update_state_27(ext_tmp_probe_1, ext_tmp_probe_0, ext_tmp_probe_2, ext_cooler, queue_27, ptr_27);
}

/*@
 assigns queue_27[ptr_27];
 ensures queue_27[ptr_27] == tmp_27;
 */
void static updateBuffers(void) {
  queue_27[ptr_27] = tmp_27;
}

/*@
 assigns ptr_27;
 ensures ptr_27 == (\old (ptr_27 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_27 = (ptr_27 + 1) % 1;
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
