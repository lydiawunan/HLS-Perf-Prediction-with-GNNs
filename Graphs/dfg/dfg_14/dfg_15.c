#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156354805
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p[4][3][1], unsigned int p_4)
{
  unsigned long v_9;
  double v_7;
  float v;
  long long result;
  v_9 = (unsigned long)p[3][2][0];
  v_7 = (double)v_9;
  v = (float)(- v_7);
  result = (long long)((float)p_4 + v);
  result = (112LL % (! result + 153LL) - - (result * (long long)p[3][0][0])) % 90LL;
  return result;
}


