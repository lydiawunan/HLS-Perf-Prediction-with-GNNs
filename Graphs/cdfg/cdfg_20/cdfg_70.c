#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020885961
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[1], unsigned long long p_21, long long p_23)
{
  signed char v_19;
  double v_17;
  long long v_15;
  unsigned int v_13;
  int v_11;
  long v_9;
  long v_7;
  unsigned long v_5;
  unsigned short v;
  unsigned char result;
  v_19 = (signed char)p_23;
  v_17 = (double)p[0];
  v_15 = p_23;
  v_13 = (unsigned int)p_21;
  v_9 = -23966L;
  v_7 = -540632334L;
  v_5 = 39980UL;
  result = (unsigned char)146;
  if (p_21 * ((p_21 / (unsigned long long)(v_15 + 416LL)) * (unsigned long long)v_19) > (unsigned long long)(
      ! p[0] * ((long long)result % (p_23 + 884LL)) & (long long)(! (
      v_9 ^ 118546579L)))) {
    v_11 = (int)(((unsigned long long)(~ p[0]) + 18446744073709546030ULL) * (unsigned long long)(
                 ((unsigned long)v_13 * (unsigned long)v_9) % ((unsigned long)(
                                                               -2.79629423312e+38f - (float)v_15) + 88UL)));
    v_9 = (long)(11342LL >> (! (~ v_11) & 63));
    v = (unsigned short)((-1.844213276e+38 / ((double)(29003UL % (unsigned long)(
                                                       v_9 + 875L)) + 553.)) / 653.);
  }
  else {
    v_7 = (long)(p_21 % (unsigned long long)(v_5 + 798UL) - (unsigned long long)(~ (~ p_23)));
    v = (unsigned short)((v_17 * (double)p[0] - (double)((unsigned long long)v_19 + 18446744072728238523ULL)) / 53963.);
    v_5 = (unsigned long)v_7;
  }
  result = (unsigned char)(((long long)v | p[0] % (p[0] + 233LL)) % (long long)(
                           (- v_5 - (unsigned long)v_7) + 898UL));
  return result;
}


