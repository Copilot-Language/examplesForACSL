/* File: "observer_i.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 not ((s4 mod 2) == 0)
*/
/*@
 assigns \nothing;
 ensures \result == (! ((((((queue_4[ptr_4]) % (2))) == (0)))));
*/
SBool observer_i(const SWord64 *queue_4, const SWord32 ptr_4)
{
  const SWord64 s0 = queue_4[0];
  const SWord32 s1 = ptr_4;
  const SWord64 s3 = (0x0000000000000002ULL == 0) ? s0 : (s0 % 0x0000000000000002ULL);
  const SBool   s5 = s3 == 0x0000000000000000ULL;
  const SBool   s6 = !s5;

  return s6;
}
