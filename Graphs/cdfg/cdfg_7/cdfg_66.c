#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 29106830
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, int p_5, unsigned long long p_7)
{
  int v_9;
  char v;
  float result;
  v_9 = (int)p_7;
  if (18446744073709530280ULL == - (p_7 + 18446744073709533999ULL) / (unsigned long long)(
                                 - (~ v_9) + 897)) v = (char)p;
  else v = (char)p_5;
  result = (float)(~ (! (! v)));
  return result;
}


