/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 Ext_my_timestamp
*/
/*@
 assigns \nothing;
 ensures \result == (ext_my_timestamp);
*/
SWord64 update_state_0(const SWord64 ext_my_timestamp)
{
  const SWord64 s0 = ext_my_timestamp;
  return s0;
}
