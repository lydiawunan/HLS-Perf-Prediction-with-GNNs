#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 718284909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned long p_5, double p_11, int p_13,
           unsigned int p_17)
{
  short v_19;
  long v_15;
  unsigned long v_9;
  int v_7;
  unsigned char v;
  double result;
  v_19 = (short)p_17;
  v_15 = (long)p_5;
  result = (double)p;
  v_9 = (unsigned long)(-(unsigned short)30720);
  if (18446744073709538262ULL % (unsigned long long)(v_9 + 942UL) <= (unsigned long long)(
      (unsigned long)((long)(p_11 * (double)p_13) + - v_15) - (unsigned long)(
      - p_17 / (unsigned int)((int)(~ v_19) + 203)))) result = (double)p;
  else {
    v = (unsigned char)result;
    v_7 = (int)(1.55293182994e+38 + - (result * 27677.));
    result = (double)((unsigned long)((int)v - (18291 + (int)v)) * (! p_5 ^ (unsigned long)(
                                                                    (int)v % (
                                                                    v_7 + 623))));
  }
  return result;
}


