#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1066182691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, float p_5, float p_9)
{
  int v_13;
  long v_11;
  double v_7;
  long long v;
  int result;
  v_13 = (int)p_5;
  v_11 = ! (! (- ((long)2498636800.f + -22809105L)));
  v_7 = (double)((unsigned long long)((p_9 + - p_9) * -6373.f) - (unsigned long long)(
                                                                 (long)6953276928.f + - v_11) / (
                                                                 - (18446744072707154253ULL + (unsigned long long)v_13) + 63ULL));
  v = (long long)(- (((double)p - - v_7) + 287389098.));
  result = (int)((- ((long long)p + v) - (long long)p_5) + 27116LL);
  return result;
}


