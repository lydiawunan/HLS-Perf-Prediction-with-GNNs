#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 541989365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, short p_4, signed char p_11, unsigned short p_13,
          unsigned long p_15[1])
{
  float v_17;
  long v_9;
  unsigned long long v_7;
  unsigned long v;
  short result;
  v_17 = -1.46615150066e+38f;
  v_7 = 594747542ULL;
  if (~ ((unsigned long)p_11 - p_15[0]) % (unsigned long)(- (27 - (int)((signed char)v_17)) + 1019) > (unsigned long)p_4) {
    v_9 = (long)(((v_7 + (unsigned long long)p_11) / (unsigned long long)(
                  (int)p_13 + 678)) % (! v_7 + 432ULL));
    v = (unsigned long)(- (((unsigned long long)-1662996992.f - v_7) * (unsigned long long)(
                           v_9 | (long)p)));
    v = v;
  }
  else v = (unsigned long)(-3264078944U);
  result = (short)(- (p * 4708.f) * (float)((unsigned long)(~ p_4) * (
                                            v - 4294967180UL)));
  return result;
}


