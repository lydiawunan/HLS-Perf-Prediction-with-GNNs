#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 481541479
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned long p_4, signed char p_6,
                 unsigned short p_17)
{
  unsigned long long v_15;
  long v_13;
  unsigned int v_11;
  long long v_9;
  long v;
  unsigned int result;
  v_11 = (unsigned int)p_4;
  v_9 = -48981LL;
  result = (unsigned int)p_4;
  v_15 = 41320ULL;
  v_13 = (long)(- ((double)(-1527647616.f * (float)((unsigned long long)p_17 | 54922ULL)) / -56519.5277732));
  v = (long)(! ((unsigned long long)(v_9 / (long long)(((unsigned int)p_6 ^ v_11) + 435U)) % (
                ((unsigned long long)v_13 % (v_15 + 1008ULL)) * 18446744073709018734ULL + 49ULL)));
  result = (unsigned int)((unsigned long)((int)(! p) - - (46721 / ((int)p + 6))) * (
                          ((p_4 - (unsigned long)result) - (unsigned long)(
                           (long)p_6 / (v + 440L))) * ((unsigned long)(~ result) & 4294941285UL)));
  return result;
}


