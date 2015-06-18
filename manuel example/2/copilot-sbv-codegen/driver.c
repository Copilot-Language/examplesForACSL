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
SBool tmp_0 = true;
SWord64 tmp_1 = 0;
SBool tmp_2 = true;
SBool queue_0[1] = { true };
SWord64 queue_1[1] = { 0 };
SBool queue_2[2] = { true, false };
SWord16 ptr_0 = 0;
SWord16 ptr_1 = 0;
SWord16 ptr_2 = 0;
SWord64 ext_e1 = 0;
SWord64 ext_e2 = 0;

void sampleExts(void) {
  ext_e1 = e1;
  ext_e2 = e2;
}

void fireTriggers(void) {
  if (trigger_guard_trig1(queue_0, ptr_0))
    trig1(trigger_trig1_arg_0(queue_1, ptr_1),
          trigger_trig1_arg_1(ext_e1, ext_e2),
          trigger_trig1_arg_2(queue_2, ptr_2));
}

void updateObservers(void) {
}

void updateStates(void) {
  tmp_0 = update_statett_0(queue_0, ptr_0);
  tmp_1 = update_statett_1(queue_1, ptr_1);
  tmp_2 = update_statett_2(queue_2, ptr_2);
}

void updateBuffers(void) {
  queue_0[ptr_0] = tmp_0;
  queue_1[ptr_1] = tmp_1;
  queue_2[ptr_2] = tmp_2;
}

void updatePtrs(void) {
  ptr_0 = (ptr_0 + 1) % 1;
  ptr_1 = (ptr_1 + 1) % 1;
  ptr_2 = (ptr_2 + 1) % 2;
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
