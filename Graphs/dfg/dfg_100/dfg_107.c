#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016750129
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[4][4][1], short p_7, short p_9[3][4],
              double p_13)
{
  float v_17;
  unsigned long long v_15;
  unsigned int v_11;
  unsigned int v_4;
  char v;
  long long result;
  v_4 = (unsigned int)p_9[2][3];
  v = (char)-79;
  v_17 = (float)((unsigned int)(- p_13) + ~ (4294908346U >> 18L));
  v_15 = (unsigned long long)((long long)((unsigned int)(! p_7) / 56578U) / 7921LL ^ 1018998390LL);
  v_11 = (unsigned int)(v_15 * (unsigned long long)((float)p_7 - (float)v / (
                                                                 75366080.f * v_17 + 246.f)));
  result = (long long)(((unsigned long long)(-4082129408.f + (float)(
                                             82 + (int)v)) + (((unsigned long long)v_4 ^ p[1][1][0]) - (unsigned long long)(- p_7))) + (unsigned long long)(~ (
                       (unsigned int)(- p_9[0][3]) / ((v_11 | (unsigned int)p_13) + 582U))));
  return result;
}


