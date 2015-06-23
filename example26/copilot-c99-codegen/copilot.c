#include <stdbool.h>
#include <stdint.h>


#include "copilot.h"
uint64_t cnt;
uint8_t string;
uint64_t hist;
bool accept;


static uint64_t __global_clock = 0;



static const uint32_t __coverage_len = 1;
static uint32_t __coverage[1] = {0};
static uint32_t __coverage_index = 0;
struct {  /* state */
  struct {  /* copilot */
    uint64_t queue_buffer_str0[1];
    uint16_t queue_pointer_str0;
    uint64_t tmp0;
    uint8_t queue_buffer_str1[12];
    uint16_t queue_pointer_str1;
    uint8_t tmp1;
    uint64_t queue_buffer_str2[1];
    uint16_t queue_pointer_str2;
    uint64_t tmp2;
  } copilot;
} state =
{  /* state */
  {  /* copilot */
    /* queue_buffer_str0 */
    { 0ULL
    },
    /* queue_pointer_str0 */  0,
    /* tmp0 */  0ULL,
    /* queue_buffer_str1 */
    { 1
    , 0
    , 0
    , 1
    , 0
    , 1
    , 1
    , 0
    , 0
    , 1
    , 0
    , 1
    },
    /* queue_pointer_str1 */  0,
    /* tmp1 */  0,
    /* queue_buffer_str2 */
    { 0ULL
    },
    /* queue_pointer_str2 */  0,
    /* tmp2 */  0ULL
  }
};

/* copilot.update_state_s0 */
static void __r4() {
  bool __0 = true;
  uint16_t __1 = state.copilot.queue_pointer_str0;
  uint16_t __2 = 0;
  uint16_t __3 = __1 + __2;
  uint16_t __4 = 1;
  uint16_t __5 = __3 % __4;
  uint64_t __6 = state.copilot.queue_buffer_str0[__5];
  uint64_t __7 = 1ULL;
  uint64_t __8 = __6 + __7;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 4);
  }
  state.copilot.tmp0 = __8;
}

/* copilot.update_state_s1 */
static void __r5() {
  bool __0 = true;
  uint8_t __1 = 0;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 5);
  }
  state.copilot.tmp1 = __1;
}

/* copilot.update_state_s2 */
static void __r6() {
  bool __0 = true;
  uint64_t __1 = 2ULL;
  uint16_t __2 = state.copilot.queue_pointer_str0;
  uint16_t __3 = 0;
  uint16_t __4 = __2 + __3;
  uint16_t __5 = 1;
  uint16_t __6 = __4 % __5;
  uint64_t __7 = state.copilot.queue_buffer_str0[__6];
  uint64_t __8 = __1 << __7;
  uint16_t __9 = state.copilot.queue_pointer_str1;
  uint16_t __10 = __9 + __3;
  uint16_t __11 = 12;
  uint16_t __12 = __10 % __11;
  uint8_t __13 = state.copilot.queue_buffer_str1[__12];
  uint64_t __14 = (uint64_t) __13;
  uint64_t __15 = __8 * __14;
  uint16_t __16 = state.copilot.queue_pointer_str2;
  uint16_t __17 = __16 + __3;
  uint16_t __18 = __17 % __5;
  uint64_t __19 = state.copilot.queue_buffer_str2[__18];
  uint64_t __20 = __15 + __19;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 6);
  }
  state.copilot.tmp2 = __20;
}

/* copilot.update_observer_cnt */
static void __r0() {
  bool __0 = true;
  uint16_t __1 = state.copilot.queue_pointer_str0;
  uint16_t __2 = 0;
  uint16_t __3 = __1 + __2;
  uint16_t __4 = 1;
  uint16_t __5 = __3 % __4;
  uint64_t __6 = state.copilot.queue_buffer_str0[__5];
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 0);
  }
  cnt = __6;
}

/* copilot.update_observer_string */
static void __r1() {
  bool __0 = true;
  uint16_t __1 = state.copilot.queue_pointer_str1;
  uint16_t __2 = 0;
  uint16_t __3 = __1 + __2;
  uint16_t __4 = 12;
  uint16_t __5 = __3 % __4;
  uint8_t __6 = state.copilot.queue_buffer_str1[__5];
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 1);
  }
  string = __6;
}

/* copilot.update_observer_hist */
static void __r2() {
  bool __0 = true;
  uint16_t __1 = state.copilot.queue_pointer_str2;
  uint16_t __2 = 0;
  uint16_t __3 = __1 + __2;
  uint16_t __4 = 1;
  uint16_t __5 = __3 % __4;
  uint64_t __6 = state.copilot.queue_buffer_str2[__5];
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 2);
  }
  hist = __6;
}

/* copilot.update_observer_accept */
static void __r3() {
  bool __0 = true;
  uint16_t __1 = state.copilot.queue_pointer_str0;
  uint16_t __2 = 0;
  uint16_t __3 = __1 + __2;
  uint16_t __4 = 1;
  uint16_t __5 = __3 % __4;
  uint64_t __6 = state.copilot.queue_buffer_str0[__5];
  uint64_t __7 = 2ULL;
  uint64_t __8 = __6 % __7;
  uint64_t __9 = 1ULL;
  bool __10 = __8 == __9;
  bool __11 = ! __10;
  uint16_t __12 = state.copilot.queue_pointer_str2;
  uint16_t __13 = __12 + __2;
  uint16_t __14 = __13 % __4;
  uint64_t __15 = state.copilot.queue_buffer_str2[__14];
  uint64_t __16 = __6 / __7;
  uint64_t __17 = __7 << __16;
  uint64_t __18 = __17 - __9;
  uint64_t __19 = ~ __18;
  uint64_t __20 = __19 & __15;
  uint64_t __21 = __15 - __20;
  uint64_t __22 = __20 >> __16;
  bool __23 = __21 == __22;
  bool __24 = __11 && __23;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 3);
  }
  accept = __24;
}

/* copilot.update_buffer_s0 */
static void __r7() {
  bool __0 = true;
  uint64_t __1 = state.copilot.tmp0;
  uint16_t __2 = state.copilot.queue_pointer_str0;
  uint16_t __3 = 1;
  uint16_t __4 = __2 + __3;
  bool __5 = __4 < __3;
  uint16_t __6 = 0;
  uint16_t __7 = __5 ? __4 : __6;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 7);
  }
  state.copilot.queue_buffer_str0[__2] = __1;
  state.copilot.queue_pointer_str0 = __7;
}

/* copilot.update_buffer_s1 */
static void __r8() {
  bool __0 = true;
  uint8_t __1 = state.copilot.tmp1;
  uint16_t __2 = state.copilot.queue_pointer_str1;
  uint16_t __3 = 1;
  uint16_t __4 = __2 + __3;
  uint16_t __5 = 12;
  bool __6 = __4 < __5;
  uint16_t __7 = 0;
  uint16_t __8 = __6 ? __4 : __7;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 8);
  }
  state.copilot.queue_buffer_str1[__2] = __1;
  state.copilot.queue_pointer_str1 = __8;
}

/* copilot.update_buffer_s2 */
static void __r9() {
  bool __0 = true;
  uint64_t __1 = state.copilot.tmp2;
  uint16_t __2 = state.copilot.queue_pointer_str2;
  uint16_t __3 = 1;
  uint16_t __4 = __2 + __3;
  bool __5 = __4 < __3;
  uint16_t __6 = 0;
  uint16_t __7 = __5 ? __4 : __6;
  if (__0) {
    __coverage[0] = __coverage[0] | (1 << 9);
  }
  state.copilot.queue_buffer_str2[__2] = __1;
  state.copilot.queue_pointer_str2 = __7;
}


static void __assertion_checks() {
}


void copilot()
{

  {
    static uint8_t __scheduling_clock = 4;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r4();  /* copilot.update_state_s0 */
      __assertion_checks(); __r5();  /* copilot.update_state_s1 */
      __assertion_checks(); __r6();  /* copilot.update_state_s2 */
      __scheduling_clock = 7;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }
  {
    static uint8_t __scheduling_clock = 6;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r0();  /* copilot.update_observer_cnt */
      __assertion_checks(); __r1();  /* copilot.update_observer_string */
      __assertion_checks(); __r2();  /* copilot.update_observer_hist */
      __assertion_checks(); __r3();  /* copilot.update_observer_accept */
      __scheduling_clock = 7;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }
  {
    static uint8_t __scheduling_clock = 7;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r7();  /* copilot.update_buffer_s0 */
      __assertion_checks(); __r8();  /* copilot.update_buffer_s1 */
      __assertion_checks(); __r9();  /* copilot.update_buffer_s2 */
      __scheduling_clock = 7;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }

  __global_clock = __global_clock + 1;

}

void step()
{
  copilot();copilot();copilot();copilot();copilot();copilot();copilot();copilot();
}

