/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SInt32 tmp_1 = 0;
static SInt32 queue_1[1] = { 0 };
static SWord32 ptr_1 = 0;
/*ACSL following*/

/*@
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
  if (trigger_guard_strm())
    strm(trigger_strm_arg_0(queue_1, ptr_1));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_1;
 */
void static updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
}

/*@
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 */
void static updateBuffers(void) {
  queue_1[ptr_1] = tmp_1;
}

/*@
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void static updatePtrs(void) {
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
