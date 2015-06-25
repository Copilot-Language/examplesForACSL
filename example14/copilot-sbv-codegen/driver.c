/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool sinceTest;

/* Variables */
static SBool tmp_0 = false;
static SBool tmp_1 = false;
static SBool tmp_2 = false;
static SBool tmp_3 = false;
static SBool tmp_4 = true;
static SBool queue_0[1] = { false };
static SBool queue_1[7] = { false, false, true, false, false, false, false };
static SBool queue_2[1] = { false };
static SBool queue_3[3] = { false, false, false };
static SBool queue_4[1] = { true };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord32 ptr_3 = 0;
static SWord32 ptr_4 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 7 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 6 ));
 global invariant a_bound_ptr_2: ptr_2 < 1 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 0 ));
 global invariant a_bound_ptr_3: ptr_3 < 3 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 2 ));
 global invariant a_bound_ptr_4: ptr_4 < 1 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 0 ));
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
 assigns sinceTest;
 */
void static updateObservers(void) {
  sinceTest = observer_sinceTest(queue_0, ptr_0, queue_2, ptr_2, queue_3, ptr_3, queue_4, ptr_4);
}

/*@
 assigns tmp_1;
 assigns tmp_0;
 assigns tmp_2;
 assigns tmp_3;
 assigns tmp_4;
 */
void static updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_0 = update_state_0(queue_1, ptr_1);
  tmp_2 = update_state_2(queue_0, ptr_0, queue_2, ptr_2);
  tmp_3 = update_state_3();
  tmp_4 = update_state_4(queue_0, ptr_0, queue_2, ptr_2, queue_3, ptr_3, queue_4, ptr_4);
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
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
  queue_3[ptr_3] = tmp_3;
  queue_4[ptr_4] = tmp_4;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 7;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 1;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 3;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 7;
  ptr_2 = (ptr_2 + 1) % 1;
  ptr_3 = (ptr_3 + 1) % 3;
  ptr_4 = (ptr_4 + 1) % 1;
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
