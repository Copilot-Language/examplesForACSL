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
SBool update_state_1(const SBool *queue_1, const SWord32 ptr_1);
SBool update_state_2(const SBool *queue_2, const SWord32 ptr_2);
SBool update_state_3(const SBool *queue_3, const SWord32 ptr_3);
SBool update_state_4(const SBool *queue_4, const SWord32 ptr_4);
SBool update_state_5(const SBool *queue_5, const SWord32 ptr_5);
SBool update_state_6(const SBool *queue_6, const SWord32 ptr_6);
SBool update_state_7(const SBool *queue_7, const SWord32 ptr_7);
SBool update_state_8(const SBool *queue_8, const SWord32 ptr_8);
SWord64 update_state_9(const SWord64 *queue_9,
                       const SWord32 ptr_9);
SBool update_state_11(const SBool *queue_11, const SWord32 ptr_11);
SBool update_state_12(const SBool *queue_12, const SWord32 ptr_12);
SBool update_state_13(const SBool *queue_13, const SWord32 ptr_13);
SBool update_state_14(const SBool *queue_14, const SWord32 ptr_14);
SBool update_state_15(const SBool *queue_15, const SWord32 ptr_15);
SBool update_state_16(const SBool *queue_16, const SWord32 ptr_16);
SBool update_state_17(const SBool *queue_17, const SWord32 ptr_17);
SBool update_state_18(const SBool *queue_18, const SWord32 ptr_18);
SBool update_state_19(const SBool *queue_19, const SWord32 ptr_19);
SBool update_state_10(const SBool *queue_11, const SWord32 ptr_11,
                      const SBool *queue_12, const SWord32 ptr_12, const SBool *queue_13,
                      const SWord32 ptr_13, const SBool *queue_14, const SWord32 ptr_14,
                      const SBool *queue_15, const SWord32 ptr_15, const SBool *queue_16,
                      const SWord32 ptr_16, const SBool *queue_17, const SWord32 ptr_17,
                      const SBool *queue_18, const SWord32 ptr_18, const SBool *queue_19,
                      const SWord32 ptr_19, const SBool *queue_10, const SWord32 ptr_10);
SBool observer_obs8(const SBool *queue_0, const SWord32 ptr_0);
SBool observer_obs7(const SBool *queue_1, const SWord32 ptr_1);
SBool observer_obs6(const SBool *queue_2, const SWord32 ptr_2);
SBool observer_obs5(const SBool *queue_3, const SWord32 ptr_3);
SBool observer_obs4(const SBool *queue_4, const SWord32 ptr_4);
SBool observer_obs3(const SBool *queue_5, const SWord32 ptr_5);
SBool observer_obs2(const SBool *queue_6, const SWord32 ptr_6);
SBool observer_obs1(const SBool *queue_7, const SWord32 ptr_7);
SBool observer_obs0(const SBool *queue_8, const SWord32 ptr_8);
SBool observer_done(const SWord64 *queue_9, const SWord32 ptr_9);
SBool observer_sat(const SBool *queue_10, const SWord32 ptr_10);

#endif /* __internal__HEADER_INCLUDED__ */
