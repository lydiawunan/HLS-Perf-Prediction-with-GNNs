#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896108290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned long long p_7, unsigned long long p_11)
{
  int v_9;
  short v_4;
  long v;
  long result;
  v_9 = 0;
  v_4 = (short)29918;
  v = (long)(((unsigned long long)(-29937L % (long)((int)v_4 + 94)) / (
              ~ p_7 % (unsigned long long)((v_9 << (p_7 & 31ULL)) + 522) + 135ULL)) % (
             p_11 + 85ULL));
  result = (long)((unsigned long long)v / (! ((unsigned long long)((long long)v_4 / 139516193LL) / (
                                              18446744073618129719ULL / (unsigned long long)(
                                              p + 438UL) + 234ULL)) + 420ULL));
  return result;
}


