/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
SBool tmp_0 = true;
SBool tmp_1 = false;
SBool tmp_2 = true;
SBool tmp_3 = false;
SBool tmp_4 = false;
SBool tmp_5 = false;
SBool tmp_6 = true;
SBool tmp_7 = false;
SBool queue_0[5] = { true, true, true, true, true };
SBool queue_1[5] = { false, false, false, false, true };
SBool queue_2[5] = { true, true, true, true, true };
SBool queue_3[6] = { false, false, false, false, false, true };
SBool queue_4[13] = { false, false, false, false, false, false, false, false, false, false, false, false, true };
SBool queue_5[3] = { false, false, true };
SBool queue_6[6] = { true, true, true, true, true, false };
SBool queue_7[1] = { false };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
SWord32 ptr_2 = 0;
SWord32 ptr_3 = 0;
SWord32 ptr_4 = 0;
SWord32 ptr_5 = 0;
SWord32 ptr_6 = 0;
SWord32 ptr_7 = 0;
/*ACSL following*/
/*@
 global invariant a_bound_ptr_0: ptr_0 < 5 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 4 ));
 global invariant a_bound_ptr_1: ptr_1 < 5 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 4 ));
 global invariant a_bound_ptr_2: ptr_2 < 5 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 4 ));
 global invariant a_bound_ptr_3: ptr_3 < 6 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 5 ));
 global invariant a_bound_ptr_4: ptr_4 < 13 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 12 ));
 global invariant a_bound_ptr_5: ptr_5 < 3 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 2 ));
 global invariant a_bound_ptr_6: ptr_6 < 6 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 5 ));
 global invariant a_bound_ptr_7: ptr_7 < 1 ; 
 global invariant a_pos_ptr_7: ptr_7 >= 0 ; 
 global invariant a_valid_ptr_7: \valid (queue_7 + (0.. 0 ));
*/

/*@
 assigns \nothing;
*/
void sampleExts(void) {
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
  if (trigger_guard_testAlways1())
    testAlways1(trigger_testAlways1_arg_0(queue_7, ptr_7));
  if (trigger_guard_testAlways2())
    testAlways2(trigger_testAlways2_arg_0(queue_6, ptr_6));
  if (trigger_guard_testFuture())
    testFuture(trigger_testFuture_arg_0(queue_4, ptr_4));
  if (trigger_guard_testNext())
    testNext(trigger_testNext_arg_0(queue_5, ptr_5));
  if (trigger_guard_testRelease())
    testRelease(trigger_testRelease_arg_0(queue_0, ptr_0, queue_1, ptr_1));
  if (trigger_guard_testUntil())
    testUntil(trigger_testUntil_arg_0(queue_2, ptr_2, queue_3, ptr_3));
}

/*@
 assigns \nothing;
 */
void updateObservers(void) {
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 assigns tmp_3;
 assigns tmp_4;
 assigns tmp_5;
 assigns tmp_6;
 assigns tmp_7;
 */
void updateStates(void) {
  tmp_0 = update_state_0();
  tmp_1 = update_state_1();
  tmp_2 = update_state_2();
  tmp_3 = update_state_3();
  tmp_4 = update_state_4();
  tmp_5 = update_state_5(queue_5, ptr_5);
  tmp_6 = update_state_6();
  tmp_7 = update_state_7();
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
void updateBuffers(void) {
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
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 5;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 5;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 5;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 6;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 13;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 3;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 6;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 1;
 */
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 5;
  ptr_1 = (ptr_1 + 1) % 5;
  ptr_2 = (ptr_2 + 1) % 5;
  ptr_3 = (ptr_3 + 1) % 6;
  ptr_4 = (ptr_4 + 1) % 13;
  ptr_5 = (ptr_5 + 1) % 3;
  ptr_6 = (ptr_6 + 1) % 6;
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
