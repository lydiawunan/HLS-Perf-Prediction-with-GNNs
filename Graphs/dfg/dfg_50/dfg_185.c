#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 100019299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p[2][3], long p_7, signed char p_11)
{
  long long v_9;
  long v_4;
  unsigned short v;
  float result;
  v_9 = (long long)p_11;
  v = (unsigned short)((long long)(-19801.f + ((float)p_7 - 3852123392.f)) % (
                       v_9 + 434LL) + -460266326LL);
  v_4 = (long)p[0][0];
  result = (float)((long)v * v_4);
  return result;
}


