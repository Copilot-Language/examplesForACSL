/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool previousTest;

/* Variables */
SBool tmp_0 = false;
SBool tmp_1 = true;
SBool queue_0[1] = { false };
SBool queue_1[2] = { true, false };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
/*ACSL following*/
/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 2 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 1 ));
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
 assigns previousTest;
 */
void updateObservers(void) {
  previousTest = observer_previousTest(queue_0, ptr_0);
}

/*@
 assigns tmp_1;
 assigns tmp_0;
 */
void updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_0 = update_state_0(queue_1, ptr_1);
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
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 2;
 */
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 2;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
