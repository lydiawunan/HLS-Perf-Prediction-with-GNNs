#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 804149282
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, short p_7, long p_9)
{
  unsigned long long v_5;
  unsigned long long v;
  unsigned int result;
  v = (unsigned long long)p_9;
  v_5 = (unsigned long long)(- (0 / (long long)((14043 - (int)p_7) / 340 + 105)));
  result = (unsigned int)(((float)((v + (unsigned long long)p) | (81ULL + v_5)) * 189253184.f) / (
                          (float)p + 777.f));
  return result;
}


