#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041372511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[4], double p_7, long long p_9)
{
  float v_11;
  unsigned char v_5;
  short v;
  int result;
  v_5 = (unsigned char)p_9;
  v = (short)p_9;
  v_11 = (float)18446744073138501660ULL;
  v_5 = (unsigned char)(- ((p_7 + p_7) - - p_7) / (double)((float)(! p_9 + (long long)v) / (
                                                           v_11 * (float)v_5 + 283.f) + 296.f));
  v = (short)p[0];
  result = (int)((double)(~ (1058219403UL ^ p[2] / (unsigned long)((int)v + 409))) + - (
                 3.33432713244e+38 * ((double)v_5 + -2094375036.6)));
  return result;
}


