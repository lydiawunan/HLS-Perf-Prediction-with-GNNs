#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 772587088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, float p_5, float p_9, long long p_11[1],
                unsigned long p_13)
{
  double v_17;
  float v_15;
  char v_7;
  double v;
  signed char result;
  v_17 = 2.17937494276e+38;
  v_15 = (float)2890885888U;
  v = (double)((long long)(v_17 - (double)((p_9 + 23344.f) - (float)(
                                           p_11[0] * p_11[0]))) | -3985597986LL);
  v_7 = (char)(- (p_11[0] % (long long)(p_13 + 450UL)) / ((long long)v_15 + 705LL));
  result = (signed char)(! ((unsigned int)(- v / (p * (double)p_5 + 91.)) ^ (unsigned int)(
                            (float)v_7 / (p_9 + 511.f))));
  return result;
}


