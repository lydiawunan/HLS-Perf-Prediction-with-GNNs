#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 879993600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, long long p_5, unsigned long long p_7, int p_11,
                signed char p_13)
{
  signed char v_9;
  char v;
  signed char result;
  v_9 = (signed char)-113;
  v = (char)((! (p_7 << ((int)p & 63)) % (unsigned long long)(! ((int)v_9 + p_11) + 360)) * (unsigned long long)p_13);
  result = (signed char)(- ((long long)(- ((int)v / ((int)p + 197))) / (
                            ~ (113LL + p_5) + 598LL)));
  return result;
}


