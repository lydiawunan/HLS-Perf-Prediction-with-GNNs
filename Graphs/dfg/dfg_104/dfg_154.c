#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 259911136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, signed char p_4[1][2][2], signed char p_11,
        short p_13[1])
{
  double v_9;
  unsigned char v_7;
  signed char v;
  int result;
  v_9 = (double)p_13[0];
  v = (signed char)-68;
  result = (int)p_13[0];
  v_7 = (unsigned char)((double)(- (! result)) - v_9);
  result = (int)(p - p);
  result -= (int)((double)(result * (int)v) / ((double)v_7 * v_9 + 925.)) / (
            - ((int)p_11 | (int)p_13[0]) + 733);
  result = (int)(~ (p / 32LL) / (long long)(~ (71 / ((int)p_4[0][0][1] + 188)) + 972) ^ (long long)result);
  return result;
}


