#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536166305
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned long long p_4, char p_7,
                       unsigned long long p_9, long long p_11)
{
  unsigned short v;
  unsigned long long result;
  v = (unsigned short)p_11;
  result = ~ ((unsigned long long)p - ~ p_4) * (((unsigned long long)(
                                                 (int)v / ((int)p_7 + 488)) % (
                                                 p_9 + 193ULL)) % 44ULL);
  return result;
}


