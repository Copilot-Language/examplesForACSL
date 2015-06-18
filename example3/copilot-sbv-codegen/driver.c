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
SWord32 tmp_0 = 0;
SWord32 queue_0[1] = { 0 };
SWord32 ptr_0 = 0;
SWord8 ext_idx2 = 0;
SWord8 ext_idx3 = 0;
SWord32 ext_arr1_0 = 0;
SWord32 ext_arr2_1 = 0;
SWord32 ext_arr2_2 = 0;
/*ACSL following*/
/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
*/

/*@
 assigns ext_idx2;
 assigns ext_idx3;
 //ensures ext_idx2 == idx2;
 //ensures ext_idx3 == idx3;
 assigns ext_arr1_0 ;
 assigns ext_arr2_1 ;
 assigns ext_arr2_2 ;
 //ensures ext_arr1_0 == tmp_arr1;
 //ensures ext_arr2_1 == tmp_arr2;
 //ensures ext_arr2_2 == tmp_arr2;
*/
void sampleExts(void) {
  ext_idx2 = idx2;
  ext_idx3 = idx3;
  SWord32 tmp_ext_arr1_0 = arr1[ext_arr_arr1(queue_0, ptr_0)];
  ext_arr1_0 = tmp_ext_arr1_0;
  SWord32 tmp_ext_arr2_1 = arr2[ext_arr_arr2(ext_idx2)];
  ext_arr2_1 = tmp_ext_arr2_1;
  SWord32 tmp_ext_arr2_2 = arr2[ext_arr_arr2(ext_idx3)];
  ext_arr2_2 = tmp_ext_arr2_2;
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
  if (trigger_guard_trigger())
    trigger(trigger_trigger_arg_0(ext_arr1_0),
            trigger_trigger_arg_1(ext_arr2_1),
            trigger_trigger_arg_2(ext_arr2_2));
}

/*@
 assigns \nothing;
 */
void updateObservers(void) {
}

/*@
 assigns tmp_0;
 */
void updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 */
void updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 */
void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
