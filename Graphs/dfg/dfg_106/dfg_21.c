#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423685151
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[4][1][1], unsigned long long p_5)
{
  long v_9;
  unsigned long v_7;
  int v;
  double result;
  v_9 = 851563334L;
  result = -611.736363664;
  v_7 = (unsigned long)((72L & v_9) / ((long)result + 1021L));
  v = (int)((unsigned long)result / ((~ (- v_7) - (unsigned long)(53753U % (unsigned int)(
                                                                  (-3132 + p[2][0][0]) + 106))) + 222UL));
  result = (double)p_5;
  result = (double)(~ (p[2][0][0] - (int)(result * (double)(! v))));
  return result;
}


