#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 84124283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[3], short p_5, unsigned short p_7, char p_11)
{
  double v_9;
  double v;
  long result;
  v_9 = (double)p_11;
  v = -5614928642.02;
  result = (long)(! ((unsigned long long)(- (37 * (int)p_11)) % 18446744073709490415ULL));
  v = - (-63. + - v) * - v;
  v = (double)(((long)p[0] + 8653L) / ((long)((-9421252647.55 - (double)(
                                               (float)p_5 / 2.46586599377e+38f)) + (
                                              (double)((int)p_7 * (int)((unsigned short)v)) + (
                                              v_9 + (double)p_5))) + 480L));
  result = (long)(- (- ((double)result + -3067896872.42)) - - v);
  return result;
}


