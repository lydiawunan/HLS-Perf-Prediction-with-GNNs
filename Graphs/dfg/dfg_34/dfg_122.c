#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 874188409
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_7, long long p_11)
{
  signed char v_9;
  short v_5;
  int v;
  unsigned long long result;
  result = 18446744073709495369ULL;
  v_9 = (signed char)p_11;
  v_5 = (short)(! p_7);
  v = (int)(~ ((unsigned int)v_5 - - p) * (unsigned int)((int)(~ p_7) / (
                                                         (int)(~ v_9) + 722) - 199));
  result = ~ ((result / 38957ULL) % (unsigned long long)(p / 3261388758U + 769U)) * (unsigned long long)(~ (! (! v)));
  return result;
}


