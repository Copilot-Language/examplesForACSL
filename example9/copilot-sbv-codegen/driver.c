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
SWord64 tmp_1 = 0;
SBool tmp_2 = true;
SBool queue_0[1] = { true };
SWord64 queue_1[1] = { 0 };
SBool queue_2[2] = { true, false };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
SWord32 ptr_2 = 0;
SWord64 ext_e1 = 0;
SWord64 ext_e2 = 0;
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
void sampleExts(void) {
  ext_e1 = e1;
  ext_e2 = e2;
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
  if (trigger_guard_trig1(queue_0, ptr_0))
    trig1(trigger_trig1_arg_0(queue_1, ptr_1),
          trigger_trig1_arg_1(ext_e1, ext_e2),
          trigger_trig1_arg_2(queue_2, ptr_2));
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
 */
void updateStates(void) {
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
void updateBuffers(void) {
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
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 2;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
