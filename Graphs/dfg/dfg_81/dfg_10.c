#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 75945881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned int p_7, long p_9[2][4], long p_11[4][3])
{
  float v_19;
  short v_17;
  int v_15;
  double v_13;
  unsigned long long v_5;
  long v;
  double result;
  v_19 = 7199659008.f;
  v_17 = (short)p_11[2][2];
  v_5 = 15484ULL;
  v_15 = - (- (210 - (int)v_17) % ((int)v_19 + 294));
  v_13 = (double)(unsigned short)5691;
  v = (long)(~ (v_5 % (unsigned long long)((unsigned long)p_7 * (unsigned long)p_9[1][3] + 816UL)) | (unsigned long long)(
             - p_11[3][2] / (long)(~ ((int)v_13 + v_15) + 304)));
  result = (double)(~ (3969912428UL % (0UL / (unsigned long)((long)p * v + 642L) + 410UL)));
  return result;
}


