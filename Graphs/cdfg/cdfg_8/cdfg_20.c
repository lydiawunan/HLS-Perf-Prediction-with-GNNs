#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244337365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p)
{
  double v_5;
  signed char v;
  long long result;
  v_5 = (double)p;
  v = (signed char)(- (~ (p % ((unsigned long)v_5 + 753UL))));
  result = (long long)v;
  return result;
}


