/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */
SBool eventuallyPrevTest;

/* Variables */
static SBool tmp_0 = false;
static SBool tmp_1 = false;
static SBool queue_0[7] = { false, false, false, false, false, true, false };
static SBool queue_1[1] = { false };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 7 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 6 ));
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
*/

/*@
 assigns \nothing;
*/
void static sampleExts(void) {
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
}

/*@
 assigns eventuallyPrevTest;
 */
void static updateObservers(void) {
  eventuallyPrevTest = observer_eventuallyPrevTest(queue_0, ptr_0, queue_1, ptr_1);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_0, ptr_0, queue_1, ptr_1);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 7;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 7;
  ptr_1 = (ptr_1 + 1) % 1;
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
