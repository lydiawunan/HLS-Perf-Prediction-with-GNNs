#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711258224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, float p_5, unsigned long long p_7,
          long long p_9)
{
  unsigned int v;
  short result;
  v = (unsigned int)p_5;
  result = (short)v;
  if (! ((unsigned long long)result * (p_7 + 6796065189ULL)) < (unsigned long long)p_9) {
    v = (unsigned int)p;
    result = (short)((unsigned long long)((52294U * v) * - v) * ((104ULL / (
                                                                  p + 374ULL)) / 18540ULL));
  }
  else result = (short)(- (! p * (unsigned long long)(- p_5)));
  return result;
}


