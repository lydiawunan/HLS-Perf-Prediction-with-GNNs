#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 13213257
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned long long p_4, char p_11,
                 signed char p_15)
{
  long long v_13;
  unsigned long long v_9;
  int v_7;
  char v;
  unsigned int result;
  v_13 = 824607952LL;
  v_9 = (unsigned long long)(! ((long long)(! p_11) % (! v_13 + 127LL)) + -1LL);
  v = (char)1;
  v_7 = (int)-3151133546.34;
  result = (unsigned int)((unsigned long long)((int)p / ((int)p + 793)) * (
                          p_4 * 441ULL + (unsigned long long)((int)v - v_7) * (
                                         v_9 - p_4)));
  return result;
}


