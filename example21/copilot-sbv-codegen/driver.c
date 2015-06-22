/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <stdint.h>
#include "internal.h"
#include "copilot.h"

/* Observers */
SBool obs8;
SBool obs7;
SBool obs6;
SBool obs5;
SBool obs4;
SBool obs3;
SBool obs2;
SBool obs1;
SBool obs0;
SBool done;
SBool sat;

/* Variables */
static SBool tmp_0 = true;
static SBool tmp_1 = true;
static SBool tmp_2 = true;
static SBool tmp_3 = true;
static SBool tmp_4 = true;
static SBool tmp_5 = true;
static SBool tmp_6 = true;
static SBool tmp_7 = true;
static SBool tmp_8 = true;
static SWord64 tmp_9 = 1;
static SBool tmp_10 = false;
static SBool tmp_11 = true;
static SBool tmp_12 = true;
static SBool tmp_13 = true;
static SBool tmp_14 = true;
static SBool tmp_15 = true;
static SBool tmp_16 = true;
static SBool tmp_17 = true;
static SBool tmp_18 = true;
static SBool tmp_19 = true;
static SBool queue_0[2] = { true, false };
static SBool queue_1[4] = { true, false, false, false };
static SBool queue_2[8] = { true, false, false, false, false, false, false, false };
static SBool queue_3[16] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_4[32] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_5[64] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_6[128] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_7[256] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_8[512] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SWord64 queue_9[1] = { 1 };
static SBool queue_10[1] = { false };
static SBool queue_11[512] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_12[256] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_13[128] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_14[64] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_15[32] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_16[16] = { true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
static SBool queue_17[8] = { true, false, false, false, false, false, false, false };
static SBool queue_18[4] = { true, false, false, false };
static SBool queue_19[2] = { true, false };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;
static SWord32 ptr_3 = 0;
static SWord32 ptr_4 = 0;
static SWord32 ptr_5 = 0;
static SWord32 ptr_6 = 0;
static SWord32 ptr_7 = 0;
static SWord32 ptr_8 = 0;
static SWord32 ptr_9 = 0;
static SWord32 ptr_10 = 0;
static SWord32 ptr_11 = 0;
static SWord32 ptr_12 = 0;
static SWord32 ptr_13 = 0;
static SWord32 ptr_14 = 0;
static SWord32 ptr_15 = 0;
static SWord32 ptr_16 = 0;
static SWord32 ptr_17 = 0;
static SWord32 ptr_18 = 0;
static SWord32 ptr_19 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 2 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 1 ));
 global invariant a_bound_ptr_1: ptr_1 < 4 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 3 ));
 global invariant a_bound_ptr_2: ptr_2 < 8 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 7 ));
 global invariant a_bound_ptr_3: ptr_3 < 16 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 15 ));
 global invariant a_bound_ptr_4: ptr_4 < 32 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 31 ));
 global invariant a_bound_ptr_5: ptr_5 < 64 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 63 ));
 global invariant a_bound_ptr_6: ptr_6 < 128 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 127 ));
 global invariant a_bound_ptr_7: ptr_7 < 256 ; 
 global invariant a_pos_ptr_7: ptr_7 >= 0 ; 
 global invariant a_valid_ptr_7: \valid (queue_7 + (0.. 255 ));
 global invariant a_bound_ptr_8: ptr_8 < 512 ; 
 global invariant a_pos_ptr_8: ptr_8 >= 0 ; 
 global invariant a_valid_ptr_8: \valid (queue_8 + (0.. 511 ));
 global invariant a_bound_ptr_9: ptr_9 < 1 ; 
 global invariant a_pos_ptr_9: ptr_9 >= 0 ; 
 global invariant a_valid_ptr_9: \valid (queue_9 + (0.. 0 ));
 global invariant a_bound_ptr_10: ptr_10 < 1 ; 
 global invariant a_pos_ptr_10: ptr_10 >= 0 ; 
 global invariant a_valid_ptr_10: \valid (queue_10 + (0.. 0 ));
 global invariant a_bound_ptr_11: ptr_11 < 512 ; 
 global invariant a_pos_ptr_11: ptr_11 >= 0 ; 
 global invariant a_valid_ptr_11: \valid (queue_11 + (0.. 511 ));
 global invariant a_bound_ptr_12: ptr_12 < 256 ; 
 global invariant a_pos_ptr_12: ptr_12 >= 0 ; 
 global invariant a_valid_ptr_12: \valid (queue_12 + (0.. 255 ));
 global invariant a_bound_ptr_13: ptr_13 < 128 ; 
 global invariant a_pos_ptr_13: ptr_13 >= 0 ; 
 global invariant a_valid_ptr_13: \valid (queue_13 + (0.. 127 ));
 global invariant a_bound_ptr_14: ptr_14 < 64 ; 
 global invariant a_pos_ptr_14: ptr_14 >= 0 ; 
 global invariant a_valid_ptr_14: \valid (queue_14 + (0.. 63 ));
 global invariant a_bound_ptr_15: ptr_15 < 32 ; 
 global invariant a_pos_ptr_15: ptr_15 >= 0 ; 
 global invariant a_valid_ptr_15: \valid (queue_15 + (0.. 31 ));
 global invariant a_bound_ptr_16: ptr_16 < 16 ; 
 global invariant a_pos_ptr_16: ptr_16 >= 0 ; 
 global invariant a_valid_ptr_16: \valid (queue_16 + (0.. 15 ));
 global invariant a_bound_ptr_17: ptr_17 < 8 ; 
 global invariant a_pos_ptr_17: ptr_17 >= 0 ; 
 global invariant a_valid_ptr_17: \valid (queue_17 + (0.. 7 ));
 global invariant a_bound_ptr_18: ptr_18 < 4 ; 
 global invariant a_pos_ptr_18: ptr_18 >= 0 ; 
 global invariant a_valid_ptr_18: \valid (queue_18 + (0.. 3 ));
 global invariant a_bound_ptr_19: ptr_19 < 2 ; 
 global invariant a_pos_ptr_19: ptr_19 >= 0 ; 
 global invariant a_valid_ptr_19: \valid (queue_19 + (0.. 1 ));
*/

/*@
 assigns \nothing;
*/
void static sampleExts(void) {
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
}

/*@
 assigns done;
 assigns obs0;
 assigns obs1;
 assigns obs2;
 assigns obs3;
 assigns obs4;
 assigns obs5;
 assigns obs6;
 assigns obs7;
 assigns obs8;
 assigns sat;
 */
void static updateObservers(void) {
  done = observer_done(queue_9, ptr_9);
  obs0 = observer_obs0(queue_8, ptr_8);
  obs1 = observer_obs1(queue_7, ptr_7);
  obs2 = observer_obs2(queue_6, ptr_6);
  obs3 = observer_obs3(queue_5, ptr_5);
  obs4 = observer_obs4(queue_4, ptr_4);
  obs5 = observer_obs5(queue_3, ptr_3);
  obs6 = observer_obs6(queue_2, ptr_2);
  obs7 = observer_obs7(queue_1, ptr_1);
  obs8 = observer_obs8(queue_0, ptr_0);
  sat = observer_sat(queue_10, ptr_10);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 assigns tmp_3;
 assigns tmp_4;
 assigns tmp_5;
 assigns tmp_6;
 assigns tmp_7;
 assigns tmp_8;
 assigns tmp_9;
 assigns tmp_11;
 assigns tmp_12;
 assigns tmp_13;
 assigns tmp_14;
 assigns tmp_15;
 assigns tmp_16;
 assigns tmp_17;
 assigns tmp_18;
 assigns tmp_19;
 assigns tmp_10;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_2 = update_state_2(queue_2, ptr_2);
  tmp_3 = update_state_3(queue_3, ptr_3);
  tmp_4 = update_state_4(queue_4, ptr_4);
  tmp_5 = update_state_5(queue_5, ptr_5);
  tmp_6 = update_state_6(queue_6, ptr_6);
  tmp_7 = update_state_7(queue_7, ptr_7);
  tmp_8 = update_state_8(queue_8, ptr_8);
  tmp_9 = update_state_9(queue_9, ptr_9);
  tmp_11 = update_state_11(queue_11, ptr_11);
  tmp_12 = update_state_12(queue_12, ptr_12);
  tmp_13 = update_state_13(queue_13, ptr_13);
  tmp_14 = update_state_14(queue_14, ptr_14);
  tmp_15 = update_state_15(queue_15, ptr_15);
  tmp_16 = update_state_16(queue_16, ptr_16);
  tmp_17 = update_state_17(queue_17, ptr_17);
  tmp_18 = update_state_18(queue_18, ptr_18);
  tmp_19 = update_state_19(queue_19, ptr_19);
  tmp_10 = update_state_10(queue_11, ptr_11, queue_12, ptr_12, queue_13, ptr_13, queue_14, ptr_14, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_10, ptr_10);
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
 assigns queue_7[ptr_7];
 ensures queue_7[ptr_7] == tmp_7;
 assigns queue_8[ptr_8];
 ensures queue_8[ptr_8] == tmp_8;
 assigns queue_9[ptr_9];
 ensures queue_9[ptr_9] == tmp_9;
 assigns queue_10[ptr_10];
 ensures queue_10[ptr_10] == tmp_10;
 assigns queue_11[ptr_11];
 ensures queue_11[ptr_11] == tmp_11;
 assigns queue_12[ptr_12];
 ensures queue_12[ptr_12] == tmp_12;
 assigns queue_13[ptr_13];
 ensures queue_13[ptr_13] == tmp_13;
 assigns queue_14[ptr_14];
 ensures queue_14[ptr_14] == tmp_14;
 assigns queue_15[ptr_15];
 ensures queue_15[ptr_15] == tmp_15;
 assigns queue_16[ptr_16];
 ensures queue_16[ptr_16] == tmp_16;
 assigns queue_17[ptr_17];
 ensures queue_17[ptr_17] == tmp_17;
 assigns queue_18[ptr_18];
 ensures queue_18[ptr_18] == tmp_18;
 assigns queue_19[ptr_19];
 ensures queue_19[ptr_19] == tmp_19;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
  queue_3[ptr_3] = tmp_3;
  queue_4[ptr_4] = tmp_4;
  queue_5[ptr_5] = tmp_5;
  queue_6[ptr_6] = tmp_6;
  queue_7[ptr_7] = tmp_7;
  queue_8[ptr_8] = tmp_8;
  queue_9[ptr_9] = tmp_9;
  queue_10[ptr_10] = tmp_10;
  queue_11[ptr_11] = tmp_11;
  queue_12[ptr_12] = tmp_12;
  queue_13[ptr_13] = tmp_13;
  queue_14[ptr_14] = tmp_14;
  queue_15[ptr_15] = tmp_15;
  queue_16[ptr_16] = tmp_16;
  queue_17[ptr_17] = tmp_17;
  queue_18[ptr_18] = tmp_18;
  queue_19[ptr_19] = tmp_19;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 2;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 4;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 8;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 16;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 32;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 64;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 128;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 256;
 assigns ptr_8;
 ensures ptr_8 == (\old (ptr_8 ) + 1) % 512;
 assigns ptr_9;
 ensures ptr_9 == (\old (ptr_9 ) + 1) % 1;
 assigns ptr_10;
 ensures ptr_10 == (\old (ptr_10 ) + 1) % 1;
 assigns ptr_11;
 ensures ptr_11 == (\old (ptr_11 ) + 1) % 512;
 assigns ptr_12;
 ensures ptr_12 == (\old (ptr_12 ) + 1) % 256;
 assigns ptr_13;
 ensures ptr_13 == (\old (ptr_13 ) + 1) % 128;
 assigns ptr_14;
 ensures ptr_14 == (\old (ptr_14 ) + 1) % 64;
 assigns ptr_15;
 ensures ptr_15 == (\old (ptr_15 ) + 1) % 32;
 assigns ptr_16;
 ensures ptr_16 == (\old (ptr_16 ) + 1) % 16;
 assigns ptr_17;
 ensures ptr_17 == (\old (ptr_17 ) + 1) % 8;
 assigns ptr_18;
 ensures ptr_18 == (\old (ptr_18 ) + 1) % 4;
 assigns ptr_19;
 ensures ptr_19 == (\old (ptr_19 ) + 1) % 2;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 2;
  ptr_1 = (ptr_1 + 1) % 4;
  ptr_2 = (ptr_2 + 1) % 8;
  ptr_3 = (ptr_3 + 1) % 16;
  ptr_4 = (ptr_4 + 1) % 32;
  ptr_5 = (ptr_5 + 1) % 64;
  ptr_6 = (ptr_6 + 1) % 128;
  ptr_7 = (ptr_7 + 1) % 256;
  ptr_8 = (ptr_8 + 1) % 512;
  ptr_9 = (ptr_9 + 1) % 1;
  ptr_10 = (ptr_10 + 1) % 1;
  ptr_11 = (ptr_11 + 1) % 512;
  ptr_12 = (ptr_12 + 1) % 256;
  ptr_13 = (ptr_13 + 1) % 128;
  ptr_14 = (ptr_14 + 1) % 64;
  ptr_15 = (ptr_15 + 1) % 32;
  ptr_16 = (ptr_16 + 1) % 16;
  ptr_17 = (ptr_17 + 1) % 8;
  ptr_18 = (ptr_18 + 1) % 4;
  ptr_19 = (ptr_19 + 1) % 2;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
