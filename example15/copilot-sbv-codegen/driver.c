/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */
SBool reset;
SBool test2;
SBool test1;

/* Variables */
static SBool tmp_0 = false;
static SBool tmp_1 = false;
static SBool tmp_2 = true;
static SBool tmp_3 = false;
static SBool tmp_4 = true;
static SBool tmp_5 = false;
static SBool tmp_6 = false;
static SBool tmp_7 = false;
static SBool tmp_8 = false;
static SBool tmp_9 = false;
static SBool tmp_10 = false;
static SBool tmp_11 = false;
static SBool tmp_12 = false;
static SBool tmp_13 = false;
static SBool tmp_14 = false;
static SBool tmp_15 = false;
static SBool tmp_16 = false;
static SBool tmp_17 = false;
static SBool tmp_18 = false;
static SBool tmp_19 = false;
static SBool tmp_20 = false;
static SBool tmp_21 = false;
static SBool tmp_22 = false;
static SBool tmp_23 = false;
static SBool tmp_24 = false;
static SBool tmp_25 = false;
static SBool tmp_26 = false;
static SBool tmp_27 = false;
static SBool tmp_28 = false;
static SBool tmp_29 = false;
static SBool tmp_30 = false;
static SBool tmp_31 = false;
static SBool tmp_32 = false;
static SBool tmp_33 = false;
static SBool tmp_34 = false;
static SBool tmp_35 = false;
static SBool tmp_36 = false;
static SBool tmp_37 = false;
static SBool tmp_38 = false;
static SBool tmp_39 = false;
static SBool tmp_40 = false;
static SBool tmp_41 = false;
static SBool tmp_42 = false;
static SBool tmp_43 = false;
static SBool tmp_44 = false;
static SBool queue_0[1] = { false };
static SBool queue_1[4] = { false, false, false, true };
static SBool queue_2[1] = { true };
static SBool queue_3[1] = { false };
static SBool queue_4[6] = { true, false, false, false, false, false };
static SBool queue_5[6] = { false, true, false, false, false, false };
static SBool queue_6[6] = { false, false, true, false, false, false };
static SBool queue_7[6] = { false, false, false, true, false, false };
static SBool queue_8[6] = { false, false, false, false, true, false };
static SBool queue_9[6] = { false, false, false, false, false, true };
static SBool queue_10[1] = { false };
static SBool queue_11[1] = { false };
static SBool queue_12[1] = { false };
static SBool queue_13[1] = { false };
static SBool queue_14[1] = { false };
static SBool queue_15[1] = { false };
static SBool queue_16[1] = { false };
static SBool queue_17[1] = { false };
static SBool queue_18[1] = { false };
static SBool queue_19[1] = { false };
static SBool queue_20[1] = { false };
static SBool queue_21[1] = { false };
static SBool queue_22[1] = { false };
static SBool queue_23[1] = { false };
static SBool queue_24[1] = { false };
static SBool queue_25[1] = { false };
static SBool queue_26[1] = { false };
static SBool queue_27[1] = { false };
static SBool queue_28[1] = { false };
static SBool queue_29[1] = { false };
static SBool queue_30[1] = { false };
static SBool queue_31[1] = { false };
static SBool queue_32[1] = { false };
static SBool queue_33[1] = { false };
static SBool queue_34[1] = { false };
static SBool queue_35[1] = { false };
static SBool queue_36[1] = { false };
static SBool queue_37[1] = { false };
static SBool queue_38[1] = { false };
static SBool queue_39[1] = { false };
static SBool queue_40[1] = { false };
static SBool queue_41[1] = { false };
static SBool queue_42[1] = { false };
static SBool queue_43[1] = { false };
static SBool queue_44[1] = { false };
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
static SWord32 ptr_20 = 0;
static SWord32 ptr_21 = 0;
static SWord32 ptr_22 = 0;
static SWord32 ptr_23 = 0;
static SWord32 ptr_24 = 0;
static SWord32 ptr_25 = 0;
static SWord32 ptr_26 = 0;
static SWord32 ptr_27 = 0;
static SWord32 ptr_28 = 0;
static SWord32 ptr_29 = 0;
static SWord32 ptr_30 = 0;
static SWord32 ptr_31 = 0;
static SWord32 ptr_32 = 0;
static SWord32 ptr_33 = 0;
static SWord32 ptr_34 = 0;
static SWord32 ptr_35 = 0;
static SWord32 ptr_36 = 0;
static SWord32 ptr_37 = 0;
static SWord32 ptr_38 = 0;
static SWord32 ptr_39 = 0;
static SWord32 ptr_40 = 0;
static SWord32 ptr_41 = 0;
static SWord32 ptr_42 = 0;
static SWord32 ptr_43 = 0;
static SWord32 ptr_44 = 0;
static SInt8 ext_e = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_0: ptr_0 < 1 ; 
 global invariant a_pos_ptr_0: ptr_0 >= 0 ; 
 global invariant a_valid_ptr_0: \valid (queue_0 + (0.. 0 ));
 global invariant a_bound_ptr_1: ptr_1 < 4 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 3 ));
 global invariant a_bound_ptr_2: ptr_2 < 1 ; 
 global invariant a_pos_ptr_2: ptr_2 >= 0 ; 
 global invariant a_valid_ptr_2: \valid (queue_2 + (0.. 0 ));
 global invariant a_bound_ptr_3: ptr_3 < 1 ; 
 global invariant a_pos_ptr_3: ptr_3 >= 0 ; 
 global invariant a_valid_ptr_3: \valid (queue_3 + (0.. 0 ));
 global invariant a_bound_ptr_4: ptr_4 < 6 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 5 ));
 global invariant a_bound_ptr_5: ptr_5 < 6 ; 
 global invariant a_pos_ptr_5: ptr_5 >= 0 ; 
 global invariant a_valid_ptr_5: \valid (queue_5 + (0.. 5 ));
 global invariant a_bound_ptr_6: ptr_6 < 6 ; 
 global invariant a_pos_ptr_6: ptr_6 >= 0 ; 
 global invariant a_valid_ptr_6: \valid (queue_6 + (0.. 5 ));
 global invariant a_bound_ptr_7: ptr_7 < 6 ; 
 global invariant a_pos_ptr_7: ptr_7 >= 0 ; 
 global invariant a_valid_ptr_7: \valid (queue_7 + (0.. 5 ));
 global invariant a_bound_ptr_8: ptr_8 < 6 ; 
 global invariant a_pos_ptr_8: ptr_8 >= 0 ; 
 global invariant a_valid_ptr_8: \valid (queue_8 + (0.. 5 ));
 global invariant a_bound_ptr_9: ptr_9 < 6 ; 
 global invariant a_pos_ptr_9: ptr_9 >= 0 ; 
 global invariant a_valid_ptr_9: \valid (queue_9 + (0.. 5 ));
 global invariant a_bound_ptr_10: ptr_10 < 1 ; 
 global invariant a_pos_ptr_10: ptr_10 >= 0 ; 
 global invariant a_valid_ptr_10: \valid (queue_10 + (0.. 0 ));
 global invariant a_bound_ptr_11: ptr_11 < 1 ; 
 global invariant a_pos_ptr_11: ptr_11 >= 0 ; 
 global invariant a_valid_ptr_11: \valid (queue_11 + (0.. 0 ));
 global invariant a_bound_ptr_12: ptr_12 < 1 ; 
 global invariant a_pos_ptr_12: ptr_12 >= 0 ; 
 global invariant a_valid_ptr_12: \valid (queue_12 + (0.. 0 ));
 global invariant a_bound_ptr_13: ptr_13 < 1 ; 
 global invariant a_pos_ptr_13: ptr_13 >= 0 ; 
 global invariant a_valid_ptr_13: \valid (queue_13 + (0.. 0 ));
 global invariant a_bound_ptr_14: ptr_14 < 1 ; 
 global invariant a_pos_ptr_14: ptr_14 >= 0 ; 
 global invariant a_valid_ptr_14: \valid (queue_14 + (0.. 0 ));
 global invariant a_bound_ptr_15: ptr_15 < 1 ; 
 global invariant a_pos_ptr_15: ptr_15 >= 0 ; 
 global invariant a_valid_ptr_15: \valid (queue_15 + (0.. 0 ));
 global invariant a_bound_ptr_16: ptr_16 < 1 ; 
 global invariant a_pos_ptr_16: ptr_16 >= 0 ; 
 global invariant a_valid_ptr_16: \valid (queue_16 + (0.. 0 ));
 global invariant a_bound_ptr_17: ptr_17 < 1 ; 
 global invariant a_pos_ptr_17: ptr_17 >= 0 ; 
 global invariant a_valid_ptr_17: \valid (queue_17 + (0.. 0 ));
 global invariant a_bound_ptr_18: ptr_18 < 1 ; 
 global invariant a_pos_ptr_18: ptr_18 >= 0 ; 
 global invariant a_valid_ptr_18: \valid (queue_18 + (0.. 0 ));
 global invariant a_bound_ptr_19: ptr_19 < 1 ; 
 global invariant a_pos_ptr_19: ptr_19 >= 0 ; 
 global invariant a_valid_ptr_19: \valid (queue_19 + (0.. 0 ));
 global invariant a_bound_ptr_20: ptr_20 < 1 ; 
 global invariant a_pos_ptr_20: ptr_20 >= 0 ; 
 global invariant a_valid_ptr_20: \valid (queue_20 + (0.. 0 ));
 global invariant a_bound_ptr_21: ptr_21 < 1 ; 
 global invariant a_pos_ptr_21: ptr_21 >= 0 ; 
 global invariant a_valid_ptr_21: \valid (queue_21 + (0.. 0 ));
 global invariant a_bound_ptr_22: ptr_22 < 1 ; 
 global invariant a_pos_ptr_22: ptr_22 >= 0 ; 
 global invariant a_valid_ptr_22: \valid (queue_22 + (0.. 0 ));
 global invariant a_bound_ptr_23: ptr_23 < 1 ; 
 global invariant a_pos_ptr_23: ptr_23 >= 0 ; 
 global invariant a_valid_ptr_23: \valid (queue_23 + (0.. 0 ));
 global invariant a_bound_ptr_24: ptr_24 < 1 ; 
 global invariant a_pos_ptr_24: ptr_24 >= 0 ; 
 global invariant a_valid_ptr_24: \valid (queue_24 + (0.. 0 ));
 global invariant a_bound_ptr_25: ptr_25 < 1 ; 
 global invariant a_pos_ptr_25: ptr_25 >= 0 ; 
 global invariant a_valid_ptr_25: \valid (queue_25 + (0.. 0 ));
 global invariant a_bound_ptr_26: ptr_26 < 1 ; 
 global invariant a_pos_ptr_26: ptr_26 >= 0 ; 
 global invariant a_valid_ptr_26: \valid (queue_26 + (0.. 0 ));
 global invariant a_bound_ptr_27: ptr_27 < 1 ; 
 global invariant a_pos_ptr_27: ptr_27 >= 0 ; 
 global invariant a_valid_ptr_27: \valid (queue_27 + (0.. 0 ));
 global invariant a_bound_ptr_28: ptr_28 < 1 ; 
 global invariant a_pos_ptr_28: ptr_28 >= 0 ; 
 global invariant a_valid_ptr_28: \valid (queue_28 + (0.. 0 ));
 global invariant a_bound_ptr_29: ptr_29 < 1 ; 
 global invariant a_pos_ptr_29: ptr_29 >= 0 ; 
 global invariant a_valid_ptr_29: \valid (queue_29 + (0.. 0 ));
 global invariant a_bound_ptr_30: ptr_30 < 1 ; 
 global invariant a_pos_ptr_30: ptr_30 >= 0 ; 
 global invariant a_valid_ptr_30: \valid (queue_30 + (0.. 0 ));
 global invariant a_bound_ptr_31: ptr_31 < 1 ; 
 global invariant a_pos_ptr_31: ptr_31 >= 0 ; 
 global invariant a_valid_ptr_31: \valid (queue_31 + (0.. 0 ));
 global invariant a_bound_ptr_32: ptr_32 < 1 ; 
 global invariant a_pos_ptr_32: ptr_32 >= 0 ; 
 global invariant a_valid_ptr_32: \valid (queue_32 + (0.. 0 ));
 global invariant a_bound_ptr_33: ptr_33 < 1 ; 
 global invariant a_pos_ptr_33: ptr_33 >= 0 ; 
 global invariant a_valid_ptr_33: \valid (queue_33 + (0.. 0 ));
 global invariant a_bound_ptr_34: ptr_34 < 1 ; 
 global invariant a_pos_ptr_34: ptr_34 >= 0 ; 
 global invariant a_valid_ptr_34: \valid (queue_34 + (0.. 0 ));
 global invariant a_bound_ptr_35: ptr_35 < 1 ; 
 global invariant a_pos_ptr_35: ptr_35 >= 0 ; 
 global invariant a_valid_ptr_35: \valid (queue_35 + (0.. 0 ));
 global invariant a_bound_ptr_36: ptr_36 < 1 ; 
 global invariant a_pos_ptr_36: ptr_36 >= 0 ; 
 global invariant a_valid_ptr_36: \valid (queue_36 + (0.. 0 ));
 global invariant a_bound_ptr_37: ptr_37 < 1 ; 
 global invariant a_pos_ptr_37: ptr_37 >= 0 ; 
 global invariant a_valid_ptr_37: \valid (queue_37 + (0.. 0 ));
 global invariant a_bound_ptr_38: ptr_38 < 1 ; 
 global invariant a_pos_ptr_38: ptr_38 >= 0 ; 
 global invariant a_valid_ptr_38: \valid (queue_38 + (0.. 0 ));
 global invariant a_bound_ptr_39: ptr_39 < 1 ; 
 global invariant a_pos_ptr_39: ptr_39 >= 0 ; 
 global invariant a_valid_ptr_39: \valid (queue_39 + (0.. 0 ));
 global invariant a_bound_ptr_40: ptr_40 < 1 ; 
 global invariant a_pos_ptr_40: ptr_40 >= 0 ; 
 global invariant a_valid_ptr_40: \valid (queue_40 + (0.. 0 ));
 global invariant a_bound_ptr_41: ptr_41 < 1 ; 
 global invariant a_pos_ptr_41: ptr_41 >= 0 ; 
 global invariant a_valid_ptr_41: \valid (queue_41 + (0.. 0 ));
 global invariant a_bound_ptr_42: ptr_42 < 1 ; 
 global invariant a_pos_ptr_42: ptr_42 >= 0 ; 
 global invariant a_valid_ptr_42: \valid (queue_42 + (0.. 0 ));
 global invariant a_bound_ptr_43: ptr_43 < 1 ; 
 global invariant a_pos_ptr_43: ptr_43 >= 0 ; 
 global invariant a_valid_ptr_43: \valid (queue_43 + (0.. 0 ));
 global invariant a_bound_ptr_44: ptr_44 < 1 ; 
 global invariant a_pos_ptr_44: ptr_44 >= 0 ; 
 global invariant a_valid_ptr_44: \valid (queue_44 + (0.. 0 ));
*/

/*@
 assigns ext_e;
 //ensures ext_e == e;
*/
void static sampleExts(void) {
  ext_e = e;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
}

/*@
 assigns reset;
 assigns test1;
 assigns test2;
 */
void static updateObservers(void) {
  reset = observer_reset(queue_0, ptr_0);
  test1 = observer_test1(queue_2, ptr_2, queue_0, ptr_0, queue_27, ptr_27, queue_28, ptr_28, queue_29, ptr_29, queue_30, ptr_30, queue_31, ptr_31, queue_32, ptr_32, queue_33, ptr_33, queue_34, ptr_34, queue_37, ptr_37, queue_38, ptr_38, queue_35, ptr_35, queue_36, ptr_36, queue_39, ptr_39, queue_40, ptr_40, queue_41, ptr_41, queue_42, ptr_42, queue_43, ptr_43, queue_44, ptr_44);
  test2 = observer_test2(queue_2, ptr_2, queue_3, ptr_3, queue_10, ptr_10, queue_11, ptr_11, queue_12, ptr_12, queue_13, ptr_13, queue_14, ptr_14, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26);
}

/*@
 assigns tmp_1;
 assigns tmp_0;
 assigns tmp_2;
 assigns tmp_9;
 assigns tmp_8;
 assigns tmp_7;
 assigns tmp_6;
 assigns tmp_5;
 assigns tmp_4;
 assigns tmp_3;
 assigns tmp_10;
 assigns tmp_11;
 assigns tmp_12;
 assigns tmp_13;
 assigns tmp_14;
 assigns tmp_15;
 assigns tmp_16;
 assigns tmp_17;
 assigns tmp_18;
 assigns tmp_19;
 assigns tmp_20;
 assigns tmp_26;
 assigns tmp_25;
 assigns tmp_24;
 assigns tmp_23;
 assigns tmp_22;
 assigns tmp_21;
 assigns tmp_27;
 assigns tmp_28;
 assigns tmp_29;
 assigns tmp_30;
 assigns tmp_31;
 assigns tmp_32;
 assigns tmp_33;
 assigns tmp_35;
 assigns tmp_37;
 assigns tmp_38;
 assigns tmp_36;
 assigns tmp_34;
 assigns tmp_39;
 assigns tmp_40;
 assigns tmp_41;
 assigns tmp_42;
 assigns tmp_43;
 assigns tmp_44;
 */
void static updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_0 = update_state_0(queue_1, ptr_1);
  tmp_2 = update_state_2();
  tmp_9 = update_state_9(queue_4, ptr_4);
  tmp_8 = update_state_8(queue_9, ptr_9);
  tmp_7 = update_state_7(queue_8, ptr_8);
  tmp_6 = update_state_6(queue_7, ptr_7);
  tmp_5 = update_state_5(queue_6, ptr_6);
  tmp_4 = update_state_4(queue_5, ptr_5);
  tmp_3 = update_state_3(queue_4, ptr_4, queue_2, ptr_2);
  tmp_10 = update_state_10(queue_5, ptr_5, queue_3, ptr_3);
  tmp_11 = update_state_11(queue_6, ptr_6, queue_10, ptr_10);
  tmp_12 = update_state_12(queue_7, ptr_7, queue_11, ptr_11);
  tmp_13 = update_state_13(queue_8, ptr_8, queue_12, ptr_12);
  tmp_14 = update_state_14(queue_9, ptr_9, queue_13, ptr_13);
  tmp_15 = update_state_15(queue_4, ptr_4, queue_14, ptr_14);
  tmp_16 = update_state_16(queue_5, ptr_5, queue_14, ptr_14);
  tmp_17 = update_state_17(queue_6, ptr_6, queue_14, ptr_14);
  tmp_18 = update_state_18(queue_7, ptr_7, queue_14, ptr_14);
  tmp_19 = update_state_19(queue_8, ptr_8, queue_14, ptr_14);
  tmp_20 = update_state_20(queue_9, ptr_9, queue_14, ptr_14);
  tmp_26 = update_state_26(queue_9, ptr_9, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_25 = update_state_25(queue_8, ptr_8, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_24 = update_state_24(queue_7, ptr_7, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_23 = update_state_23(queue_6, ptr_6, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_22 = update_state_22(queue_5, ptr_5, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_21 = update_state_21(queue_4, ptr_4, queue_21, ptr_21, queue_22, ptr_22, queue_23, ptr_23, queue_24, ptr_24, queue_25, ptr_25, queue_26, ptr_26, queue_15, ptr_15, queue_16, ptr_16, queue_17, ptr_17, queue_18, ptr_18, queue_19, ptr_19, queue_20, ptr_20);
  tmp_27 = update_state_27(ext_e);
  tmp_28 = update_state_28(ext_e, queue_2, ptr_2);
  tmp_29 = update_state_29(ext_e);
  tmp_30 = update_state_30(ext_e, queue_2, ptr_2, queue_0, ptr_0, queue_27, ptr_27, queue_28, ptr_28);
  tmp_31 = update_state_31(ext_e);
  tmp_32 = update_state_32(ext_e, queue_2, ptr_2, queue_0, ptr_0, queue_29, ptr_29, queue_30, ptr_30, queue_27, ptr_27, queue_28, ptr_28);
  tmp_33 = update_state_33();
  tmp_35 = update_state_35();
  tmp_37 = update_state_37();
  tmp_38 = update_state_38(ext_e, queue_0, ptr_0, queue_33, ptr_33, queue_34, ptr_34, queue_35, ptr_35, queue_36, ptr_36, queue_31, ptr_31, queue_32, ptr_32);
  tmp_36 = update_state_36(ext_e, queue_0, ptr_0, queue_37, ptr_37, queue_38, ptr_38, queue_33, ptr_33, queue_34, ptr_34, queue_35, ptr_35, queue_36, ptr_36, queue_31, ptr_31, queue_32, ptr_32);
  tmp_34 = update_state_34(ext_e, queue_0, ptr_0, queue_35, ptr_35, queue_36, ptr_36, queue_31, ptr_31, queue_32, ptr_32);
  tmp_39 = update_state_39(ext_e);
  tmp_40 = update_state_40(ext_e, queue_2, ptr_2);
  tmp_41 = update_state_41(ext_e);
  tmp_42 = update_state_42(ext_e, queue_2, ptr_2, queue_0, ptr_0, queue_39, ptr_39, queue_40, ptr_40);
  tmp_43 = update_state_43();
  tmp_44 = update_state_44(ext_e, queue_0, ptr_0, queue_43, ptr_43, queue_44, ptr_44, queue_41, ptr_41, queue_42, ptr_42);
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
 assigns queue_20[ptr_20];
 ensures queue_20[ptr_20] == tmp_20;
 assigns queue_21[ptr_21];
 ensures queue_21[ptr_21] == tmp_21;
 assigns queue_22[ptr_22];
 ensures queue_22[ptr_22] == tmp_22;
 assigns queue_23[ptr_23];
 ensures queue_23[ptr_23] == tmp_23;
 assigns queue_24[ptr_24];
 ensures queue_24[ptr_24] == tmp_24;
 assigns queue_25[ptr_25];
 ensures queue_25[ptr_25] == tmp_25;
 assigns queue_26[ptr_26];
 ensures queue_26[ptr_26] == tmp_26;
 assigns queue_27[ptr_27];
 ensures queue_27[ptr_27] == tmp_27;
 assigns queue_28[ptr_28];
 ensures queue_28[ptr_28] == tmp_28;
 assigns queue_29[ptr_29];
 ensures queue_29[ptr_29] == tmp_29;
 assigns queue_30[ptr_30];
 ensures queue_30[ptr_30] == tmp_30;
 assigns queue_31[ptr_31];
 ensures queue_31[ptr_31] == tmp_31;
 assigns queue_32[ptr_32];
 ensures queue_32[ptr_32] == tmp_32;
 assigns queue_33[ptr_33];
 ensures queue_33[ptr_33] == tmp_33;
 assigns queue_34[ptr_34];
 ensures queue_34[ptr_34] == tmp_34;
 assigns queue_35[ptr_35];
 ensures queue_35[ptr_35] == tmp_35;
 assigns queue_36[ptr_36];
 ensures queue_36[ptr_36] == tmp_36;
 assigns queue_37[ptr_37];
 ensures queue_37[ptr_37] == tmp_37;
 assigns queue_38[ptr_38];
 ensures queue_38[ptr_38] == tmp_38;
 assigns queue_39[ptr_39];
 ensures queue_39[ptr_39] == tmp_39;
 assigns queue_40[ptr_40];
 ensures queue_40[ptr_40] == tmp_40;
 assigns queue_41[ptr_41];
 ensures queue_41[ptr_41] == tmp_41;
 assigns queue_42[ptr_42];
 ensures queue_42[ptr_42] == tmp_42;
 assigns queue_43[ptr_43];
 ensures queue_43[ptr_43] == tmp_43;
 assigns queue_44[ptr_44];
 ensures queue_44[ptr_44] == tmp_44;
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
  queue_20[ptr_20] = tmp_20;
  queue_21[ptr_21] = tmp_21;
  queue_22[ptr_22] = tmp_22;
  queue_23[ptr_23] = tmp_23;
  queue_24[ptr_24] = tmp_24;
  queue_25[ptr_25] = tmp_25;
  queue_26[ptr_26] = tmp_26;
  queue_27[ptr_27] = tmp_27;
  queue_28[ptr_28] = tmp_28;
  queue_29[ptr_29] = tmp_29;
  queue_30[ptr_30] = tmp_30;
  queue_31[ptr_31] = tmp_31;
  queue_32[ptr_32] = tmp_32;
  queue_33[ptr_33] = tmp_33;
  queue_34[ptr_34] = tmp_34;
  queue_35[ptr_35] = tmp_35;
  queue_36[ptr_36] = tmp_36;
  queue_37[ptr_37] = tmp_37;
  queue_38[ptr_38] = tmp_38;
  queue_39[ptr_39] = tmp_39;
  queue_40[ptr_40] = tmp_40;
  queue_41[ptr_41] = tmp_41;
  queue_42[ptr_42] = tmp_42;
  queue_43[ptr_43] = tmp_43;
  queue_44[ptr_44] = tmp_44;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 4;
 assigns ptr_2;
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 1;
 assigns ptr_3;
 ensures ptr_3 == (\old (ptr_3 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 6;
 assigns ptr_5;
 ensures ptr_5 == (\old (ptr_5 ) + 1) % 6;
 assigns ptr_6;
 ensures ptr_6 == (\old (ptr_6 ) + 1) % 6;
 assigns ptr_7;
 ensures ptr_7 == (\old (ptr_7 ) + 1) % 6;
 assigns ptr_8;
 ensures ptr_8 == (\old (ptr_8 ) + 1) % 6;
 assigns ptr_9;
 ensures ptr_9 == (\old (ptr_9 ) + 1) % 6;
 assigns ptr_10;
 ensures ptr_10 == (\old (ptr_10 ) + 1) % 1;
 assigns ptr_11;
 ensures ptr_11 == (\old (ptr_11 ) + 1) % 1;
 assigns ptr_12;
 ensures ptr_12 == (\old (ptr_12 ) + 1) % 1;
 assigns ptr_13;
 ensures ptr_13 == (\old (ptr_13 ) + 1) % 1;
 assigns ptr_14;
 ensures ptr_14 == (\old (ptr_14 ) + 1) % 1;
 assigns ptr_15;
 ensures ptr_15 == (\old (ptr_15 ) + 1) % 1;
 assigns ptr_16;
 ensures ptr_16 == (\old (ptr_16 ) + 1) % 1;
 assigns ptr_17;
 ensures ptr_17 == (\old (ptr_17 ) + 1) % 1;
 assigns ptr_18;
 ensures ptr_18 == (\old (ptr_18 ) + 1) % 1;
 assigns ptr_19;
 ensures ptr_19 == (\old (ptr_19 ) + 1) % 1;
 assigns ptr_20;
 ensures ptr_20 == (\old (ptr_20 ) + 1) % 1;
 assigns ptr_21;
 ensures ptr_21 == (\old (ptr_21 ) + 1) % 1;
 assigns ptr_22;
 ensures ptr_22 == (\old (ptr_22 ) + 1) % 1;
 assigns ptr_23;
 ensures ptr_23 == (\old (ptr_23 ) + 1) % 1;
 assigns ptr_24;
 ensures ptr_24 == (\old (ptr_24 ) + 1) % 1;
 assigns ptr_25;
 ensures ptr_25 == (\old (ptr_25 ) + 1) % 1;
 assigns ptr_26;
 ensures ptr_26 == (\old (ptr_26 ) + 1) % 1;
 assigns ptr_27;
 ensures ptr_27 == (\old (ptr_27 ) + 1) % 1;
 assigns ptr_28;
 ensures ptr_28 == (\old (ptr_28 ) + 1) % 1;
 assigns ptr_29;
 ensures ptr_29 == (\old (ptr_29 ) + 1) % 1;
 assigns ptr_30;
 ensures ptr_30 == (\old (ptr_30 ) + 1) % 1;
 assigns ptr_31;
 ensures ptr_31 == (\old (ptr_31 ) + 1) % 1;
 assigns ptr_32;
 ensures ptr_32 == (\old (ptr_32 ) + 1) % 1;
 assigns ptr_33;
 ensures ptr_33 == (\old (ptr_33 ) + 1) % 1;
 assigns ptr_34;
 ensures ptr_34 == (\old (ptr_34 ) + 1) % 1;
 assigns ptr_35;
 ensures ptr_35 == (\old (ptr_35 ) + 1) % 1;
 assigns ptr_36;
 ensures ptr_36 == (\old (ptr_36 ) + 1) % 1;
 assigns ptr_37;
 ensures ptr_37 == (\old (ptr_37 ) + 1) % 1;
 assigns ptr_38;
 ensures ptr_38 == (\old (ptr_38 ) + 1) % 1;
 assigns ptr_39;
 ensures ptr_39 == (\old (ptr_39 ) + 1) % 1;
 assigns ptr_40;
 ensures ptr_40 == (\old (ptr_40 ) + 1) % 1;
 assigns ptr_41;
 ensures ptr_41 == (\old (ptr_41 ) + 1) % 1;
 assigns ptr_42;
 ensures ptr_42 == (\old (ptr_42 ) + 1) % 1;
 assigns ptr_43;
 ensures ptr_43 == (\old (ptr_43 ) + 1) % 1;
 assigns ptr_44;
 ensures ptr_44 == (\old (ptr_44 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 4;
  ptr_2 = (ptr_2 + 1) % 1;
  ptr_3 = (ptr_3 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 6;
  ptr_5 = (ptr_5 + 1) % 6;
  ptr_6 = (ptr_6 + 1) % 6;
  ptr_7 = (ptr_7 + 1) % 6;
  ptr_8 = (ptr_8 + 1) % 6;
  ptr_9 = (ptr_9 + 1) % 6;
  ptr_10 = (ptr_10 + 1) % 1;
  ptr_11 = (ptr_11 + 1) % 1;
  ptr_12 = (ptr_12 + 1) % 1;
  ptr_13 = (ptr_13 + 1) % 1;
  ptr_14 = (ptr_14 + 1) % 1;
  ptr_15 = (ptr_15 + 1) % 1;
  ptr_16 = (ptr_16 + 1) % 1;
  ptr_17 = (ptr_17 + 1) % 1;
  ptr_18 = (ptr_18 + 1) % 1;
  ptr_19 = (ptr_19 + 1) % 1;
  ptr_20 = (ptr_20 + 1) % 1;
  ptr_21 = (ptr_21 + 1) % 1;
  ptr_22 = (ptr_22 + 1) % 1;
  ptr_23 = (ptr_23 + 1) % 1;
  ptr_24 = (ptr_24 + 1) % 1;
  ptr_25 = (ptr_25 + 1) % 1;
  ptr_26 = (ptr_26 + 1) % 1;
  ptr_27 = (ptr_27 + 1) % 1;
  ptr_28 = (ptr_28 + 1) % 1;
  ptr_29 = (ptr_29 + 1) % 1;
  ptr_30 = (ptr_30 + 1) % 1;
  ptr_31 = (ptr_31 + 1) % 1;
  ptr_32 = (ptr_32 + 1) % 1;
  ptr_33 = (ptr_33 + 1) % 1;
  ptr_34 = (ptr_34 + 1) % 1;
  ptr_35 = (ptr_35 + 1) % 1;
  ptr_36 = (ptr_36 + 1) % 1;
  ptr_37 = (ptr_37 + 1) % 1;
  ptr_38 = (ptr_38 + 1) % 1;
  ptr_39 = (ptr_39 + 1) % 1;
  ptr_40 = (ptr_40 + 1) % 1;
  ptr_41 = (ptr_41 + 1) % 1;
  ptr_42 = (ptr_42 + 1) % 1;
  ptr_43 = (ptr_43 + 1) % 1;
  ptr_44 = (ptr_44 + 1) % 1;
}
/* Idents */

/*@
 assigns \nothing;
 */
SBool ident_bool(SBool a) {return a;}
/*@
 assigns \nothing;
 */
SWord8 ident_word8(SWord8 a) {return a;}
/*@
 assigns \nothing;
 */
SWord16 ident_word16(SWord16 a) {return a;}
/*@
 assigns \nothing;
 */
SWord32 ident_word32(SWord32 a) {return a;}
/*@
 assigns \nothing;
 */
SWord64 ident_word64(SWord64 a) {return a;}
/*@
 assigns \nothing;
 */
SInt8 ident_int8(SInt8 a) {return a;}
/*@
 assigns \nothing;
 */
SInt16 ident_int16(SInt16 a) {return a;}
/*@
 assigns \nothing;
 */
SInt32 ident_int32(SInt32 a) {return a;}
/*@
 assigns \nothing;
 */
SInt64 ident_int64(SInt64 a) {return a;}
/*@
 assigns \nothing;
 */
SFloat ident_float(SFloat a) {return a;}
/*@
 assigns \nothing;
 */
SDouble ident_double(SDouble a) {return a;}

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
