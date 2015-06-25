/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SWord16 stack;

/* Variables */
static SWord16 tmp_0 = 0;
static SBool tmp_1 = false;
static SWord16 tmp_2 = 0;
static SWord16 tmp_3 = 0;
static SWord16 tmp_4 = 0;
static SWord16 tmp_5 = 0;
static SBool tmp_6 = true;
static SWord16 tmp_7 = 1;
static SWord16 queue_0[1] = { 0 };
static SBool queue_1[12] = { false, false, false, false, false, false, true, true, true, true, true, true };
static SWord16 queue_2[1] = { 0 };
static SWord16 queue_3[1] = { 0 };
static SWord16 queue_4[1] = { 0 };
static SWord16 queue_5[1] = { 0 };
static SBool queue_6[5] = { true, true, true, true, true };
static SWord16 queue_7[1] = { 1 };
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
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 12 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 11 ));
 global invariant a_bound_ptr_2: ptr_2 < 1 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 0 ));
 global invariant a_bound_ptr_3: ptr_3 < 1 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 0 ));
 global invariant a_bound_ptr_4: ptr_4 < 1 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 0 ));
 global invariant a_bound_ptr_5: ptr_5 < 1 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 0 ));
 global invariant a_bound_ptr_6: ptr_6 < 5 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 4 ));
 global invariant a_bound_ptr_7: ptr_7 < 1 ; 
 global invariant a_pos_ptr_7: ptr_7 >= 0 ; 
 global invariant a_valid_ptr_7: \valid (queue_7 + (0.. 0 ));
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
 assigns stack;
 */
void static updateObservers(void) {
  stack = observer_stack(queue_0, ptr_0);
}

/*@
 assigns tmp_1;
 assigns tmp_6;
 assigns tmp_5;
 assigns tmp_4;
 assigns tmp_3;
 assigns tmp_2;
 assigns tmp_7;
 assigns tmp_0;
 */
void static updateStates(void) {
  tmp_1 = update_state_1();
  tmp_6 = update_state_6();
  tmp_5 = update_state_5(queue_1, ptr_1, queue_6, ptr_6, queue_4, ptr_4, queue_5, ptr_5);
  tmp_4 = update_state_4(queue_1, ptr_1, queue_5, ptr_5, queue_6, ptr_6, queue_3, ptr_3, queue_4, ptr_4);
  tmp_3 = update_state_3(queue_1, ptr_1, queue_4, ptr_4, queue_6, ptr_6, queue_2, ptr_2, queue_3, ptr_3);
  tmp_2 = update_state_2(queue_1, ptr_1, queue_3, ptr_3, queue_6, ptr_6, queue_0, ptr_0, queue_2, ptr_2);
  tmp_7 = update_state_7(queue_7, ptr_7);
  tmp_0 = update_state_0(queue_1, ptr_1, queue_2, ptr_2, queue_6, ptr_6, queue_7, ptr_7, queue_0, ptr_0);
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
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 12;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 1;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 1;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 5;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 12;
  ptr_2 = (ptr_2 + 1) % 1;
  ptr_3 = (ptr_3 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 1;
  ptr_5 = (ptr_5 + 1) % 1;
  ptr_6 = (ptr_6 + 1) % 5;
  ptr_7 = (ptr_7 + 1) % 1;
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
