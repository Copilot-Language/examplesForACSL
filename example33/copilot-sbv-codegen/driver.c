/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */
SWord32 sign;
SWord32 hist;

/* Variables */
static SBool tmp_0 = true;
static SWord32 tmp_1 = 6;
static SWord32 tmp_2 = 0;
static SBool queue_0[1] = { true };
static SWord32 queue_1[1] = { 6 };
static SWord32 queue_2[1] = { 0 };
static SWord32 ptr_0 = 0;
static SWord32 ptr_1 = 0;
static SWord32 ptr_2 = 0;

void static sampleExts(void) {
}

void static fireTriggers(void) {
}

/*@
 assigns hist;
 assigns sign;
 */
void static updateObservers(void) {
  hist = observer_hist(queue_1, ptr_1);
  sign = observer_sign(queue_0, ptr_0, queue_1, ptr_1, queue_2, ptr_2);
}

/*@
 assigns tmp_0;
 assigns tmp_1;
 assigns tmp_2;
 */
void static updateStates(void) {
  tmp_0 = update_state_0();
  tmp_1 = update_state_1(queue_1, ptr_1);
  tmp_2 = update_state_2(queue_1, ptr_1);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 assigns queue_1[ptr_1];
 ensures queue_1[ptr_1] == tmp_1;
 assigns queue_2[ptr_2];
 ensures queue_2[ptr_2] == tmp_2;
 */
void static updateBuffers(void) {
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
 ensures ptr_2 == (\old (ptr_2 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 1;
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
