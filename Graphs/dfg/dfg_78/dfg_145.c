#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 907882090
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, float p_5[4], unsigned long long p_7, char p_9,
           signed char p_13[2][1])
{
  double v_11;
  long long v;
  double result;
  v = 727448208LL;
  v_11 = (double)((int)p + (int)p_13[1][0]);
  result = v_11;
  result = (double)((unsigned long long)v * ((((unsigned long long)p_5[3] ^ p_7) % (unsigned long long)(
                                              (int)((char)result) / (
                                              (int)p_9 + 945) + 932)) % 31ULL));
  result = (double)(~ ((int)((short)(- (result * 359.450348322))) - (int)p));
  return result;
}


