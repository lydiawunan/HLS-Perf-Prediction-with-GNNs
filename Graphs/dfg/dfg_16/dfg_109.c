#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548655692
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, int p_11, signed char p_15)
{
  long v_13;
  float v_9;
  signed char v_7;
  signed char v_4;
  long long v;
  double result;
  v_9 = (float)p_11;
  v_7 = (signed char)-103;
  result = (double)p_15;
  v_13 = (long)(- ((result * -65008.) / 41828.) - - ((-479.645119331 + p) / (
                                                     ((double)p_15 + -158.545279821) + 504.)));
  v = -11272838LL;
  v_4 = (signed char)((((int)v_7 - ((int)v_9 - p_11)) >> (~ (v_13 + (long)p) & 31L)) << (
                      ! ((327085654ULL - (unsigned long long)p_11) + (unsigned long long)(
                         (int)((signed char)p) % ((int)p_15 + 106))) & 31ULL));
  result = - ((double)v / (((double)(! v_4) + - p) + 391.));
  return result;
}


