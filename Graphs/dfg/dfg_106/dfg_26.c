#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026245685
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, float p_5, unsigned long long p_7, unsigned long p_9,
              float p_11)
{
  unsigned long v;
  long long result;
  v = (unsigned long)(4294967296.f * ((float)((unsigned long long)(- p_5) * (
                                              p_7 % (unsigned long long)(
                                              p_9 + 757UL))) / (p_11 + 268.f)));
  result = (long long)(- ((unsigned long)(- (- p)) * ((unsigned long)(
                                                      p - -65.f) | v % 23UL)));
  return result;
}


