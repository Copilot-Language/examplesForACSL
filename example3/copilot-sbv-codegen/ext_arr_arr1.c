/* File: "ext_arr_arr1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 002*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == queue_0[ptr_0];
*/
SWord32 ext_arr_arr1(const SWord32 *queue_0, const SWord32 ptr_0)
{
  const SWord32 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  return s0;
}