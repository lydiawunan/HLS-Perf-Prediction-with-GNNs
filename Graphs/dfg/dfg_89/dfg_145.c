#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628419508
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long long p_5, float p_11)
{
  signed char v_13;
  short v_9;
  unsigned int v_7;
  float v;
  short result;
  v_7 = (unsigned int)p_11;
  v = 8.89147776696e+37f;
  v_13 = (signed char)(- v);
  v_9 = (short)(~ ((unsigned int)4.6573593559e+12f + 4294937295U) + (unsigned int)(- (~ (
                (int)((signed char)v) * (int)v_13))));
  v = (float)((int)v_9 >> 15U) - p_11;
  result = (short)(18446744073709530826ULL % (unsigned long long)((~ p - (long long)(
                                                                   v + (float)p_5)) + 309LL) + (unsigned long long)v_7);
  return result;
}


