#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83517979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned long long p_7, double p_13,
          unsigned short p_19)
{
  unsigned int v_17;
  long long v_15;
  float v_11;
  unsigned int v_9;
  signed char v_5;
  unsigned short v;
  short result;
  v_17 = 143369242U;
  v_9 = (unsigned int)p_7;
  v_5 = (signed char)-46;
  v_15 = -2572LL;
  v_11 = (float)(~ (! (v_17 / (unsigned int)((int)v_5 + 69)) - (unsigned int)(! (
                    -37 + (int)p_19))));
  v = (unsigned short)((long long)(((double)(2.61071809538e+38f - (float)v_9) * (
                                    (double)v_11 - p_13)) / 857.) + - (
                       (p & 75LL) ^ 139LL));
  result = (short)((! ((long long)v / (p + 395LL)) - (long long)v_5) << (
                   p_7 & 63ULL));
  return result;
}


