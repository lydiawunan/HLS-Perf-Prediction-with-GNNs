#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117265794
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, long p_4, long long p_7, long p_9,
         char p_11[2][5][3])
{
  unsigned long v_13;
  long v;
  long result;
  v_13 = (unsigned long)p_7;
  result = p_9;
  v = (long)(~ (-(unsigned char)14));
  while ((p & 49123ULL) / (unsigned long long)(((unsigned long)p_4 + 3465798916UL) + 124UL) - (unsigned long long)(~ v) != (unsigned long long)(~ (
         (p_7 - -42745LL) * (long long)(p_9 / (long)((int)p_11[0][4][1] + 558))))) {
    v_13 = (double)v_13 - 714.118720754;
    result = (long)(! (unsigned char)115);
    v = -1589L;
  }
  while_0_break: ;
  return result;
}


