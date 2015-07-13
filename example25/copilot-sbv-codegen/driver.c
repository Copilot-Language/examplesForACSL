/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */
SWord64 cnt;
SWord64 hist;

/* Variables */
static SWord64 tmp_0 = 0;
static SWord64 queue_0[1] = { 0 };
static SWord32 ptr_0 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
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
 assigns cnt;
 assigns hist;
 */
void static updateObservers(void) {
  cnt = observer_cnt(queue_0, ptr_0);
  hist = observer_hist(queue_0, ptr_0);
}

/*@
 assigns tmp_0;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
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
