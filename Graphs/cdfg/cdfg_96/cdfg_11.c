#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 649456209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, double p_5, char p_7, unsigned short p_9,
                long long p_13)
{
  unsigned long v_17;
  double v_15;
  float v_11;
  double v;
  signed char result;
  v_15 = -2.06452042685e+38;
  v_11 = 1.173280402e+38f;
  v = 983.974352487;
  result = (signed char)97;
  while (- ((float)((int)result * -34) * v_11) < (float)(- ((unsigned long long)(
                                                            (long long)result / (
                                                            p_13 + 694LL)) / (
                                                            ((unsigned long long)p_9 + 487918726ULL) + 316ULL)))) {
    v_17 = v_15 / 734856068.;
    v = (double)(~ (v_17 - (unsigned long)(p_5 / -718541538.)));
    v_15 = (double)(- ((int)p_5 / (p + 248)));
    v_11 = (float)((unsigned long long)((int)(- v_11) | (int)p_9 / ((int)p_7 + 179)) / (
                   ((unsigned long long)(- p_13) - 18446744072824770587ULL) + 109ULL));
  }
  while_0_break: ;
  result = (signed char)(((p - 14) - p) / ((int)v + 246));
  return result;
}


