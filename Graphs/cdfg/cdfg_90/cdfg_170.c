#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 846864656
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned int p_7, unsigned int p_11[3],
        signed char p_13[5][5], unsigned int p_15)
{
  unsigned short v_19;
  double v_17;
  double v_9;
  long long v_4;
  char v;
  int result;
  v_19 = (unsigned short)p_13[3][3];
  v_17 = (double)p_11[1];
  v_9 = -2.42144539802e+38;
  v_4 = -2220LL;
  v = (char)22;
  result = (int)p_11[0];
  if ((unsigned int)((int)v_19 % ((int)p_13[3][0] + 301)) <= (unsigned int)-7979025408.f % (
                                                             ((unsigned int)(
                                                              (int)v_9 - result) + ! p_7) + 143U)) {
    v = (char)(- (0.f / (- p + 791.f)));
    v_4 = -40LL;
  }
  else {
    result = (int)v | 96 % ((int)v_17 + 957);
    v_4 = ((long long)p_7 / (v_4 + 505LL)) / (long long)((unsigned int)v_9 / (
                                                         p_11[1] + 174U) + 43U) + (long long)(
          (unsigned int)(result + (int)p_13[0][3]) + p_15);
    v = (char)-111;
  }
  result = (int)((long long)v / (v_4 + 496LL));
  return result;
}


