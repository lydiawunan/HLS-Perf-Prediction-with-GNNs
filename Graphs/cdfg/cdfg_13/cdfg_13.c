#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 943352800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned int p_5,
                 unsigned long long p_7[1][4], unsigned long long p_9)
{
  double v_11;
  short v;
  unsigned int result;
  v_11 = (double)p;
  result = 32791U;
  v = (short)(((unsigned int)(46932 / ((int)p + 721)) * (result * 4294967276U)) / (unsigned int)(
              (-1047117753 + (int)-2.98767803602e+38f) + 39));
  if ((double)(- (p_7[0][0] - 42185ULL) / (unsigned long long)((int)v + 388)) >= - (
      (double)p_9 - v_11)) result = (unsigned int)(~ p);
  else {
    result = - p_5;
    v = (short)(- (! ((unsigned int)p + result)));
    result = (unsigned int)((351947734LL ^ -14627LL % (long long)(result + 804U)) * (long long)(
                            479095727 / ((63 - (int)v) + 924)));
  }
  return result;
}


