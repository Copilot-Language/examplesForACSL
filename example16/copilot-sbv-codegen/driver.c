/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */
SBool obs2;
SBool obs1;
SBool obs0;
SBool done;
SBool sat;

/* Variables */
static SBool tmp_0 = true;
static SBool tmp_1 = true;
static SBool tmp_2 = true;
static SWord64 tmp_3 = 1;
static SBool tmp_4 = false;
static SBool tmp_5 = true;
static SBool tmp_6 = true;
static SBool tmp_7 = true;
static SBool queue_0[2] = { true, false };
static SBool queue_1[4] = { true, false, false, false };
static SBool queue_2[8] = { true, false, false, false, false, false, false, false };
static SWord64 queue_3[1] = { 1 };
static SBool queue_4[1] = { false };
static SBool queue_5[8] = { true, false, false, false, false, false, false, false };
static SBool queue_6[4] = { true, false, false, false };
static SBool queue_7[2] = { true, false };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord32 ptr_3 = 0;
static SWord32 ptr_4 = 0;
static SWord32 ptr_5 = 0;
static SWord32 ptr_6 = 0;
static SWord32 ptr_7 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 2 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 1 ));
 global invariant a_bound_ptr_1: ptr_1 < 4 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 3 ));
 global invariant a_bound_ptr_2: ptr_2 < 8 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 7 ));
 global invariant a_bound_ptr_3: ptr_3 < 1 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 0 ));
 global invariant a_bound_ptr_4: ptr_4 < 1 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 0 ));
 global invariant a_bound_ptr_5: ptr_5 < 8 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 7 ));
 global invariant a_bound_ptr_6: ptr_6 < 4 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 3 ));
 global invariant a_bound_ptr_7: ptr_7 < 2 ; 
 global invariant a_pos_ptr_7: ptr_7 >= 0 ; 
 global invariant a_valid_ptr_7: \valid (queue_7 + (0.. 1 ));
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
 assigns done;
 assigns obs0;
 assigns obs1;
 assigns obs2;
 assigns sat;
 */
void static updateObservers(void) {
  done = observer_done(queue_3, ptr_3);
  obs0 = observer_obs0(queue_2, ptr_2);
  obs1 = observer_obs1(queue_1, ptr_1);
  obs2 = observer_obs2(queue_0, ptr_0);
  sat = observer_sat(queue_4, ptr_4);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 assigns tmp_3;
 assigns tmp_5;
 assigns tmp_6;
 assigns tmp_7;
 assigns tmp_4;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_2 = update_state_2(queue_2, ptr_2);
  tmp_3 = update_state_3(queue_3, ptr_3);
  tmp_5 = update_state_5(queue_5, ptr_5);
  tmp_6 = update_state_6(queue_6, ptr_6);
  tmp_7 = update_state_7(queue_7, ptr_7);
  tmp_4 = update_state_4(queue_5, ptr_5, queue_6, ptr_6, queue_7, ptr_7, queue_4, ptr_4);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 assigns queue_2[ptr_2];
 ensures queue_2[ptr_2] == tmp_2;
 assigns queue_3[ptr_3];
 ensures queue_3[ptr_3] == tmp_3;
 assigns queue_4[ptr_4];
 ensures queue_4[ptr_4] == tmp_4;
 assigns queue_5[ptr_5];
 ensures queue_5[ptr_5] == tmp_5;
 assigns queue_6[ptr_6];
 ensures queue_6[ptr_6] == tmp_6;
 assigns queue_7[ptr_7];
 ensures queue_7[ptr_7] == tmp_7;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
  queue_3[ptr_3] = tmp_3;
  queue_4[ptr_4] = tmp_4;
  queue_5[ptr_5] = tmp_5;
  queue_6[ptr_6] = tmp_6;
  queue_7[ptr_7] = tmp_7;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 2;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 4;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 8;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 8;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 4;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 2;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 2;
  ptr_1 = (ptr_1 + 1) % 4;
  ptr_2 = (ptr_2 + 1) % 8;
  ptr_3 = (ptr_3 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 1;
  ptr_5 = (ptr_5 + 1) % 8;
  ptr_6 = (ptr_6 + 1) % 4;
  ptr_7 = (ptr_7 + 1) % 2;
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
