#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944178538
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, int p_4, unsigned long p_7, long long p_9)
{
  unsigned short v;
  signed char result;
  v = (unsigned short)p_9;
  result = (signed char)(p_9 - (long long)(995580654UL << ((long long)v * p_9 & 31LL)));
  while (- p != (float)(! (- (p_4 * (int)result)))) {
    v = (int)v >> 10U;
    result = (signed char)(~ (-110 ^ (61 + (int)((unsigned char)422.829345703f))));
  }
  while_0_break: ;
  return result;
}


