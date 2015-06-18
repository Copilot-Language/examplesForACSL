/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool clk1;
SBool clk;

/* Variables */
SWord8 tmp_0 = 0;
SBool tmp_1 = true;
SWord8 queue_0[1] = { 0 };
SBool queue_1[5] = { true, false, false, false, false };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
/*ACSL following*/
/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 5 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 4 ));
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
 assigns clk;
 assigns clk1;
 */
void updateObservers(void) {
  clk = observer_clk(queue_1, ptr_1);
  clk1 = observer_clk1(queue_0, ptr_0);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 */
void updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_1, ptr_1);
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
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 5;
 */
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 5;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
