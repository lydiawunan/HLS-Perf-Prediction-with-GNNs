#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 583050469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned long p_4, long p_7, int p_9,
                 signed char p_13)
{
  unsigned long v_11;
  unsigned long v;
  unsigned int result;
  v_11 = 58971UL;
  v_11 %= (unsigned long)(! (~ ((int)p_13 / (p_9 + 20))) + 983);
  v = v_11 | 4294934030UL;
  result = (unsigned int)(~ (! (p_4 * v) & (unsigned long)(618L - (p_7 + (long)p_9))));
  result = (unsigned int)((int)p) & result;
  return result;
}


