#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398377578
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned int p_4)
{
  long v_9;
  unsigned long long v_7;
  float v;
  float result;
  v_9 = -34407586L;
  v_7 = 18446744072789393032ULL;
  v = (float)(v_7 % (unsigned long long)(- v_9 + 939L) & (unsigned long long)(- (
              (unsigned long)p_4 * (unsigned long)v_9)));
  result = (float)(p - (double)(~ (p_4 | (unsigned int)v)));
  return result;
}


