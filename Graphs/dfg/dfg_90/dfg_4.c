#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 916169083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned long long p_4, double p_7)
{
  char v_11;
  float v_9;
  short v;
  short result;
  v_11 = (char)84;
  v = (short)(~ (! (! (- v_11))));
  v_9 = (float)-13043;
  result = (short)((float)((0ULL % ((p_4 + 31172ULL) + 352ULL)) * (unsigned long long)(
                           (3596011897U - (unsigned int)v) + (unsigned int)(
                           (int)((short)p_7) ^ (int)v))) - v_9 * -64882.f);
  result = (short)((52296 - (int)result) + (int)p);
  return result;
}


