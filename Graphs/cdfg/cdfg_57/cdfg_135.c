#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 332548526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_7)
{
  long v_11;
  double v_9;
  short v_4;
  long v;
  float result;
  v_11 = 145275560L;
  v = (long)p;
  if (-19412L == v_11 - (long)2.00998254347e+38 % (v_11 / 71L + 593L)) {
    v_4 = (short)(! v);
    v_9 = (double)(- (-50 >> (p & 7U)) / ((int)(! v_4) + 560));
    v_4 = (short)((((double)p_7 * v_9) * - v_9) * (double)(~ ((int)v_4 - 223)));
  }
  else {
    v_4 = (short)6885;
    v = (long)(- (-3854101784U));
  }
  result = (float)((unsigned long)(! v) % (unsigned long)((unsigned int)v_4 % (
                                                          - p + 290U) + 463U));
  return result;
}


