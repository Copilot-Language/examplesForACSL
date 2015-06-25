/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SWord16 tmp_0 = 1;
static SWord16 tmp_1 = 0;
static SWord16 queue_0[1] = { 1 };
static SWord16 queue_1[1] = { 0 };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord16 ext_crc_sbv_0 = 0;
static SWord16 ext_crc_sbv_1 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
*/

/*@
 assigns ext_crc_sbv_0;
 assigns ext_crc_sbv_1;
 //ensures ext_crc_sbv_0 == tmp_ext_crc_sbv_0;
 //ensures ext_crc_sbv_1 == tmp_ext_crc_sbv_1;
*/
void static sampleExts(void) {
  SWord16 tmp_ext_crc_sbv_0 = crc_sbv(ext_crc_sbv_0_arg0(queue_0, ptr_0));
  SWord16 tmp_ext_crc_sbv_1 = crc_sbv(ext_crc_sbv_1_arg0(queue_0, ptr_0));
  ext_crc_sbv_0 = tmp_ext_crc_sbv_0;
  ext_crc_sbv_1 = tmp_ext_crc_sbv_1;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_chksum())
    chksum(trigger_chksum_arg_0(queue_0, ptr_0),
           trigger_chksum_arg_1(ext_crc_sbv_1, queue_0, ptr_0),
           trigger_chksum_arg_2(queue_1, ptr_1));
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
  tmp_1 = update_state_1(ext_crc_sbv_0, queue_0, ptr_0, queue_1, ptr_1);
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
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
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
