#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041659397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, float p_4[2])
{
  unsigned short v;
  long long result;
  v = (unsigned short)p;
  result = (long long)p_4[0];
  result = (long long)p * (! (result ^ 52919LL) - (long long)((p_4[0] - 87.f) * 1.84467440737e+19f));
  result = (long long)((float)(~ ((int)p + 34)) - p_4[0]) - ! ((0LL - result) << (
                                                               (int)v / 73 & 63));
  result = (long long)(-785.448136666 * (double)result);
  result = result;
  return result;
}


