#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175282957
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, signed char p_4, signed char p_9,
                       unsigned long long p_11, unsigned long long p_17)
{
  unsigned long long v_19;
  signed char v_15;
  char v_13;
  float v_7;
  signed char v;
  unsigned long long result;
  v_19 = (unsigned long long)p_9;
  v_15 = (signed char)p;
  result = (unsigned long long)p_9;
  v_13 = (char)(v_19 - (unsigned long long)(- ((double)p_17 + 2.99872822124e+38) - (double)(
                                            (-7905068032.f + (float)p_9) * 230.f)));
  v_7 = (float)(- (! ((unsigned long long)(! v_15) % ((p_17 ^ (unsigned long long)p_4) + 80ULL))));
  v = (signed char)(((double)((unsigned long long)((long)p_9 * -765858076L) + p_11) + (
                     (double)v_13 * 2.61746277296e+38 + -210.279018085)) * (double)(
                    126ULL + ~ result % (~ result + 559ULL)));
  result = (unsigned long long)((p + (unsigned int)3.36773120632e+38) % (unsigned int)(
                                ~ ((int)(! p_4) / ((int)v % ((int)((signed char)v_7) + 1020) + 652)) + 354));
  return result;
}


