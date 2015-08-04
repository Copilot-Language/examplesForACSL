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
SBool trigger_guard_alert_WCVtep(const SDouble ext_sqrt_0,
                                 const SDouble ext_ownship_x_position_ft,
                                 const SDouble ext_intruder_x_position_ft,
                                 const SDouble ext_ownship_y_position_ft,
                                 const SDouble ext_intruder_y_position_ft, const SDouble ext_sqrt_1,
                                 const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                                 const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                                 const SDouble ext_sqrt_2, const SDouble ext_sqrt_3,
                                 const SDouble ext_ownship_z_position_ft,
                                 const SDouble ext_intruder_z_position_ft,
                                 const SDouble ext_ownship_vz, const SDouble ext_intruder_vz);
SBool trigger_guard_alert_WCVtaumod(const SDouble ext_sqrt_4,
                                    const SDouble ext_ownship_x_position_ft,
                                    const SDouble ext_intruder_x_position_ft,
                                    const SDouble ext_ownship_y_position_ft,
                                    const SDouble ext_intruder_y_position_ft,
                                    const SDouble ext_sqrt_5, const SDouble ext_ownship_vx,
                                    const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                                    const SDouble ext_intruder_vy,
                                    const SDouble ext_ownship_z_position_ft,
                                    const SDouble ext_intruder_z_position_ft,
                                    const SDouble ext_ownship_vz, const SDouble ext_intruder_vz);
SBool trigger_guard_alert_WCVtcpa(const SDouble ext_sqrt_6,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ownship_y_position_ft,
                                  const SDouble ext_intruder_y_position_ft,
                                  const SDouble ext_sqrt_7, const SDouble ext_ownship_vx,
                                  const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                                  const SDouble ext_intruder_vy,
                                  const SDouble ext_ownship_z_position_ft,
                                  const SDouble ext_intruder_z_position_ft,
                                  const SDouble ext_ownship_vz, const SDouble ext_intruder_vz);
SBool trigger_guard_alert_WCVtau(const SDouble ext_sqrt_8,
                                 const SDouble ext_ownship_x_position_ft,
                                 const SDouble ext_intruder_x_position_ft,
                                 const SDouble ext_ownship_y_position_ft,
                                 const SDouble ext_intruder_y_position_ft, const SDouble ext_sqrt_9,
                                 const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                                 const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                                 const SDouble ext_ownship_z_position_ft,
                                 const SDouble ext_intruder_z_position_ft,
                                 const SDouble ext_ownship_vz, const SDouble ext_intruder_vz);
SDouble ext_sqrt_0_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_1_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                        const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_2_arg0(const SDouble ext_ownship_vx,
                        const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                        const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_3_arg0(const SDouble ext_ownship_vx,
                        const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                        const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_4_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_5_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                        const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_6_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_7_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                        const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_8_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);
SDouble ext_sqrt_9_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                        const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_y_position_ft,
                        const SDouble ext_intruder_y_position_ft);

#endif /* __internal__HEADER_INCLUDED__ */
