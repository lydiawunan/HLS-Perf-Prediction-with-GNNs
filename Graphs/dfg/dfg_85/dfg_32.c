#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893362274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned int p_4, signed char p_7,
                 unsigned short p_9)
{
  unsigned char v_13;
  float v_11;
  double v;
  unsigned int result;
  v_13 = (unsigned char)p;
  v_11 = (float)(((18446744073205749632ULL - (unsigned long long)(-2.85554483064e+38f - (float)v_13)) << 23) - 233ULL);
  v = (double)v_11;
  result = ((unsigned int)((int)p ^ -86) + p_4) * (unsigned int)((int)((char)(
           v * (double)p_7))) - (unsigned int)p_9;
  result = result;
  return result;
}


