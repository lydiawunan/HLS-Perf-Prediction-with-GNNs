#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 267374881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned short p_5, int p_9, long long p_15,
         long p_17[3][3])
{
  long long v_13;
  unsigned long long v_11;
  float v_7;
  unsigned char v;
  char result;
  v_11 = 18446744073709521746ULL;
  v_13 = ~ ((p_15 & -41LL) * (long long)(p_17[1][0] + (long)2.48884065858e+38) + (long long)(
            p_9 % 188 + 14042));
  v = (unsigned char)(~ (~ (18446744073064229731ULL - (v_11 + (unsigned long long)v_13))));
  v_7 = (float)(4294956537LL - (p + (long long)(35582 / (p_9 + 168))));
  result = (char)(~ (p + (long long)((-49239 / ((int)v + 43)) * ((int)p_5 * (int)((unsigned short)v_7)))));
  return result;
}


