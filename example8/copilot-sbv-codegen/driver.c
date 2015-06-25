/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool i;

/* Variables */
static SWord64 tmp_0 = 1;
static SBool tmp_1 = false;
static SBool tmp_2 = true;
static SWord64 tmp_3 = 0;
static SWord64 tmp_4 = 0;
static SWord8 tmp_5 = 1;
static SWord8 tmp_6 = 0;
static SWord64 queue_0[2] = { 1, 1 };
static SBool queue_1[1] = { false };
static SBool queue_2[3] = { true, true, false };
static SWord64 queue_3[1] = { 0 };
static SWord64 queue_4[1] = { 0 };
static SWord8 queue_5[3] = { 1, 1, 0 };
static SWord8 queue_6[3] = { 0, 1, 1 };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord32 ptr_3 = 0;
static SWord32 ptr_4 = 0;
static SWord32 ptr_5 = 0;
static SWord32 ptr_6 = 0;
static SWord64 ext_e1 = 0;
static SWord64 ext_e2 = 0;
static SWord64 ext_e3 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 2 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 1 ));
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
 global invariant a_bound_ptr_2: ptr_2 < 3 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 2 ));
 global invariant a_bound_ptr_3: ptr_3 < 1 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 0 ));
 global invariant a_bound_ptr_4: ptr_4 < 1 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 0 ));
 global invariant a_bound_ptr_5: ptr_5 < 3 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 2 ));
 global invariant a_bound_ptr_6: ptr_6 < 3 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 2 ));
*/

/*@
 assigns ext_e1;
 assigns ext_e2;
 assigns ext_e3;
 //ensures ext_e1 == e1;
 //ensures ext_e2 == e2;
 //ensures ext_e3 == e3;
*/
void static sampleExts(void) {
  ext_e1 = e1;
  ext_e2 = e2;
  ext_e3 = e3;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_e())
    e(trigger_e_arg_0(queue_0, ptr_0),
      trigger_e_arg_1(queue_4, ptr_4),
      trigger_e_arg_2(ext_e1, ext_e2),
      trigger_e_arg_3(queue_5, ptr_5, queue_6, ptr_6));
  if (trigger_guard_f(queue_2, ptr_2))
    f(trigger_f_arg_0(queue_0, ptr_0),
      trigger_f_arg_1(ext_e1, ext_e2));
  if (trigger_guard_g(queue_1, ptr_1))
    g(trigger_g_arg_0(ext_e1, ext_e2, queue_3, ptr_3));
  if (trigger_guard_h(ext_e3, queue_0, ptr_0))
    h(trigger_h_arg_0());
}

/*@
 assigns i;
 */
void static updateObservers(void) {
  i = observer_i(queue_4, ptr_4);
}

/*@
 assigns tmp_0;
 assigns tmp_2;
 assigns tmp_1;
 assigns tmp_3;
 assigns tmp_4;
 assigns tmp_5;
 assigns tmp_6;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_2 = update_state_2(queue_2, ptr_2);
  tmp_1 = update_state_1(queue_2, ptr_2, queue_1, ptr_1);
  tmp_3 = update_state_3(queue_3, ptr_3);
  tmp_4 = update_state_4(queue_4, ptr_4);
  tmp_5 = update_state_5(queue_5, ptr_5);
  tmp_6 = update_state_6(queue_6, ptr_6);
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
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
  queue_3[ptr_3] = tmp_3;
  queue_4[ptr_4] = tmp_4;
  queue_5[ptr_5] = tmp_5;
  queue_6[ptr_6] = tmp_6;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 2;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 3;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 3;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 3;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 2;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 3;
  ptr_3 = (ptr_3 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 1;
  ptr_5 = (ptr_5 + 1) % 3;
  ptr_6 = (ptr_6 + 1) % 3;
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
