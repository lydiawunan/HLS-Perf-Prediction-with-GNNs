#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 413593664
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, char p_5, unsigned char p_7[4][1],
                unsigned long p_9, short p_11)
{
  signed char v_15;
  unsigned short v_13;
  long v;
  signed char result;
  v_15 = (signed char)p_5;
  v_13 = (unsigned short)9763;
  result = (signed char)(! (18446744073230188901ULL * (unsigned long long)p_5) * (unsigned long long)(
                         (unsigned long)(! ((int)p_7[2][0] | (int)p_11)) % (
                         ((unsigned long)v_15 + p_9) * (unsigned long)p_11 + 365UL)));
  result = (signed char)(((int)result - (int)p_11) * ((int)p % ((int)v_13 + 93)));
  v = (long)(! (~ (~ ((unsigned long)p_5 - p_9))));
  result = (signed char)(((unsigned long long)(0L - ((long)p + v)) + 18446744073709533036ULL) / (unsigned long long)(
                         ((unsigned long)((int)(! p_5) / ((int)p_7[3][0] * (int)result + 28)) & ~ (~ p_9)) + 729UL));
  return result;
}


