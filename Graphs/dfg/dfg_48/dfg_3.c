#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 332071791
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, double p_11[4][4])
{
  short v_9;
  double v_7;
  int v_5;
  short v;
  int result;
  v_9 = (short)10473;
  v_7 = 1.87875424777e+38;
  result = (int)p_11[3][2];
  v = (short)((double)(((16599LL - (long long)v_9) + (long long)(- p)) % (
                       (long long)p_11[2][2] + 198LL)) - 2.1412389117e+38);
  v_5 = result;
  result = (! ((int)v & (int)((short)p)) + 50378 / ((v_5 - 61465) + 57)) - (int)(
           674.987055646 + v_7);
  return result;
}


