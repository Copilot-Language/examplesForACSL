/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SBool tmp_0 = true;
static SWord64 tmp_1 = 0;
static SBool tmp_2 = true;
static SBool queue_0[1] = { true };
static SWord64 queue_1[1] = { 0 };
static SBool queue_2[2] = { true, false };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord64 ext_e1 = 0;
static SWord64 ext_e2 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
 global invariant a_bound_ptr_2: ptr_2 < 2 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 1 ));
*/

/*@
 assigns ext_e1;
 assigns ext_e2;
 //ensures ext_e1 == e1;
 //ensures ext_e2 == e2;
*/
void static sampleExts(void) {
  ext_e1 = e1;
  ext_e2 = e2;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_trig1(queue_0, ptr_0))
    trig1(trigger_trig1_arg_0(queue_1, ptr_1),
          trigger_trig1_arg_1(ext_e1, ext_e2),
          trigger_trig1_arg_2(queue_2, ptr_2));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_2 = update_state_2(queue_2, ptr_2);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 assigns queue_2[ptr_2];
 ensures queue_2[ptr_2] == tmp_2;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 2;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 2;
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
