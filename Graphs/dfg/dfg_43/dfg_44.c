#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896002628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, float p_5, unsigned long long p_7,
         signed char p_9[3][5][1], long long p_15)
{
  double v_13;
  unsigned int v_11;
  long v;
  char result;
  v_13 = (double)p_5;
  v_13 = (2.9283609649e+38 - (v_13 + (double)p_15) / (double)(p_5 + 545.f)) * (double)(
         595110500U * (unsigned int)((double)((int)p % -60) * v_13));
  v_11 = (unsigned int)(! ((long long)((int)((signed char)(v_13 * 4294964690.)) - -90) % 52179LL));
  v = (long)((((float)(! p) + - p_5) - (float)(p_7 * 16218ULL)) + (float)(~ (
             (unsigned int)(~ p_9[2][4][0]) - (v_11 - 187U))));
  result = (char)(505320526UL - (unsigned long)v);
  return result;
}


