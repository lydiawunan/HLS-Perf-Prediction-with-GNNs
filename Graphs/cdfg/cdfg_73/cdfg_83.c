#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859568627
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long long p_4[5][5][1])
{
  int v;
  unsigned long result;
  v = -43025;
  result = (unsigned long)v;
  result = (unsigned long)(- ((float)p * -575.178894043f) / ((float)(
                                                             (unsigned long)(
                                                             (int)p << (
                                                             p_4[2][4][0] & 15ULL)) + result) + 964.f));
  return result;
}


