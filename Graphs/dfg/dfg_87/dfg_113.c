#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 317779508
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned long p_7, unsigned char p_9,
                 unsigned char p_11, char p_13)
{
  unsigned long long v_4;
  char v;
  unsigned int result;
  result = (unsigned int)(-353314587LL);
  v_4 = (unsigned long long)((unsigned long)result / (unsigned long)(
                             (long)((int)p_9 * (int)p_11 + (int)p_13 % (
                                                           (int)p_9 + 440)) / 821925254L + 286L));
  v = (char)(v_4 & (unsigned long long)(- ((22LL / (p + 381LL)) * (long long)p_7)));
  result = (unsigned int)v;
  return result;
}


