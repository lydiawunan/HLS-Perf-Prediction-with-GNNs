#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448673736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, short p_7, long long p_9, float p_11,
              unsigned long long p_13)
{
  unsigned int v_4;
  unsigned long v;
  long long result;
  v_4 = (unsigned int)(p_13 + 25ULL);
  v = (unsigned long)(! p_9);
  result = (long long)(! (p << ((int)p_7 & 31)));
  result &= (long long)((59809UL ^ 490225782UL * v) * (unsigned long)(! (
                        8498U ^ v_4)));
  return result;
}


