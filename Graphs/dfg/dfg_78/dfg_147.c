#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 780355533
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[5][2], double p_11)
{
  int v_9;
  unsigned long long v_7;
  double v_4;
  unsigned long long v;
  short result;
  v_7 = (unsigned long long)p[0][0];
  v_4 = -642.554389468;
  result = -(short)9477;
  v_9 = (int)((unsigned long long)(- (- (p_11 + 9998.))) * (- v_7 * (unsigned long long)(- (
                                                            p[4][0] % 63UL))));
  v = (unsigned long long)v_4 % ((unsigned long long)((long long)((unsigned long)result * p[2][1]) - 35697827LL) * (
                                 v_7 - (unsigned long long)(~ v_9)) + 963ULL);
  result = (short)(~ v);
  return result;
}


