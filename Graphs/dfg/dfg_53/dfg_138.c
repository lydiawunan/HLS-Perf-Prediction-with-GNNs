#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 784792235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, int p_9, long long p_13)
{
  float v_11;
  unsigned long v_7;
  unsigned long long v_5;
  signed char v;
  int result;
  v_11 = (float)p_13;
  v_7 = (unsigned long)p_9;
  v = (signed char)p_13;
  v_5 = (unsigned long long)(~ (! 23U));
  result = (int)((float)((unsigned long long)((long)((int)v - (int)v) ^ 539221997L) / (
                         ((unsigned long long)p % (v_5 + 237ULL) | (unsigned long long)(
                          v_7 ^ (unsigned long)p_9)) + 426ULL)) - ((float)(
                                                                   (unsigned long)p_9 + 3992452989UL) / (
                                                                   - v_11 + 119.f)) * (float)(- (- v)));
  return result;
}


