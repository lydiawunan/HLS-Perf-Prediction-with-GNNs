#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 781380339
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, double p_7, int p_9, float p_11, unsigned short p_13)
{
  short v_17;
  long long v_15;
  double v_5;
  short v;
  short result;
  v_15 = 459658804LL;
  v_17 = (short)p_13;
  v_5 = (double)(((int)((unsigned short)p_11) | (int)p_13) >> (~ (248676040LL % (
                                                                  v_15 + 962LL) << (
                                                                  ((int)v_17 - -20269) & 63)) & 31LL));
  v = (short)(- (! ((int)(- p_7) >> (p_9 & 31))));
  result = (short)((double)(p ^ (long)(-7117 % ((int)v + 543) + -862218530)) - v_5);
  return result;
}


