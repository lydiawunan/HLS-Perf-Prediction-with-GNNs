#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741300508
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned char p_7)
{
  short v_11;
  unsigned long long v_9;
  unsigned int v_5;
  signed char v;
  float result;
  v_11 = (short)p;
  v_9 = 29245ULL;
  v_5 = 55034U;
  result = (float)(~ (- ((unsigned long long)p_7 % (v_9 + 242ULL))) & (unsigned long long)(
                   -1LL / (long long)((int)v_11 + 833)));
  v = (signed char)result;
  v = (signed char)(~ (- ((unsigned long long)p / 18446744073709528277ULL) - (unsigned long long)(
                       - v_5 % (unsigned int)((int)v + 814))));
  result = (float)v;
  return result;
}


