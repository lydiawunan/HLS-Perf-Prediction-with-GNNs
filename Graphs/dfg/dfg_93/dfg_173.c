#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 60078066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[1][2][3], long long p_5, unsigned long p_9,
        unsigned long p_11)
{
  int v_7;
  unsigned long v;
  int result;
  v_7 = (int)p_11;
  v = (unsigned long)((unsigned long long)v_7 - (18446744073709545210ULL - - (
                                                 (unsigned long long)p_9 + p[0][0][2])));
  result = (int)(18446744073703493793ULL | (p[0][1][0] * ((unsigned long long)v | p[0][0][1]) | (unsigned long long)(
                                            -666317757LL / (p_5 + 953LL))));
  return result;
}


