#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 27817972
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[4][5][1], int p_9, signed char p_11, double p_15)
{
  unsigned short v_13;
  long long v_7;
  char v_5;
  long v;
  double result;
  v_13 = (unsigned short)p[2][4][0];
  v_7 = -22564240LL;
  v_5 = (char)-120;
  result = (double)p_9;
  v = (long)(~ (! p_9));
  result = (double)((unsigned long)((double)(v + (long)(- result)) * (
                                    (double)v_13 * p_15 - (double)(109 / (
                                                                   p_9 + 799)))) * 1138161927UL);
  v = (long)((((long long)result ^ ((long long)v_5 + v_7)) - (long long)(
              (long)p_9 % (p[0][2][0] + 941L) + (long)p_11)) % (434252802LL * (long long)(~ p[1][4][0]) + 925LL));
  result = (double)(43841LL + (long long)(((unsigned long)v / 22058UL) % (unsigned long)(
                                          ! (~ p[2][1][0]) + 647L)));
  return result;
}


