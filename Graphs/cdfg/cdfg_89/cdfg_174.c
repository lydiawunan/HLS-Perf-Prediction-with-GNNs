#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275250506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p[1][3][1], long long p_4, long p_9)
{
  signed char v_15;
  long long v_13;
  int v_11;
  char v_7;
  int v;
  float result;
  v_15 = (signed char)p[0][2][0];
  v_13 = (long long)p_9;
  v_11 = -16211;
  v_7 = (char)p_9;
  v = 25879623;
  if (866558720ULL % (unsigned long long)(((long)(! v) | (long)v_7 / (
                                                         p_9 + 384L)) + 761L) <= (unsigned long long)(
      (long long)v_11 - ~ v_13 * (long long)v_15)) result = (float)(- -173LL);
  else {
    result = (float)p_4;
    result = result;
  }
  result = - ((result - p[0][0][0]) - - result);
  return result;
}


