#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 364449064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, long long p_11)
{
  int v_9;
  char v_7;
  signed char v_4;
  long long v;
  unsigned long result;
  v_9 = 29911616;
  v_7 = (char)(- ((unsigned long long)(- v_9) * ~ (939243380ULL / (unsigned long long)(
                                                   p_11 + 879LL))));
  v_4 = (signed char)v_7;
  v = (long long)(- (- (-637.668981128 - (double)v_4)) - (double)(- p));
  result = (unsigned long)v;
  return result;
}


