#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 282847853
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, long p_9, short p_15)
{
  int v_13;
  double v_11;
  double v_7;
  unsigned long long v_5;
  double v;
  int result;
  v_13 = (int)p_9;
  v_11 = 2949258958.6;
  v_5 = (unsigned long long)((unsigned long)v_13 * ((unsigned long)(~ (
                                                    -22427 / ((int)p_15 + 766))) / 3708414446UL));
  v_7 = (double)-828955768LL;
  v = v_11;
  result = (int)((double)((int)v + (-15266 % ((int)p + 766) ^ (int)((float)v_5 + -562480768.f))) - - (- (
                 v_7 + (double)p_9)));
  return result;
}


