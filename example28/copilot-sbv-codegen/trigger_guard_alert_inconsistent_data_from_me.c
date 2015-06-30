/* File: "trigger_guard_alert_inconsistent_data_from_me.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*ACSL to write
 (if not ((-90.0 <= Ext_my_latitude) && (Ext_my_latitude <= 90.0)) then true else (if not ((-180.0 <= Ext_my_longitude) && (Ext_my_longitude <= 180.0)) then true else (if not (Ext_my_timestamp >= s0) then true else (if not ((0 <= Ext_my_ICAO24) && (Ext_my_ICAO24 <= 16777215)) then true else (if not ((0 <= Ext_my_altitude) && (Ext_my_altitude <= 100000)) then true else (if not ((0 <= Ext_my_groundspeed) && (Ext_my_groundspeed <= 1000)) then true else (if not ((0 <= Ext_my_heading) && (Ext_my_heading <= 359)) then true else (if not (not (Ext_my_AGflag == false) || (Ext_my_groundspeed < 200)) then true else false))))))))
*/
/*@
 assigns \nothing;
 ensures \result == (( (! ((((((-90.0) <= (ext_my_latitude))) && (((ext_my_latitude) <= (90.0))))))) ? (true) : (( (! ((((((-180.0) <= (ext_my_longitude))) && (((ext_my_longitude) <= (180.0))))))) ? (true) : (( (! ((((ext_my_timestamp) >= (queue_0[ptr_0]))))) ? (true) : (( (! ((((((0) <= (ext_my_ICAO24))) && (((ext_my_ICAO24) <= (16777215))))))) ? (true) : (( (! ((((((0) <= (ext_my_altitude))) && (((ext_my_altitude) <= (100000))))))) ? (true) : (( (! ((((((0) <= (ext_my_groundspeed))) && (((ext_my_groundspeed) <= (1000))))))) ? (true) : (( (! ((((((0) <= (ext_my_heading))) && (((ext_my_heading) <= (359))))))) ? (true) : (( (! ((((! ((((ext_my_AGflag) == (false))))) || (((ext_my_groundspeed) < (200))))))) ? (true) : (false)))))))))))))))));
*/
SBool trigger_guard_alert_inconsistent_data_from_me(const SDouble ext_my_latitude,
                                                    const SDouble ext_my_longitude,
                                                    const SWord64 ext_my_timestamp,
                                                    const SWord64 *queue_0, const SWord32 ptr_0,
                                                    const SWord64 ext_my_ICAO24,
                                                    const SWord64 ext_my_altitude,
                                                    const SWord64 ext_my_groundspeed,
                                                    const SWord64 ext_my_heading,
                                                    const SBool ext_my_AGflag)
{
  const SDouble s0 = ext_my_latitude;
  const SDouble s1 = ext_my_longitude;
  const SWord64 s2 = ext_my_timestamp;
  const SWord64 s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SWord64 s5 = ext_my_ICAO24;
  const SWord64 s6 = ext_my_altitude;
  const SWord64 s7 = ext_my_groundspeed;
  const SWord64 s8 = ext_my_heading;
  const SBool   s9 = ext_my_AGflag;
  const SBool   s11 = -90.0 <= s0;
  const SBool   s13 = s0 <= 90.0;
  const SBool   s14 = s11 & s13;
  const SBool   s15 = !s14;
  const SBool   s17 = -180.0 <= s1;
  const SBool   s19 = s1 <= 180.0;
  const SBool   s20 = s17 & s19;
  const SBool   s21 = !s20;
  const SBool   s22 = s2 >= s3;
  const SBool   s23 = !s22;
  const SBool   s25 = s5 <= 0x0000000000ffffffULL;
  const SBool   s26 = !s25;
  const SBool   s28 = s6 <= 0x00000000000186a0ULL;
  const SBool   s29 = !s28;
  const SBool   s31 = s7 <= 0x00000000000003e8ULL;
  const SBool   s32 = !s31;
  const SBool   s34 = s8 <= 0x0000000000000167ULL;
  const SBool   s35 = !s34;
  const SBool   s36 = false == s9;
  const SBool   s37 = !s36;
  const SBool   s39 = s7 < 0x00000000000000c8ULL;
  const SBool   s40 = s37 | s39;
  const SBool   s41 = !s40;
  const SBool   s42 = s35 ? true : s41;
  const SBool   s43 = s32 ? true : s42;
  const SBool   s44 = s29 ? true : s43;
  const SBool   s45 = s26 ? true : s44;
  const SBool   s46 = s23 ? true : s45;
  const SBool   s47 = s21 ? true : s46;
  const SBool   s48 = s15 ? true : s47;

  return s48;
}