#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 430242635
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, float p_7, double p_9[4], int p_11[4][4])
{
  double v_5;
  float v;
  short result;
  v_5 = (double)p;
  v = (float)((int)((char)2351075072.f) & -95);
  result = (short)(((double)v - (v_5 - 0.)) / (- ((double)p_7 / ((p_9[3] - (double)p_11[2][3]) + 31.)) + 489.));
  v = (float)698836165LL;
  result = (short)((double)v * ((double)((float)((int)result - (int)((short)-4038387200.f)) - (
                                         (float)p + v)) - - v_5 / (double)(
                                                          p_7 + 1017.f)));
  return result;
}


