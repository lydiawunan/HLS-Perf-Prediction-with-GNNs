#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 643693986
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p[4], signed char p_5, long p_9)
{
  short v_7;
  float v;
  short result;
  v_7 = (short)26740;
  result = (short)((58380UL % ((unsigned long)(-683028306L | (long)p_5) / 57UL + 118UL)) % (unsigned long)(
                   (long)((int)((short)-9271559168.f) * (int)v_7) / (
                   (5939L - - p_9) + 501L) + 952L));
  v = (float)result;
  result = (short)v;
  result = (short)((- (! p[0]) - 18446744073709551615ULL) * ! (! (p[1] % (unsigned long long)(
                                                                  (int)result + 376))));
  return result;
}


