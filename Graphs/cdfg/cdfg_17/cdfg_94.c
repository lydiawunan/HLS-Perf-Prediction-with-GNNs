#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192332348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned long p_7, signed char p_9[3][5][2],
              unsigned long p_11)
{
  long long v_5;
  double v;
  long long result;
  v_5 = 44209180LL;
  v = (double)(53878 - (int)((unsigned short)(1.63962157516e+38f / ((float)(
                                                                    (unsigned long)p_9[1][2][1] * p_11) + 286.f))));
  result = ((long long)((double)p / (v + 967.)) + - v_5) % ((p / 50847LL) % (long long)(
                                                            ! p_7 + 494UL) + 385LL);
  return result;
}


