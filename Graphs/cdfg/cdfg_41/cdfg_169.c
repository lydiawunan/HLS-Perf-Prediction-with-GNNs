#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658083975
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, float p_4, double p_7, long p_9[3][3],
           unsigned int p_11)
{
  long long v_15;
  signed char v_13;
  unsigned char v;
  double result;
  v_15 = (long long)p_9[2][0];
  v_13 = (signed char)p;
  v = (unsigned char)170;
  result = (double)(- (~ (- v_15)));
  if ((unsigned long)p_11 - p <= (unsigned long)(((1.84467440735e+19 / (
                                                   p_7 + 625.)) * ((double)p_11 / (
                                                                   p_7 + 760.))) * (double)(
                                                 (int)v_13 * (int)((signed char)1011141376.f) + (int)v))) {
    v = (unsigned char)((double)(49122UL ^ p) + ((-887234366. + p_7) + (
                                                 result + p_7)));
    result = (double)((p + (unsigned long)(6712949760.f + p_4)) - - p % (unsigned long)(
                                                                  (int)(! v) + 553));
    result = (636728966. / (result + 356.)) * 3.74151836984e+17 - result;
  }
  else result = (double)p_9[2][0];
  return result;
}


