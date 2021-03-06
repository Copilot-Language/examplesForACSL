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
SBool update_state_0(const SBool *queue_0, const SWord32 ptr_0);
SWord8 update_state_1(const SWord8 *queue_1, const SWord32 ptr_1);
SBool update_state_2(const SBool *queue_2, const SWord32 ptr_2,
                     const SWord8 *queue_1, const SWord32 ptr_1);
SBool trigger_guard_trig1(const SBool *queue_0,
                          const SWord32 ptr_0);
SBool trigger_trig1_arg_0(const SWord8 *queue_1,
                          const SWord32 ptr_1);
SWord64 trigger_trig1_arg_1(const SWord64 ext_e1,
                            const SWord64 ext_e2, const SWord64 ext_e3_0,
                            const SWord64 ext_ff_1, const SWord8 *queue_1,
                            const SWord32 ptr_1);
SBool trigger_trig1_arg_2(const SBool *queue_2,
                          const SWord32 ptr_2);
SWord8 ext_arr_e3(const SWord8 *queue_1, const SWord32 ptr_1);
SWord8 ext_ff_1_arg0(const SWord8 *queue_1, const SWord32 ptr_1);

#endif /* __internal__HEADER_INCLUDED__ */
