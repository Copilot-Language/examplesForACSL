/* File: "update_state_23.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s6 && (((((((((((s21 || s22) || s23) || s24) || s25) || s26) || s15) || s16) || s17) || s18) || s19) || s20))
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_6[ptr_6]) && (((((((((((((((((((((((queue_21[ptr_21]) || (queue_22[ptr_22]))) || (queue_23[ptr_23]))) || (queue_24[ptr_24]))) || (queue_25[ptr_25]))) || (queue_26[ptr_26]))) || (queue_15[ptr_15]))) || (queue_16[ptr_16]))) || (queue_17[ptr_17]))) || (queue_18[ptr_18]))) || (queue_19[ptr_19]))) || (queue_20[ptr_20])))));
*/
SBool update_state_23(const SBool *queue_6, const SWord32 ptr_6,
                      const SBool *queue_21, const SWord32 ptr_21, const SBool *queue_22,
                      const SWord32 ptr_22, const SBool *queue_23, const SWord32 ptr_23,
                      const SBool *queue_24, const SWord32 ptr_24, const SBool *queue_25,
                      const SWord32 ptr_25, const SBool *queue_26, const SWord32 ptr_26,
                      const SBool *queue_15, const SWord32 ptr_15, const SBool *queue_16,
                      const SWord32 ptr_16, const SBool *queue_17, const SWord32 ptr_17,
                      const SBool *queue_18, const SWord32 ptr_18, const SBool *queue_19,
                      const SWord32 ptr_19, const SBool *queue_20, const SWord32 ptr_20)
{
  const SBool   s0 = queue_6[0];
  const SBool   s1 = queue_6[1];
  const SBool   s2 = queue_6[2];
  const SBool   s3 = queue_6[3];
  const SBool   s4 = queue_6[4];
  const SBool   s5 = queue_6[5];
  const SWord32 s6 = ptr_6;
  const SBool   s7 = queue_21[0];
  const SWord32 s8 = ptr_21;
  const SBool   s9 = queue_22[0];
  const SWord32 s10 = ptr_22;
  const SBool   s11 = queue_23[0];
  const SWord32 s12 = ptr_23;
  const SBool   s13 = queue_24[0];
  const SWord32 s14 = ptr_24;
  const SBool   s15 = queue_25[0];
  const SWord32 s16 = ptr_25;
  const SBool   s17 = queue_26[0];
  const SWord32 s18 = ptr_26;
  const SBool   s19 = queue_15[0];
  const SWord32 s20 = ptr_15;
  const SBool   s21 = queue_16[0];
  const SWord32 s22 = ptr_16;
  const SBool   s23 = queue_17[0];
  const SWord32 s24 = ptr_17;
  const SBool   s25 = queue_18[0];
  const SWord32 s26 = ptr_18;
  const SBool   s27 = queue_19[0];
  const SWord32 s28 = ptr_19;
  const SBool   s29 = queue_20[0];
  const SWord32 s30 = ptr_20;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s32 = (0x00000006UL == 0) ? 0 : (s6 % 0x00000006UL);
  const SBool   s33 = table0[s32];
  const SBool   s34 = s7 | s9;
  const SBool   s35 = s11 | s34;
  const SBool   s36 = s13 | s35;
  const SBool   s37 = s15 | s36;
  const SBool   s38 = s17 | s37;
  const SBool   s39 = s19 | s38;
  const SBool   s40 = s21 | s39;
  const SBool   s41 = s23 | s40;
  const SBool   s42 = s25 | s41;
  const SBool   s43 = s27 | s42;
  const SBool   s44 = s29 | s43;
  const SBool   s45 = s33 & s44;

  return s45;
}
