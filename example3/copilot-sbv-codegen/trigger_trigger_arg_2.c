/* File: "trigger_trigger_arg_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 extern "arr2[(cast) extern "idx3"]"
*/
/*@
 assigns \nothing;
 ensures \result == ext_arr2_2;
*/
SWord32 trigger_trigger_arg_2(const SWord32 ext_arr2_2)
{
  const SWord32 s0 = ext_arr2_2;
  return s0;
}