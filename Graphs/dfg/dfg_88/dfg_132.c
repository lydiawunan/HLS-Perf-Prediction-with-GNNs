#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072207407
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, double p_5, signed char p_9[5][3][3], short p_11,
          long p_13)
{
  double v_15;
  double v_7;
  char v;
  float result;
  v_15 = p_5;
  v_7 = 7683828314.18;
  result = -4134870784.f;
  result = (float)((v_15 / 23515589. - ((double)result + p) * (double)(
                                       (float)p_9[4][0][2] / -2.89090782026e+38f)) * 4294962217.);
  v = (char)p;
  result = (float)(((int)((signed char)v_7) % ((int)p_9[0][0][0] + 632)) / (
                   ((int)((char)((float)((long)p_11 / (p_13 + 731L)) - (
                                 1.84467440737e+19f - result))) + -37) + 851));
  result = (float)((int)v * (100 / ((int)((signed char)((402.776794434 - p) / (
                                                        ((double)result - p_5) + 175.))) + 152)));
  return result;
}


