#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844991619
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, double p_11[4][2][5], float p_13, float p_21)
{
  unsigned long long v_19;
  float v_17;
  float v_15;
  float v_9;
  unsigned long v_7;
  char v_5;
  char v;
  double result;
  v_19 = 913721126ULL;
  v_17 = (float)p_11[2][0][3];
  v_15 = 789.714660645f;
  v_7 = (unsigned long)p_11[2][0][0];
  v = (char)p_13;
  v_5 = (char)1.71324946015e+38f;
  v_9 = v_17 / ((float)p + 734.f) - (-27335.f / ((float)v_19 * p_21 + 566.f)) * (float)(
                                    (int)v_17 * 4579 ^ ((int)v_5 - (int)p));
  result = ((double)(((int)v_5 << (v_7 & 7UL)) + (int)v_9) * (- p_11[3][1][3] + (double)(
                                                              p_13 + p_13))) / (double)(
           - v_15 + 135.f);
  result = (result / ((double)((int)v % ((232 ^ (int)p) + 827)) + 161.)) / 3.03216806315e+38;
  return result;
}


