#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 483099695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned long long p_4, short p_9, signed char p_11,
          unsigned char p_19)
{
  signed char v_17;
  double v_15;
  unsigned long long v_13;
  char v_7;
  int v;
  short result;
  v_17 = (signed char)-99;
  v_7 = (char)p_19;
  v_13 = (unsigned long long)(p % 60LL) * (18446744073709546287ULL + (
                                           18446744073709551542ULL ^ p_4)) + (unsigned long long)p_19;
  v_15 = (double)(char)89;
  v = (int)((((long long)(~ v_7) % -41463LL) % ((p - (long long)p_9) * (long long)(
                                                -12636 - (int)p_11) + 541LL)) / (
            (long long)((double)v_13 * (127. - v_15 / ((double)v_17 + 915.))) + 235LL));
  result = (short)(19ULL / ((unsigned long long)(~ p) * ((p_4 * 18446744073709513893ULL) * (unsigned long long)(
                                                         25026LL + (long long)v)) + 339ULL));
  return result;
}


