#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 994863495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, float p_5, unsigned short p_9, unsigned long long p_11,
         float p_13)
{
  int v_19;
  unsigned long long v_17;
  unsigned long long v_15;
  unsigned char v_7;
  long v;
  long result;
  v_17 = 18446744073709545809ULL;
  v_7 = (unsigned char)p_13;
  result = 30271L;
  v_15 = (unsigned long long)(! result);
  v_19 = (int)(~ (~ result) / -51349235L);
  v = (long)((float)(- ((int)((unsigned char)p_5) >> ((int)v_7 & 7))) * (
             (float)((unsigned long long)p_9 & p_11) - (p_13 - (float)v_15)) + (float)(
             ~ (v_17 * (unsigned long long)p_5) << (~ (v_19 / ((int)p_9 + 430)) & 63)));
  result = (long)p >> (v & 31L);
  return result;
}


