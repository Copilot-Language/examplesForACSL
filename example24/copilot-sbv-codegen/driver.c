/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SWord32 tmp_1 = 0;
static SWord32 tmp_4 = 0;
static SWord32 tmp_8 = 0;
static SWord32 tmp_12 = 0;
static SWord32 tmp_16 = 1;
static SWord32 tmp_20 = 1;
static SWord32 tmp_24 = 1;
static SWord32 tmp_28 = 1;
static SWord32 tmp_32 = 1;
static SWord32 tmp_36 = 1;
static SWord32 tmp_40 = 1;
static SWord32 tmp_44 = 1;
static SWord32 tmp_48 = 1;
static SWord32 tmp_52 = 1;
static SWord32 tmp_56 = 1;
static SWord32 tmp_60 = 1;
static SWord32 tmp_64 = 1;
static SWord32 tmp_68 = 1;
static SWord32 tmp_72 = 1;
static SWord32 tmp_76 = 1;
static SWord32 tmp_80 = 1;
static SWord32 tmp_84 = 1;
static SWord32 tmp_88 = 1;
static SWord32 tmp_92 = 1;
static SWord32 tmp_96 = 1;
static SWord32 tmp_100 = 1;
static SWord32 queue_1[1] = { 0 };
static SWord32 queue_4[1] = { 0 };
static SWord32 queue_8[1] = { 0 };
static SWord32 queue_12[1] = { 0 };
static SWord32 queue_16[1] = { 1 };
static SWord32 queue_20[1] = { 1 };
static SWord32 queue_24[1] = { 1 };
static SWord32 queue_28[1] = { 1 };
static SWord32 queue_32[1] = { 1 };
static SWord32 queue_36[1] = { 1 };
static SWord32 queue_40[1] = { 1 };
static SWord32 queue_44[1] = { 1 };
static SWord32 queue_48[1] = { 1 };
static SWord32 queue_52[1] = { 1 };
static SWord32 queue_56[1] = { 1 };
static SWord32 queue_60[1] = { 1 };
static SWord32 queue_64[1] = { 1 };
static SWord32 queue_68[1] = { 1 };
static SWord32 queue_72[1] = { 1 };
static SWord32 queue_76[1] = { 1 };
static SWord32 queue_80[1] = { 1 };
static SWord32 queue_84[1] = { 1 };
static SWord32 queue_88[1] = { 1 };
static SWord32 queue_92[1] = { 1 };
static SWord32 queue_96[1] = { 1 };
static SWord32 queue_100[1] = { 1 };
static SWord32 ptr_1 = 0;
static SWord32 ptr_4 = 0;
static SWord32 ptr_8 = 0;
static SWord32 ptr_12 = 0;
static SWord32 ptr_16 = 0;
static SWord32 ptr_20 = 0;
static SWord32 ptr_24 = 0;
static SWord32 ptr_28 = 0;
static SWord32 ptr_32 = 0;
static SWord32 ptr_36 = 0;
static SWord32 ptr_40 = 0;
static SWord32 ptr_44 = 0;
static SWord32 ptr_48 = 0;
static SWord32 ptr_52 = 0;
static SWord32 ptr_56 = 0;
static SWord32 ptr_60 = 0;
static SWord32 ptr_64 = 0;
static SWord32 ptr_68 = 0;
static SWord32 ptr_72 = 0;
static SWord32 ptr_76 = 0;
static SWord32 ptr_80 = 0;
static SWord32 ptr_84 = 0;
static SWord32 ptr_88 = 0;
static SWord32 ptr_92 = 0;
static SWord32 ptr_96 = 0;
static SWord32 ptr_100 = 0;
/*ACSL following*/

/*@
 global invariant a_bound_ptr_1: ptr_1 < 1 ; 
 global invariant a_pos_ptr_1: ptr_1 >= 0 ; 
 global invariant a_valid_ptr_1: \valid (queue_1 + (0.. 0 ));
 global invariant a_bound_ptr_4: ptr_4 < 1 ; 
 global invariant a_pos_ptr_4: ptr_4 >= 0 ; 
 global invariant a_valid_ptr_4: \valid (queue_4 + (0.. 0 ));
 global invariant a_bound_ptr_8: ptr_8 < 1 ; 
 global invariant a_pos_ptr_8: ptr_8 >= 0 ; 
 global invariant a_valid_ptr_8: \valid (queue_8 + (0.. 0 ));
 global invariant a_bound_ptr_12: ptr_12 < 1 ; 
 global invariant a_pos_ptr_12: ptr_12 >= 0 ; 
 global invariant a_valid_ptr_12: \valid (queue_12 + (0.. 0 ));
 global invariant a_bound_ptr_16: ptr_16 < 1 ; 
 global invariant a_pos_ptr_16: ptr_16 >= 0 ; 
 global invariant a_valid_ptr_16: \valid (queue_16 + (0.. 0 ));
 global invariant a_bound_ptr_20: ptr_20 < 1 ; 
 global invariant a_pos_ptr_20: ptr_20 >= 0 ; 
 global invariant a_valid_ptr_20: \valid (queue_20 + (0.. 0 ));
 global invariant a_bound_ptr_24: ptr_24 < 1 ; 
 global invariant a_pos_ptr_24: ptr_24 >= 0 ; 
 global invariant a_valid_ptr_24: \valid (queue_24 + (0.. 0 ));
 global invariant a_bound_ptr_28: ptr_28 < 1 ; 
 global invariant a_pos_ptr_28: ptr_28 >= 0 ; 
 global invariant a_valid_ptr_28: \valid (queue_28 + (0.. 0 ));
 global invariant a_bound_ptr_32: ptr_32 < 1 ; 
 global invariant a_pos_ptr_32: ptr_32 >= 0 ; 
 global invariant a_valid_ptr_32: \valid (queue_32 + (0.. 0 ));
 global invariant a_bound_ptr_36: ptr_36 < 1 ; 
 global invariant a_pos_ptr_36: ptr_36 >= 0 ; 
 global invariant a_valid_ptr_36: \valid (queue_36 + (0.. 0 ));
 global invariant a_bound_ptr_40: ptr_40 < 1 ; 
 global invariant a_pos_ptr_40: ptr_40 >= 0 ; 
 global invariant a_valid_ptr_40: \valid (queue_40 + (0.. 0 ));
 global invariant a_bound_ptr_44: ptr_44 < 1 ; 
 global invariant a_pos_ptr_44: ptr_44 >= 0 ; 
 global invariant a_valid_ptr_44: \valid (queue_44 + (0.. 0 ));
 global invariant a_bound_ptr_48: ptr_48 < 1 ; 
 global invariant a_pos_ptr_48: ptr_48 >= 0 ; 
 global invariant a_valid_ptr_48: \valid (queue_48 + (0.. 0 ));
 global invariant a_bound_ptr_52: ptr_52 < 1 ; 
 global invariant a_pos_ptr_52: ptr_52 >= 0 ; 
 global invariant a_valid_ptr_52: \valid (queue_52 + (0.. 0 ));
 global invariant a_bound_ptr_56: ptr_56 < 1 ; 
 global invariant a_pos_ptr_56: ptr_56 >= 0 ; 
 global invariant a_valid_ptr_56: \valid (queue_56 + (0.. 0 ));
 global invariant a_bound_ptr_60: ptr_60 < 1 ; 
 global invariant a_pos_ptr_60: ptr_60 >= 0 ; 
 global invariant a_valid_ptr_60: \valid (queue_60 + (0.. 0 ));
 global invariant a_bound_ptr_64: ptr_64 < 1 ; 
 global invariant a_pos_ptr_64: ptr_64 >= 0 ; 
 global invariant a_valid_ptr_64: \valid (queue_64 + (0.. 0 ));
 global invariant a_bound_ptr_68: ptr_68 < 1 ; 
 global invariant a_pos_ptr_68: ptr_68 >= 0 ; 
 global invariant a_valid_ptr_68: \valid (queue_68 + (0.. 0 ));
 global invariant a_bound_ptr_72: ptr_72 < 1 ; 
 global invariant a_pos_ptr_72: ptr_72 >= 0 ; 
 global invariant a_valid_ptr_72: \valid (queue_72 + (0.. 0 ));
 global invariant a_bound_ptr_76: ptr_76 < 1 ; 
 global invariant a_pos_ptr_76: ptr_76 >= 0 ; 
 global invariant a_valid_ptr_76: \valid (queue_76 + (0.. 0 ));
 global invariant a_bound_ptr_80: ptr_80 < 1 ; 
 global invariant a_pos_ptr_80: ptr_80 >= 0 ; 
 global invariant a_valid_ptr_80: \valid (queue_80 + (0.. 0 ));
 global invariant a_bound_ptr_84: ptr_84 < 1 ; 
 global invariant a_pos_ptr_84: ptr_84 >= 0 ; 
 global invariant a_valid_ptr_84: \valid (queue_84 + (0.. 0 ));
 global invariant a_bound_ptr_88: ptr_88 < 1 ; 
 global invariant a_pos_ptr_88: ptr_88 >= 0 ; 
 global invariant a_valid_ptr_88: \valid (queue_88 + (0.. 0 ));
 global invariant a_bound_ptr_92: ptr_92 < 1 ; 
 global invariant a_pos_ptr_92: ptr_92 >= 0 ; 
 global invariant a_valid_ptr_92: \valid (queue_92 + (0.. 0 ));
 global invariant a_bound_ptr_96: ptr_96 < 1 ; 
 global invariant a_pos_ptr_96: ptr_96 >= 0 ; 
 global invariant a_valid_ptr_96: \valid (queue_96 + (0.. 0 ));
 global invariant a_bound_ptr_100: ptr_100 < 1 ; 
 global invariant a_pos_ptr_100: ptr_100 >= 0 ; 
 global invariant a_valid_ptr_100: \valid (queue_100 + (0.. 0 ));
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
  if (trigger_guard_aMaj())
    aMaj(trigger_aMaj_arg_0(queue_1, ptr_1, queue_4, ptr_4, queue_8, ptr_8, queue_12, ptr_12, queue_16, ptr_16, queue_20, ptr_20, queue_24, ptr_24, queue_28, ptr_28, queue_32, ptr_32, queue_36, ptr_36, queue_40, ptr_40, queue_44, ptr_44, queue_48, ptr_48, queue_52, ptr_52, queue_56, ptr_56, queue_60, ptr_60, queue_64, ptr_64, queue_68, ptr_68, queue_72, ptr_72, queue_76, ptr_76, queue_80, ptr_80, queue_84, ptr_84, queue_88, ptr_88, queue_92, ptr_92, queue_96, ptr_96, queue_100, ptr_100));
  if (trigger_guard_maj())
    maj(trigger_maj_arg_0(queue_4, ptr_4, queue_1, ptr_1, queue_8, ptr_8, queue_12, ptr_12, queue_16, ptr_16, queue_20, ptr_20, queue_24, ptr_24, queue_28, ptr_28, queue_32, ptr_32, queue_36, ptr_36, queue_40, ptr_40, queue_44, ptr_44, queue_48, ptr_48, queue_52, ptr_52, queue_56, ptr_56, queue_60, ptr_60, queue_64, ptr_64, queue_68, ptr_68, queue_72, ptr_72, queue_76, ptr_76, queue_80, ptr_80, queue_84, ptr_84, queue_88, ptr_88, queue_92, ptr_92, queue_96, ptr_96, queue_100, ptr_100));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_1;
 assigns tmp_4;
 assigns tmp_8;
 assigns tmp_12;
 assigns tmp_16;
 assigns tmp_20;
 assigns tmp_24;
 assigns tmp_28;
 assigns tmp_32;
 assigns tmp_36;
 assigns tmp_40;
 assigns tmp_44;
 assigns tmp_48;
 assigns tmp_52;
 assigns tmp_56;
 assigns tmp_60;
 assigns tmp_64;
 assigns tmp_68;
 assigns tmp_72;
 assigns tmp_76;
 assigns tmp_80;
 assigns tmp_84;
 assigns tmp_88;
 assigns tmp_92;
 assigns tmp_96;
 assigns tmp_100;
 */
void static updateStates(void) {
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_4 = update_state_4(queue_4, ptr_4);
  tmp_8 = update_state_8(queue_8, ptr_8);
  tmp_12 = update_state_12(queue_12, ptr_12);
  tmp_16 = update_state_16(queue_16, ptr_16);
  tmp_20 = update_state_20(queue_20, ptr_20);
  tmp_24 = update_state_24(queue_24, ptr_24);
  tmp_28 = update_state_28(queue_28, ptr_28);
  tmp_32 = update_state_32(queue_32, ptr_32);
  tmp_36 = update_state_36(queue_36, ptr_36);
  tmp_40 = update_state_40(queue_40, ptr_40);
  tmp_44 = update_state_44(queue_44, ptr_44);
  tmp_48 = update_state_48(queue_48, ptr_48);
  tmp_52 = update_state_52(queue_52, ptr_52);
  tmp_56 = update_state_56(queue_56, ptr_56);
  tmp_60 = update_state_60(queue_60, ptr_60);
  tmp_64 = update_state_64(queue_64, ptr_64);
  tmp_68 = update_state_68(queue_68, ptr_68);
  tmp_72 = update_state_72(queue_72, ptr_72);
  tmp_76 = update_state_76(queue_76, ptr_76);
  tmp_80 = update_state_80(queue_80, ptr_80);
  tmp_84 = update_state_84(queue_84, ptr_84);
  tmp_88 = update_state_88(queue_88, ptr_88);
  tmp_92 = update_state_92(queue_92, ptr_92);
  tmp_96 = update_state_96(queue_96, ptr_96);
  tmp_100 = update_state_100(queue_100, ptr_100);
}

/*@
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 assigns queue_4[ptr_4];
 ensures queue_4[ptr_4] == tmp_4;
 assigns queue_8[ptr_8];
 ensures queue_8[ptr_8] == tmp_8;
 assigns queue_12[ptr_12];
 ensures queue_12[ptr_12] == tmp_12;
 assigns queue_16[ptr_16];
 ensures queue_16[ptr_16] == tmp_16;
 assigns queue_20[ptr_20];
 ensures queue_20[ptr_20] == tmp_20;
 assigns queue_24[ptr_24];
 ensures queue_24[ptr_24] == tmp_24;
 assigns queue_28[ptr_28];
 ensures queue_28[ptr_28] == tmp_28;
 assigns queue_32[ptr_32];
 ensures queue_32[ptr_32] == tmp_32;
 assigns queue_36[ptr_36];
 ensures queue_36[ptr_36] == tmp_36;
 assigns queue_40[ptr_40];
 ensures queue_40[ptr_40] == tmp_40;
 assigns queue_44[ptr_44];
 ensures queue_44[ptr_44] == tmp_44;
 assigns queue_48[ptr_48];
 ensures queue_48[ptr_48] == tmp_48;
 assigns queue_52[ptr_52];
 ensures queue_52[ptr_52] == tmp_52;
 assigns queue_56[ptr_56];
 ensures queue_56[ptr_56] == tmp_56;
 assigns queue_60[ptr_60];
 ensures queue_60[ptr_60] == tmp_60;
 assigns queue_64[ptr_64];
 ensures queue_64[ptr_64] == tmp_64;
 assigns queue_68[ptr_68];
 ensures queue_68[ptr_68] == tmp_68;
 assigns queue_72[ptr_72];
 ensures queue_72[ptr_72] == tmp_72;
 assigns queue_76[ptr_76];
 ensures queue_76[ptr_76] == tmp_76;
 assigns queue_80[ptr_80];
 ensures queue_80[ptr_80] == tmp_80;
 assigns queue_84[ptr_84];
 ensures queue_84[ptr_84] == tmp_84;
 assigns queue_88[ptr_88];
 ensures queue_88[ptr_88] == tmp_88;
 assigns queue_92[ptr_92];
 ensures queue_92[ptr_92] == tmp_92;
 assigns queue_96[ptr_96];
 ensures queue_96[ptr_96] == tmp_96;
 assigns queue_100[ptr_100];
 ensures queue_100[ptr_100] == tmp_100;
 */
void static updateBuffers(void) {
  queue_1[ptr_1] = tmp_1;
  queue_4[ptr_4] = tmp_4;
  queue_8[ptr_8] = tmp_8;
  queue_12[ptr_12] = tmp_12;
  queue_16[ptr_16] = tmp_16;
  queue_20[ptr_20] = tmp_20;
  queue_24[ptr_24] = tmp_24;
  queue_28[ptr_28] = tmp_28;
  queue_32[ptr_32] = tmp_32;
  queue_36[ptr_36] = tmp_36;
  queue_40[ptr_40] = tmp_40;
  queue_44[ptr_44] = tmp_44;
  queue_48[ptr_48] = tmp_48;
  queue_52[ptr_52] = tmp_52;
  queue_56[ptr_56] = tmp_56;
  queue_60[ptr_60] = tmp_60;
  queue_64[ptr_64] = tmp_64;
  queue_68[ptr_68] = tmp_68;
  queue_72[ptr_72] = tmp_72;
  queue_76[ptr_76] = tmp_76;
  queue_80[ptr_80] = tmp_80;
  queue_84[ptr_84] = tmp_84;
  queue_88[ptr_88] = tmp_88;
  queue_92[ptr_92] = tmp_92;
  queue_96[ptr_96] = tmp_96;
  queue_100[ptr_100] = tmp_100;
}

/*@
 assigns ptr_1;
 ensures ptr_1 == (\old (ptr_1 ) + 1) % 1;
 assigns ptr_4;
 ensures ptr_4 == (\old (ptr_4 ) + 1) % 1;
 assigns ptr_8;
 ensures ptr_8 == (\old (ptr_8 ) + 1) % 1;
 assigns ptr_12;
 ensures ptr_12 == (\old (ptr_12 ) + 1) % 1;
 assigns ptr_16;
 ensures ptr_16 == (\old (ptr_16 ) + 1) % 1;
 assigns ptr_20;
 ensures ptr_20 == (\old (ptr_20 ) + 1) % 1;
 assigns ptr_24;
 ensures ptr_24 == (\old (ptr_24 ) + 1) % 1;
 assigns ptr_28;
 ensures ptr_28 == (\old (ptr_28 ) + 1) % 1;
 assigns ptr_32;
 ensures ptr_32 == (\old (ptr_32 ) + 1) % 1;
 assigns ptr_36;
 ensures ptr_36 == (\old (ptr_36 ) + 1) % 1;
 assigns ptr_40;
 ensures ptr_40 == (\old (ptr_40 ) + 1) % 1;
 assigns ptr_44;
 ensures ptr_44 == (\old (ptr_44 ) + 1) % 1;
 assigns ptr_48;
 ensures ptr_48 == (\old (ptr_48 ) + 1) % 1;
 assigns ptr_52;
 ensures ptr_52 == (\old (ptr_52 ) + 1) % 1;
 assigns ptr_56;
 ensures ptr_56 == (\old (ptr_56 ) + 1) % 1;
 assigns ptr_60;
 ensures ptr_60 == (\old (ptr_60 ) + 1) % 1;
 assigns ptr_64;
 ensures ptr_64 == (\old (ptr_64 ) + 1) % 1;
 assigns ptr_68;
 ensures ptr_68 == (\old (ptr_68 ) + 1) % 1;
 assigns ptr_72;
 ensures ptr_72 == (\old (ptr_72 ) + 1) % 1;
 assigns ptr_76;
 ensures ptr_76 == (\old (ptr_76 ) + 1) % 1;
 assigns ptr_80;
 ensures ptr_80 == (\old (ptr_80 ) + 1) % 1;
 assigns ptr_84;
 ensures ptr_84 == (\old (ptr_84 ) + 1) % 1;
 assigns ptr_88;
 ensures ptr_88 == (\old (ptr_88 ) + 1) % 1;
 assigns ptr_92;
 ensures ptr_92 == (\old (ptr_92 ) + 1) % 1;
 assigns ptr_96;
 ensures ptr_96 == (\old (ptr_96 ) + 1) % 1;
 assigns ptr_100;
 ensures ptr_100 == (\old (ptr_100 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_4 = (ptr_4 + 1) % 1;
  ptr_8 = (ptr_8 + 1) % 1;
  ptr_12 = (ptr_12 + 1) % 1;
  ptr_16 = (ptr_16 + 1) % 1;
  ptr_20 = (ptr_20 + 1) % 1;
  ptr_24 = (ptr_24 + 1) % 1;
  ptr_28 = (ptr_28 + 1) % 1;
  ptr_32 = (ptr_32 + 1) % 1;
  ptr_36 = (ptr_36 + 1) % 1;
  ptr_40 = (ptr_40 + 1) % 1;
  ptr_44 = (ptr_44 + 1) % 1;
  ptr_48 = (ptr_48 + 1) % 1;
  ptr_52 = (ptr_52 + 1) % 1;
  ptr_56 = (ptr_56 + 1) % 1;
  ptr_60 = (ptr_60 + 1) % 1;
  ptr_64 = (ptr_64 + 1) % 1;
  ptr_68 = (ptr_68 + 1) % 1;
  ptr_72 = (ptr_72 + 1) % 1;
  ptr_76 = (ptr_76 + 1) % 1;
  ptr_80 = (ptr_80 + 1) % 1;
  ptr_84 = (ptr_84 + 1) % 1;
  ptr_88 = (ptr_88 + 1) % 1;
  ptr_92 = (ptr_92 + 1) % 1;
  ptr_96 = (ptr_96 + 1) % 1;
  ptr_100 = (ptr_100 + 1) % 1;
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
