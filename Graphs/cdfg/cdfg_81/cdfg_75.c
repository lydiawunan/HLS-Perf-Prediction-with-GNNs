#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 336524644
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p[2][2], unsigned short p_5, unsigned long long p_7,
          long long p_9, int p_11[3][3][4])
{
  unsigned short v_13;
  unsigned short v;
  float result;
  v_13 = (unsigned short)p_7;
  if ((unsigned long long)p_5 - (18446744073709551558ULL + p_7 * 22ULL) <= (unsigned long long)(
      (p_9 - (long long)p_11[2][0][1]) * (long long)((int)((unsigned short)-302.891357422f) ^ (int)v_13) >> (
      (unsigned long long)p[1][0] / (((unsigned long long)p_5 + 805856324ULL) + 1018ULL) & 63ULL))) 
    v = (unsigned short)p[0][0];
  else v = (unsigned short)p[1][1];
  result = (float)(-25827 - (int)(~ (! v)));
  return result;
}


