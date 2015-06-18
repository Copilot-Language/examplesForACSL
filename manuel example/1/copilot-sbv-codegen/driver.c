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
SWord16 tmp_0 = 0;
SBool tmp_1 = false;
SWord16 queue_0[2] = { 0, 1 };
SBool queue_1[1] = { false };
SWord16 ptr_0 = 0;
SWord16 ptr_1 = 0;
SWord8 ext_x = 0;
SBool ext_func1_0 = 0;
SWord16 ext_func0_1 = 0;
SBool ext_func1_2 = 0;
SWord16 ext_func0_3 = 0;
SWord16 ext_func0_4 = 0;
SWord16 ext_func0_5 = 0;

void sampleExts(void) {
  ext_x = x;
  ext_func1_0 = func1();
  ext_func0_1 = func0(ext_func0_1_arg0(ext_x), ext_func0_1_arg1(queue_0, ptr_0));
  ext_func1_2 = func1();
  ext_func0_3 = func0(ext_func0_3_arg0(), ext_func0_3_arg1());
  ext_func0_4 = func0(ext_func0_4_arg0(ext_x), ext_func0_4_arg1(queue_0, ptr_0));
  ext_func0_5 = func0(ext_func0_5_arg0(ext_x), ext_func0_5_arg1(queue_0, ptr_0));
}

void fireTriggers(void) {
  if (trigger_guard_trigger())
    trigger(trigger_trigger_arg_0(ext_func0_1, ext_x, queue_0, ptr_0),
            trigger_trigger_arg_1(ext_func1_2),
            trigger_trigger_arg_2(ext_func0_3),
            trigger_trigger_arg_3(ext_func0_4, ext_x, queue_0, ptr_0, ext_func0_5));
}

void updateObservers(void) {
}

void updateStates(void) {
  tmp_0 = update_statett_0(queue_0, ptr_0);
  tmp_1 = update_statett_1(ext_func1_0);
}

void updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
}

void updatePtrs(void) {
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
