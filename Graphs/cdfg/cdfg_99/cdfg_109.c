#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 867828023
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, short p_11, unsigned short p_13)
{
  short v_15;
  float v_9;
  signed char v_7;
  unsigned long long v_4;
  long v;
  unsigned int result;
  v_15 = (short)10215;
  v_9 = (float)p_13;
  v_7 = (signed char)p_11;
  v_4 = (unsigned long long)p;
  v = 56070L;
  result = (unsigned int)p_11;
  while (((unsigned long long)(~ v) & v_4) * (v_4 * 108434ULL) >= (unsigned long long)(
         (int)p + (int)v_7)) {
    v_7 = (signed char)((((unsigned int)p + 3548555296U) ^ (unsigned int)(
                         (int)p_11 & (int)p_13)) / (unsigned int)(((int)v_9 & (
                                                                   123 & (int)v_15)) + 19));
    result = (unsigned int)(1.04535552762e+38 * (double)(-444812037 ^ (int)(! p)));
    v_4 = - (v_4 + 41740ULL) % (unsigned long long)(! ((int)p * 183) + 751);
  }
  while_0_break: ;
  return result;
}


