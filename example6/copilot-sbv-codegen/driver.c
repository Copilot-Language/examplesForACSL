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
SWord16 tmp_0 = 1;
SWord16 tmp_1 = 0;
SWord16 queue_0[1] = { 1 };
SWord16 queue_1[1] = { 0 };
SWord32 ptr_0 = 0;
SWord32 ptr_1 = 0;
SWord16 ext_crc_sbv_0 = 0;
SWord16 ext_crc_sbv_1 = 0;
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
 //ensures ext_crc_sbv_0 == tmp_crc_sbv;
 //ensures ext_crc_sbv_1 == tmp_crc_sbv;
*/
void sampleExts(void) {
  SWord16 tmp_crc_sbv = crc_sbv(ext_crc_sbv_0_arg0(queue_0, ptr_0));
  ext_crc_sbv_0 = tmp_crc_sbv;
  SWord16 tmp_crc_sbv = crc_sbv(ext_crc_sbv_1_arg0(queue_0, ptr_0));
  ext_crc_sbv_1 = tmp_crc_sbv;
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
  if (trigger_guard_chksum())
    chksum(trigger_chksum_arg_0(queue_0, ptr_0),
           trigger_chksum_arg_1(ext_crc_sbv_1, queue_0, ptr_0),
           trigger_chksum_arg_2(queue_1, ptr_1));
}

/*@
 assigns \nothing;
 */
void updateObservers(void) {
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 */
void updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(ext_crc_sbv_0, queue_0, ptr_0, queue_1, ptr_1);
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
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 */
void updatePtrs(void) {
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
