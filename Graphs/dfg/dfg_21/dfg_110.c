#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 901144268
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, signed char p_4, unsigned int p_7, short p_9,
          float p_11)
{
  unsigned long v_17;
  int v_15;
  unsigned int v_13;
  double v;
  float result;
  v_17 = (unsigned long)p_11;
  v_15 = -194049675;
  v_13 = (unsigned int)(((-427606924LL | (long long)(! v_15)) - (long long)(- (
                         (int)((short)p_11) * -26831))) * (long long)(
                        ((unsigned long)((unsigned int)p_9 % (p_7 + 197U)) * (
                         v_17 - (unsigned long)p_11)) / ((unsigned long)(
                                                         ((double)p_7 + 8082889371.13) - (double)(
                                                         4294926630UL * v_17)) + 796UL)));
  v = (double)(! (! ((long long)p_7 - -356249800LL)) | (long long)(- (
               ((float)p_9 + p_11) - (float)((unsigned int)p % (v_13 + 453U)))));
  result = (float)(- v);
  result = - ((float)((int)((signed char)result) + (int)p) - - result) + 
           2.95136380139e+38f * (float)((unsigned long long)(! p_4) + 59084ULL);
  return result;
}


