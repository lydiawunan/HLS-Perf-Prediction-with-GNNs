#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947398054
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, double p_13)
{
  int v_15;
  float v_11;
  float v_9;
  long long v_7;
  double v_4;
  unsigned long v;
  short result;
  v_15 = 3043280;
  v_9 = (float)p;
  v_7 = (long long)p;
  v_4 = p;
  result = (short)p;
  v = (unsigned long)v_15;
  while ((long long)(~ ((int)((char)2.88922843674e+38f) - -40)) < (long long)(! (
                                                                  5762UL + v)) * (
                                                                  (long long)(- v_4) / (
                                                                  ((long long)p - v_7) + 420LL))) {
    v = (unsigned int)v_9 + 55790U;
    v_11 = (float)(- v_4);
    v_9 = (float)(((p * p_13) * (p_13 + p_13)) * p);
    v_4 = (double)(- (- (- v_11)));
  }
  while_0_break: ;
  return result;
}


