#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 894718571
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, int p_5[1][5][2], long p_7, int p_9, long p_13)
{
  float v_19;
  long long v_17;
  char v_15;
  signed char v_11;
  char v;
  double result;
  v_19 = -765916032.f;
  v_17 = -157908738LL;
  v_11 = (signed char)p_9;
  v_15 = (char)p_9;
  result = (double)((long long)(((long)((int)v_11 / 211) ^ (p_13 - p_7)) + 
                                ~ p_7 * (long)v_15) % (((long long)p_9 / (
                                                        (long long)p_13 / (
                                                        v_17 + 707LL) + 297LL) - (long long)(
                                                        p_13 % ((long)v_19 + 437L))) + 740LL));
  v = (char)(- (2.74108967919e+38 * (double)(~ (p_7 / (long)(p_9 + 254)))));
  result = (double)((int)(- (- result) - -182.139128536 / ((double)(p % (unsigned int)(
                                                                    (int)v + 169)) + 816.)) % (
                    p_5[0][2][1] + 380));
  return result;
}


