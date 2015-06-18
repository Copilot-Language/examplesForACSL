/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool eventuallyPrevTest;

/* Variables */
SBool tmp_0 = false;
SBool tmp_1 = false;
SBool queue_0[7] = { false, false, false, false, false, true, false };
SBool queue_1[1] = { false };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
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
void sampleExts(void) {
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
}

/*@
 assigns eventuallyPrevTest;
 */
void updateObservers(void) {
  eventuallyPrevTest = observer_eventuallyPrevTest(queue_0, ptr_0, queue_1, ptr_1);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 */
void updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_0, ptr_0, queue_1, ptr_1);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 */
void updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 7;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 7;
  ptr_1 = (ptr_1 + 1) % 1;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
