/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 not Extf_func1()
*/
/*@
 assigns \nothing;
 ensures \result == (! ((ext_func1_0)));
*/
SBool update_state_1(const SBool ext_func1_0)
{
  const SBool s0 = ext_func1_0;
  const SBool s1 = !s0;

  return s1;
}
