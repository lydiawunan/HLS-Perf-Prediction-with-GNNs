#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 858503288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, short p_11, unsigned char p_13)
{
  double v_9;
  double v_7;
  unsigned long long v_5;
  short v;
  float result;
  v_9 = (double)p_11;
  v_5 = (unsigned long long)p_11;
  v_7 = (double)(- p_13);
  v = (short)(- (- (- v_9) + (v_9 / -407633243.853) * (double)(-21024 * (int)p_11)));
  result = (float)((int)v * (int)((short)((float)(- (v_5 / ((unsigned long long)v_7 + 57ULL))) * -9.63542843826e+37f)));
  result = (float)(~ p) * result;
  return result;
}


