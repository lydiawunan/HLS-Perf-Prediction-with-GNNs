#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 977904609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, long p_5, short p_7)
{
  signed char v_11;
  int v_9;
  long long v;
  unsigned int result;
  v_11 = (signed char)p;
  v_9 = (int)p_7;
  v = (long long)(- p_5 / (long)((int)p_7 + 70) >> ((v_9 | ((int)p_7 ^ (int)v_11)) & 31));
  result = (unsigned int)(- (v - 74LL) + (long long)((int)p + (int)(! p)));
  return result;
}


