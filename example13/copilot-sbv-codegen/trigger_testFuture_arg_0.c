/* File: "trigger_testFuture_arg_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 ((((((((((s4 || drop 1 s4) || drop 2 s4) || drop 3 s4) || drop 4 s4) || drop 5 s4) || drop 6 s4) || drop 7 s4) || drop 8 s4) || drop 9 s4) || drop 10 s4)
*/
/*@
 assigns \nothing;
 ensures \result == (((((((((((((((((((((queue_4[ptr_4]) || (queue_4[(ptr_4 + 1) % 13]))) || (queue_4[(ptr_4 + 2) % 13]))) || (queue_4[(ptr_4 + 3) % 13]))) || (queue_4[(ptr_4 + 4) % 13]))) || (queue_4[(ptr_4 + 5) % 13]))) || (queue_4[(ptr_4 + 6) % 13]))) || (queue_4[(ptr_4 + 7) % 13]))) || (queue_4[(ptr_4 + 8) % 13]))) || (queue_4[(ptr_4 + 9) % 13]))) || (queue_4[(ptr_4 + 10) % 13])));
*/
SBool trigger_testFuture_arg_0(const SBool *queue_4,
                               const SWord32 ptr_4)
{
  const SBool   s0 = queue_4[0];
  const SBool   s1 = queue_4[1];
  const SBool   s2 = queue_4[2];
  const SBool   s3 = queue_4[3];
  const SBool   s4 = queue_4[4];
  const SBool   s5 = queue_4[5];
  const SBool   s6 = queue_4[6];
  const SBool   s7 = queue_4[7];
  const SBool   s8 = queue_4[8];
  const SBool   s9 = queue_4[9];
  const SBool   s10 = queue_4[10];
  const SBool   s11 = queue_4[11];
  const SBool   s12 = queue_4[12];
  const SWord32 s13 = ptr_4;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11, s12
  };
  const SWord32 s15 = (0x0000000dUL == 0) ? 0 : (s13 % 0x0000000dUL);
  const SBool   s16 = table0[s15];
  const SWord32 s18 = s13 + 0x00000001UL;
  const SWord32 s19 = (0x0000000dUL == 0) ? 0 : (s18 % 0x0000000dUL);
  const SBool   s20 = table0[s19];
  const SBool   s21 = s16 | s20;
  const SWord32 s23 = s13 + 0x00000002UL;
  const SWord32 s24 = (0x0000000dUL == 0) ? 0 : (s23 % 0x0000000dUL);
  const SBool   s25 = table0[s24];
  const SBool   s26 = s21 | s25;
  const SWord32 s28 = s13 + 0x00000003UL;
  const SWord32 s29 = (0x0000000dUL == 0) ? 0 : (s28 % 0x0000000dUL);
  const SBool   s30 = table0[s29];
  const SBool   s31 = s26 | s30;
  const SWord32 s33 = s13 + 0x00000004UL;
  const SWord32 s34 = (0x0000000dUL == 0) ? 0 : (s33 % 0x0000000dUL);
  const SBool   s35 = table0[s34];
  const SBool   s36 = s31 | s35;
  const SWord32 s38 = s13 + 0x00000005UL;
  const SWord32 s39 = (0x0000000dUL == 0) ? 0 : (s38 % 0x0000000dUL);
  const SBool   s40 = table0[s39];
  const SBool   s41 = s36 | s40;
  const SWord32 s43 = s13 + 0x00000006UL;
  const SWord32 s44 = (0x0000000dUL == 0) ? 0 : (s43 % 0x0000000dUL);
  const SBool   s45 = table0[s44];
  const SBool   s46 = s41 | s45;
  const SWord32 s48 = s13 + 0x00000007UL;
  const SWord32 s49 = (0x0000000dUL == 0) ? 0 : (s48 % 0x0000000dUL);
  const SBool   s50 = table0[s49];
  const SBool   s51 = s46 | s50;
  const SWord32 s53 = s13 + 0x00000008UL;
  const SWord32 s54 = (0x0000000dUL == 0) ? 0 : (s53 % 0x0000000dUL);
  const SBool   s55 = table0[s54];
  const SBool   s56 = s51 | s55;
  const SWord32 s58 = s13 + 0x00000009UL;
  const SWord32 s59 = (0x0000000dUL == 0) ? 0 : (s58 % 0x0000000dUL);
  const SBool   s60 = table0[s59];
  const SBool   s61 = s56 | s60;
  const SWord32 s63 = s13 + 0x0000000aUL;
  const SWord32 s64 = (0x0000000dUL == 0) ? 0 : (s63 % 0x0000000dUL);
  const SBool   s65 = table0[s64];
  const SBool   s66 = s61 | s65;

  return s66;
}
