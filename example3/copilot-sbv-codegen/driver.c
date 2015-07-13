/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SWord32 tmp_0 = 0;
static SWord32 queue_0[1] = { 0 };
static SWord32 ptr_0 = 0;
static SWord8 ext_idx2 = 0;
static SWord8 ext_idx3 = 0;
static SWord32 ext_arr1_0 = 0;
static SWord32 ext_arr2_1 = 0;
static SWord32 ext_arr2_2 = 0;
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
 //ensures ext_arr1_0 == tmp_ext_arr1_0;
 //ensures ext_arr2_1 == tmp_ext_arr2_1;
 //ensures ext_arr2_2 == tmp_ext_arr2_2;
*/
void static sampleExts(void) {
  SWord32 tmp_ext_arr1_0 = arr1[ext_arr_arr1(queue_0, ptr_0)];
  SWord32 tmp_ext_arr2_1 = arr2[ext_arr_arr2(ext_idx2)];
  SWord32 tmp_ext_arr2_2 = arr2[ext_arr_arr2(ext_idx3)];
  ext_idx2 = idx2;
  ext_idx3 = idx3;
  ext_arr1_0 = tmp_ext_arr1_0;
  ext_arr2_1 = tmp_ext_arr2_1;
  ext_arr2_2 = tmp_ext_arr2_2;
}

/*@
 assigns \nothing; 
*/
void static fireTriggers(void) {
  if (trigger_guard_trigger())
    trigger(trigger_trigger_arg_0(ext_arr1_0),
            trigger_trigger_arg_1(ext_arr2_1),
            trigger_trigger_arg_2(ext_arr2_2));
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns tmp_0;
 */
void static updateStates(void) {
  tmp_0 = update_state_0(queue_0, ptr_0);
}

/*@
 assigns queue_0[ptr_0];
 ensures queue_0[ptr_0] == tmp_0;
 */
void static updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
}

/*@
 assigns ptr_0;
 ensures ptr_0 == (\old (ptr_0 ) + 1) % 1;
 */
void static updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
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
