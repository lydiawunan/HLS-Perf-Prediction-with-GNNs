#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036658581
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, char p_5, unsigned long long p_9, int p_13, char p_17)
{
  signed char v_27;
  unsigned char v_25;
  unsigned int v_23;
  unsigned long v_21;
  unsigned short v_19;
  char v_15;
  unsigned char v_11;
  short v_7;
  unsigned long long v;
  float result;
  v_27 = (signed char)p_13;
  v_25 = (unsigned char)248;
  v_19 = (unsigned short)p_9;
  v_15 = (char)p_13;
  v_11 = (unsigned char)p_5;
  v_23 = (unsigned int)((float)p_9 - -3.08849276707e+38f / ((float)((int)v_27 + (int)((signed char)8549234688.f)) + 406.f));
  if ((unsigned int)(! ((int)v_11 ^ p_13) * (int)v_25) != ~ (- (! v_23))) {
    v_7 = (short)0;
    v = ((unsigned long long)v_7 ^ 0) + ((unsigned long long)((int)v_7 % 55) | (
                                         p_9 + (unsigned long long)p_5));
    result = (float)((unsigned int)((int)(-3310818072.74 / ((double)v + 669.)) % (
                                    (int)p * (int)p_5 + 206)) % (((unsigned int)p + 4294932367U) + 874U));
  }
  else {
    v_23 = (unsigned int)((unsigned long long)p + ((unsigned long long)v_23 + p_9));
    v_21 = (unsigned long)(~ v_23);
    result = (float)(4UL * ((unsigned long)p_17 - ((unsigned long)v_19 + v_21)));
  }
  return result;
}


