#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705651279
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p)
{
  unsigned long v_6;
  long long v_4;
  long long v;
  long long result;
  v_4 = 362203505LL;
  v_6 = (unsigned long)(- p);
  result = (long long)(~ (! v_6));
  v = (long long)-1.41353747574e+38 | v_4 / -48879LL;
  result = (long long)(0 ^ (unsigned long long)(((result + -18LL) ^ 0LL) - (
                                                result - (v + 49LL))));
  return result;
}


