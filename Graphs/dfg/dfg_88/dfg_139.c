#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 325436755
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, long long p_5)
{
  unsigned int v;
  signed char result;
  v = (unsigned int)(~ (unsigned char)140);
  result = (signed char)p_5;
  result = (signed char)((long long)(- ((int)result + 107)) - (long long)(
                                                              (unsigned int)(~ p) / (
                                                              (v << (
                                                               (int)result & 31)) + 72U)) * p_5);
  return result;
}


