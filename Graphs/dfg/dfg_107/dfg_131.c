#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 514560310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, short p_4, long long p_7, int p_9[4][2],
           long long p_17)
{
  double v_21;
  signed char v_19;
  unsigned long long v_15;
  char v_13;
  long long v_11;
  unsigned int v;
  double result;
  v_21 = -1.84951835285e+38;
  v_19 = (signed char)-1;
  v_11 = p;
  v_13 = (char)((int)((signed char)v_21) + -52);
  v_15 = (unsigned long long)(p_17 % (long long)((int)v_19 + 787));
  v = (unsigned int)(((unsigned long long)(! (97LL & v_11)) - (unsigned long long)v_13 / (
                                                              v_15 * (unsigned long long)-234.700435974 + 793ULL)) + 18446744073709551568ULL);
  result = (double)(- (- (-7.50573385094e+36f / ((float)p + 419.f)) + (float)(
                       (long long)((unsigned int)p_4 * v) & (p_7 + (long long)p_9[0][0]))));
  return result;
}


