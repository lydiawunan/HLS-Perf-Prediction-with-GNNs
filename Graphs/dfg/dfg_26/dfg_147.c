#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109902931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_9, long long p_11)
{
  unsigned long v_7;
  long v_5;
  unsigned long long v;
  unsigned int result;
  v_7 = (unsigned long)(p_9 * (unsigned long long)p_11);
  v_5 = (long)v_7;
  v = (unsigned long long)v_5;
  result = (unsigned int)(- (- ((float)p / -5257890816.f)) + (float)(- (
                          18446744073580996789ULL - v)));
  return result;
}


