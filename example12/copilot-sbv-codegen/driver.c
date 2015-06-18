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
SInt32 tmp_1 = 0;
SInt32 queue_1[1] = { 0 };
SWord32 ptr_1 = 0;
/*ACSL following*/
/*@
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
  if (trigger_guard_strm())
    strm(trigger_strm_arg_0(queue_1, ptr_1));
}

/*@
 assigns \nothing;
 */
void updateObservers(void) {
}

/*@
 assigns tmp_1;
 */
void updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
}

/*@
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 */
void updateBuffers(void) {
  queue_1[ptr_1] = tmp_1;
}

/*@
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void updatePtrs(void) {
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
