#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470055567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p[3][2][4], signed char p_7, long long p_9,
          unsigned short p_11[5][2], unsigned short p_13)
{
  double v_19;
  long long v_17;
  short v_15;
  unsigned short v_5;
  float v;
  float result;
  v_19 = -2.2752205584e+38;
  v_17 = (long long)p[1][0][3];
  result = 7.28882108613e+37f;
  if (v_19 != (double)(- ((long long)p_11[0][0] / (p_9 + 633LL)))) {
    v_15 = (short)(! p_7);
    v = (float)(((long long)((unsigned int)v_15 + 4294927779U) + v_17) & (long long)((int)(! p_7)));
    v_5 = (unsigned short)(! ((-9123 + (int)p_13) * (int)(- p_7)));
  }
  else {
    result = (float)p_7;
    v_5 = (unsigned short)p_9;
    v = (float)p_7;
  }
  result = (float)((unsigned int)result % ((p[0][0][1] & (unsigned int)v) + 965U) + (unsigned int)(
                   ((int)v_5 + (int)p_7) >> ((p_9 >> ((int)p_11[2][1] & 63)) & 31LL)));
  return result;
}


