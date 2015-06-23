/* Header file for internal. Automatically generated by SBV. Do not edit! */

#ifndef __internal__HEADER_INCLUDED__
#define __internal__HEADER_INCLUDED__

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/* The boolean type */
typedef bool SBool;

/* The float type */
typedef float SFloat;

/* The double type */
typedef double SDouble;

/* Unsigned bit-vectors */
typedef uint8_t  SWord8 ;
typedef uint16_t SWord16;
typedef uint32_t SWord32;
typedef uint64_t SWord64;

/* Signed bit-vectors */
typedef int8_t  SInt8 ;
typedef int16_t SInt16;
typedef int32_t SInt32;
typedef int64_t SInt64;

/* Entry point prototypes: */
SBool update_state_0();
SBool update_state_1();
SBool update_state_2();
SBool update_state_3();
SBool update_state_4();
SBool update_state_5(const SBool *queue_5, const SWord32 ptr_5);
SBool update_state_6();
SBool update_state_7();
SBool trigger_guard_testRelease();
SBool trigger_testRelease_arg_0(const SBool *queue_0,
                                const SWord32 ptr_0, const SBool *queue_1, const SWord32 ptr_1);
SBool trigger_guard_testUntil();
SBool trigger_testUntil_arg_0(const SBool *queue_2,
                              const SWord32 ptr_2, const SBool *queue_3, const SWord32 ptr_3);
SBool trigger_guard_testFuture();
SBool trigger_testFuture_arg_0(const SBool *queue_4,
                               const SWord32 ptr_4);
SBool trigger_guard_testNext();
SBool trigger_testNext_arg_0(const SBool *queue_5,
                             const SWord32 ptr_5);
SBool trigger_guard_testAlways2();
SBool trigger_testAlways2_arg_0(const SBool *queue_6,
                                const SWord32 ptr_6);
SBool trigger_guard_testAlways1();
SBool trigger_testAlways1_arg_0(const SBool *queue_7,
                                const SWord32 ptr_7);

#endif /* __internal__HEADER_INCLUDED__ */
