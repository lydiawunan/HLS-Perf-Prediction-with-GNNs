//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 451944421
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[1], float p_4, char p_6, float p_8, float p_10)
{
  double v_15;
  unsigned long long v_13;
  unsigned int v;
  long long result;
  v_15 = 1.33701788366e+38;
  v = 12395U;
  v_13 = (unsigned long long)(68U - (! (v * (unsigned int)v_15) + (unsigned int)(! (
                                     p[0] * 43))));
  v = (unsigned int)(- (v_13 ^ 0ULL) << 44);
  result = (long long)v;
  result = (long long)(((float)(! result * (long long)p[0]) / (- p_4 / 658.f + 985.f)) * (
                       ((float)((int)((signed char)p_4) + -86) / ((float)p_6 / (
                                                                  p_8 + 906.f) + 107.f)) / (
                       - (p_10 - 12.f) + 531.f)));
  return result;
}


