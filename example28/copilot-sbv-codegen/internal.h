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
SWord64 update_state_0(const SWord64 ext_my_timestamp);
SBool trigger_guard_alert_inconsistent_data_from_me(const SDouble ext_my_latitude,
                                                    const SDouble ext_my_longitude,
                                                    const SWord64 ext_my_timestamp,
                                                    const SWord64 *queue_0, const SWord32 ptr_0,
                                                    const SWord64 ext_my_ICAO24,
                                                    const SWord64 ext_my_altitude,
                                                    const SWord64 ext_my_groundspeed,
                                                    const SWord64 ext_my_heading,
                                                    const SBool ext_my_AGflag);

#endif /* __internal__HEADER_INCLUDED__ */