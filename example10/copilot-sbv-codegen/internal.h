/* Header file for internal. Automatically generated by SBV. Do not edit! */

#ifndef __internal__HEADER_INCLUDED__
#define __internal__HEADER_INCLUDED__

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
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
SWord16 update_state_0(const SWord16 *queue_0,
                       const SWord32 ptr_0);
SBool update_state_1(const SBool ext_func1_0);
SBool trigger_guard_trigger();
SWord16 trigger_trigger_arg_0(const SWord16 ext_func0_1,
                              const SWord8 ext_x, const SWord16 *queue_0, const SWord32 ptr_0);
SBool trigger_trigger_arg_1(const SBool ext_func1_2);
SWord16 trigger_trigger_arg_2(const SWord16 ext_func0_3);
SWord16 trigger_trigger_arg_3(const SWord16 ext_func0_4,
                              const SWord8 ext_x, const SWord16 *queue_0, const SWord32 ptr_0,
                              const SWord16 ext_func0_5);
SWord8 ext_func0_1_arg0(const SWord8 ext_x);
SWord16 ext_func0_1_arg1(const SWord16 *queue_0,
                         const SWord32 ptr_0);
SWord8 ext_func0_3_arg0();
SWord16 ext_func0_3_arg1();
SWord8 ext_func0_4_arg0(const SWord8 ext_x);
SWord16 ext_func0_4_arg1(const SWord16 *queue_0,
                         const SWord32 ptr_0);
SWord8 ext_func0_5_arg0(const SWord8 ext_x);
SWord16 ext_func0_5_arg1(const SWord16 *queue_0,
                         const SWord32 ptr_0);

#endif /* __internal__HEADER_INCLUDED__ */
