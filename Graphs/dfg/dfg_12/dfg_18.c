#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5291755
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned char p_5, long long p_7, float p_15,
         unsigned short p_17[2][1][1])
{
  char v_13;
  signed char v_11;
  long long v_9;
  unsigned char v;
  long result;
  v_13 = (char)110;
  v_11 = (signed char)122;
  v_9 = (long long)(-2294.f / (((float)v_13 - p_15 / ((float)((int)p_17[0][0][0] ^ (int)p) + 391.f)) + 260.f));
  result = (long)(- ((p_7 % (v_9 + 257LL)) % 1009185335LL) / (long long)(
                  (int)v_11 + 456));
  v = (unsigned char)(~ (result * (long)p + (long)((int)p_5 / ((int)p + 616))) - 56218L);
  result = (long)(! (~ v));
  return result;
}


