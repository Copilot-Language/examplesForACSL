/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SWord16 tmp_0 = 0;
static SBool tmp_1 = false;
static SWord16 queue_0[2] = { 0, 1 };
static SBool queue_1[1] = { false };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord8 ext_x = 0;
static SBool ext_func1_0 = 0;
static SWord16 ext_func0_1 = 0;
static SBool ext_func1_2 = 0;
static SWord16 ext_func0_3 = 0;
static SWord16 ext_func0_4 = 0;
static SWord16 ext_func0_5 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 2 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 1 ));
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
*/

/*@
 assigns ext_x;
 //ensures ext_x == x;
 assigns ext_func1_0;
 assigns ext_func0_1;
 assigns ext_func1_2;
 assigns ext_func0_3;
 assigns ext_func0_4;
 assigns ext_func0_5;
 //ensures ext_func1_0 == tmp_ext_func1_0;
 //ensures ext_func0_1 == tmp_ext_func0_1;
 //ensures ext_func1_2 == tmp_ext_func1_2;
 //ensures ext_func0_3 == tmp_ext_func0_3;
 //ensures ext_func0_4 == tmp_ext_func0_4;
 //ensures ext_func0_5 == tmp_ext_func0_5;
*/
void static sampleExts(void) {
  SBool tmp_ext_func1_0 = func1();
  SWord16 tmp_ext_func0_1 = func0(ext_func0_1_arg0(ext_x), ext_func0_1_arg1(queue_0, ptr_0));
  SBool tmp_ext_func1_2 = func1();
  SWord16 tmp_ext_func0_3 = func0(ext_func0_3_arg0(), ext_func0_3_arg1());
  SWord16 tmp_ext_func0_4 = func0(ext_func0_4_arg0(ext_x), ext_func0_4_arg1(queue_0, ptr_0));
  SWord16 tmp_ext_func0_5 = func0(ext_func0_5_arg0(ext_x), ext_func0_5_arg1(queue_0, ptr_0));
  ext_x = x;
  ext_func1_0 = tmp_ext_func1_0;
  ext_func0_1 = tmp_ext_func0_1;
  ext_func1_2 = tmp_ext_func1_2;
  ext_func0_3 = tmp_ext_func0_3;
  ext_func0_4 = tmp_ext_func0_4;
  ext_func0_5 = tmp_ext_func0_5;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_trigger())
    trigger(trigger_trigger_arg_0(ext_func0_1, ext_x, queue_0, ptr_0),
            trigger_trigger_arg_1(ext_func1_2),
            trigger_trigger_arg_2(ext_func0_3),
            trigger_trigger_arg_3(ext_func0_4, ext_x, queue_0, ptr_0, ext_func0_5));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(ext_func1_0);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 2;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 2;
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

void testing(void) {
  for(;;) step();
}
