/* File: "trigger_testRelease_arg_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 (((((s0 && drop 1 s0) && drop 2 s0) && drop 3 s0) && drop 4 s0) || ((((s0 && s1) || ((s0 && drop 1 s0) && drop 1 s1)) || (((s0 && drop 1 s0) && drop 2 s0) && drop 2 s1)) || ((((s0 && drop 1 s0) && drop 2 s0) && drop 3 s0) && drop 3 s1)))
*/
/*@
 assigns \nothing;
 ensures \result == (((((queue_0[ptr_0] && queue_0[(ptr_0 + 1) % 5]) && queue_0[(ptr_0 + 2) % 5]) && queue_0[(ptr_0 + 3) % 5]) && queue_0[(ptr_0 + 4) % 5]) || ((((queue_0[ptr_0] && queue_1[ptr_1]) || ((queue_0[ptr_0] && queue_0[(ptr_0 + 1) % 5]) && queue_1[(ptr_1 + 1) % 5])) || (((queue_0[ptr_0] && queue_0[(ptr_0 + 1) % 5]) && queue_0[(ptr_0 + 2) % 5]) && queue_1[(ptr_1 + 2) % 5])) || ((((queue_0[ptr_0] && queue_0[(ptr_0 + 1) % 5]) && queue_0[(ptr_0 + 2) % 5]) && queue_0[(ptr_0 + 3) % 5]) && queue_1[(ptr_1 + 3) % 5])));
*/
SBool trigger_testRelease_arg_0(const SBool *queue_0,
                                const SWord32 ptr_0, const SBool *queue_1, const SWord32 ptr_1)
{
  const SBool   s0 = queue_0[0];
  const SBool   s1 = queue_0[1];
  const SBool   s2 = queue_0[2];
  const SBool   s3 = queue_0[3];
  const SBool   s4 = queue_0[4];
  const SWord32 s5 = ptr_0;
  const SBool   s6 = queue_1[0];
  const SBool   s7 = queue_1[1];
  const SBool   s8 = queue_1[2];
  const SBool   s9 = queue_1[3];
  const SBool   s10 = queue_1[4];
  const SWord32 s11 = ptr_1;
  const SBool table0[] = {
      s0, s1, s2, s3, s4
  };
  const SBool table1[] = {
       s6,  s7,  s8,  s9, s10
  };
  const SWord32 s13 = (0x00000005UL == 0) ? s5 : (s5 % 0x00000005UL);
  const SBool   s14 = table0[s13];
  const SWord32 s16 = s5 + 0x00000001UL;
  const SWord32 s17 = (0x00000005UL == 0) ? s16 : (s16 % 0x00000005UL);
  const SBool   s18 = table0[s17];
  const SBool   s19 = s14 && s18;
  const SWord32 s21 = s5 + 0x00000002UL;
  const SWord32 s22 = (0x00000005UL == 0) ? s21 : (s21 % 0x00000005UL);
  const SBool   s23 = table0[s22];
  const SBool   s24 = s19 && s23;
  const SWord32 s26 = s5 + 0x00000003UL;
  const SWord32 s27 = (0x00000005UL == 0) ? s26 : (s26 % 0x00000005UL);
  const SBool   s28 = table0[s27];
  const SBool   s29 = s24 && s28;
  const SWord32 s31 = s5 + 0x00000004UL;
  const SWord32 s32 = (0x00000005UL == 0) ? s31 : (s31 % 0x00000005UL);
  const SBool   s33 = table0[s32];
  const SBool   s34 = s29 && s33;
  const SWord32 s35 = (0x00000005UL == 0) ? s11 : (s11 % 0x00000005UL);
  const SBool   s36 = table1[s35];
  const SBool   s37 = s14 && s36;
  const SWord32 s38 = s11 + 0x00000001UL;
  const SWord32 s39 = (0x00000005UL == 0) ? s38 : (s38 % 0x00000005UL);
  const SBool   s40 = table1[s39];
  const SBool   s41 = s19 && s40;
  const SBool   s42 = s37 || s41;
  const SWord32 s43 = s11 + 0x00000002UL;
  const SWord32 s44 = (0x00000005UL == 0) ? s43 : (s43 % 0x00000005UL);
  const SBool   s45 = table1[s44];
  const SBool   s46 = s24 && s45;
  const SBool   s47 = s42 || s46;
  const SWord32 s48 = s11 + 0x00000003UL;
  const SWord32 s49 = (0x00000005UL == 0) ? s48 : (s48 % 0x00000005UL);
  const SBool   s50 = table1[s49];
  const SBool   s51 = s29 && s50;
  const SBool   s52 = s47 || s51;
  const SBool   s53 = s34 || s52;

  return s53;
}
