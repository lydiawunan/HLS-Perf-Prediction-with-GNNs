#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 894355855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, signed char p_7)
{
  int v_9;
  unsigned int v_5;
  unsigned long v;
  float result;
  result = (float)p;
  v_5 = 55213U;
  v_9 = (int)(! p);
  v = (unsigned long)(- ((((unsigned long long)v_5 - p) + (unsigned long long)(
                          (int)p_7 | (int)p_7)) / ((unsigned long long)(- (
                                                   (float)v_9 - result)) + 914ULL)));
  result = (float)((unsigned long long)v * (18446744073709551524ULL * p));
  return result;
}


