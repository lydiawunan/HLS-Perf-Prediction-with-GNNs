#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502024696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[4], char p_9, char p_11, int p_13[5][1], double p_15)
{
  unsigned short v_19;
  unsigned long v_17;
  unsigned long v_7;
  double v_4;
  unsigned long long v;
  float result;
  v_19 = (unsigned short)23733;
  v_17 = (unsigned long)p[3];
  result = -440943104.f;
  v = ~ ((unsigned long long)(- (~ v_17)) / (((unsigned long long)p_9 ^ 18446744073437169430ULL) / (unsigned long long)(
                                             ((int)v_19 & 21020) + 198) + 770ULL));
  v_4 = - (p_15 / (double)(- result / ((float)((int)p[3] + (int)p_11) + 612.f) + 124.f));
  v_7 = (unsigned long)((int)p_9 / (~ (- (p_13[0][0] & (int)p[1])) + 914));
  result = (float)(0ULL / ((- v - (unsigned long long)((int)((char)v_4) * (int)p[1])) + 878ULL) - (unsigned long long)(
                   v_7 % 2412143136UL + (unsigned long)((unsigned int)(
                                                        (int)p_9 % ((int)p_11 + 495)) ^ 16787U)));
  return result;
}


