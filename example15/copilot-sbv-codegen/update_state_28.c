/* File: "update_state_28.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 ((extern "e" == 0) && s2)
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_e == 0) && queue_2[ptr_2]);
*/
SBool update_state_28(const SInt8 ext_e, const SBool *queue_2,
                      const SWord32 ptr_2)
{
  const SInt8 s0 = ext_e;
  const SBool s1 = queue_2[0];
  const SWord32 s2 = ptr_2;
  const SBool s4 = s0 == 0;
  const SBool s5 = s4 && s1;

  return s5;
}