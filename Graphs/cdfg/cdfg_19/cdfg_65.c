#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 110536971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[4], float p_4[1][5], float p_15[5],
           unsigned int p_19, unsigned long p_21)
{
  unsigned int v_17;
  long long v_13;
  unsigned short v_11;
  short v_9;
  unsigned int v_7;
  float v;
  double result;
  v_17 = 11692U;
  v_13 = 42444LL;
  v_11 = (unsigned short)p_21;
  v_7 = (unsigned int)p[1];
  if (-7203909869LL + (long long)(- (p_21 * (unsigned long)7392783360.f)) != (long long)(~ v_7)) {
    v_9 = (short)(((long long)v_11 / (v_13 + 983LL) | -61149LL) + (long long)(
                  (unsigned int)(p_4[0][3] - p_15[0]) - - v_17));
    v = (float)(~ ((int)(- v_9) / ((int)((short)p_4[0][0]) + 284)));
    v_7 = (unsigned int)(1.84467440737e+19f + v);
  }
  else {
    v = (float)p_19;
    v_7 = (unsigned int)p_4[0][2];
  }
  result = (double)(((float)(! p[3]) * - p_4[0][0]) / ((p_4[0][4] / (
                                                        v + 360.f) + (float)(
                                                        4294962768UL % (unsigned long)(
                                                        v_7 + 805U))) + 679.f));
  return result;
}


