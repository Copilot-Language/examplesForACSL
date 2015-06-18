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
SBool update_state_0(const SBool *queue_0, const SWord32 ptr_0);
SBool update_state_1(const SBool *queue_0, const SWord32 ptr_0,
                     const SBool *queue_1, const SWord32 ptr_1);
SBool observer_eventuallyPrevTest(const SBool *queue_0,
                                  const SWord32 ptr_0, const SBool *queue_1, const SWord32 ptr_1);

#endif /* __internal__HEADER_INCLUDED__ */
