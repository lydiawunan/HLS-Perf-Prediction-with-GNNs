#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878203678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p)
{
  char v_5;
  int v;
  long long result;
  v_5 = (char)-56;
  result = (long long)p;
  v_5 = ! (~ (- (- v_5)));
  v = (int)(~ (! p << ((int)(- v_5) % 12 & 31)));
  result = - (! result * 356443800LL) + (long long)v_5;
  result = 0LL;
  return result;
}


