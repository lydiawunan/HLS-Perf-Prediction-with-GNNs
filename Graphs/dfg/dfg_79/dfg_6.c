#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487637521
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[1], long p_9)
{
  short v_7;
  unsigned int v_5;
  signed char v;
  unsigned long long result;
  v = (signed char)111;
  result = (unsigned long long)p[0];
  v_5 = (unsigned int)result;
  v_7 = (short)(((long)v + p_9) * p_9);
  v = (signed char)(-28.f + (319.639312744f - (float)(-180183832L + (long)p[0])) / (
                            (float)(- ((unsigned long long)p[0] + result)) + 521.f));
  result = (unsigned long long)((((double)v / 8185740337.38) * (double)(- p[0])) * (double)(- (
                                v_5 * (unsigned int)p[0])) - (double)(
                                (unsigned long long)2.22258605479e+38 + (
                                135417370ULL ^ (unsigned long long)((int)v_7 - 91))));
  return result;
}


