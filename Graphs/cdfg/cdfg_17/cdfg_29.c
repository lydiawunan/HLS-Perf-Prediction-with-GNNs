#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294535505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, float p_11, long p_13, short p_17)
{
  unsigned int v_19;
  short v_15;
  short v_9;
  unsigned short v_7;
  short v_5;
  float v;
  signed char result;
  v_19 = 12041U;
  v_15 = (short)p_13;
  v_9 = (short)p_11;
  v = (float)p_17;
  result = (signed char)p_17;
  if ((unsigned int)p < ~ v_19) {
    v_5 = (short)(- (65173.f + p_11 * p_11));
    v_7 = (unsigned short)((long)v_9 / 41475L);
    v = (float)(1022948650 - (int)(~ (- v_7)));
  }
  else {
    v_5 = (short)((unsigned long)((p_13 * (long)v_15) * (long)(-28456 / (
                                                               (int)p_17 + 534))) % (unsigned long)(
                  ~ (196U * v_19) + 265U));
    result = (signed char)p;
    v = - (0.f / (v + 936.f));
  }
  result = (signed char)((int)(- v) + (int)p % ((int)result / ((int)v_5 + 643) + 286));
  return result;
}


