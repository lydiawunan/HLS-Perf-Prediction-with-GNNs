#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 935994728
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, float p_7[3][1][3], short p_9,
                       unsigned short p_11)
{
  signed char v_4;
  unsigned long long v;
  unsigned long long result;
  result = 18446744072688849561ULL;
  result = ~ (result - (unsigned long long)(! ((int)p_9 + (int)p_11)));
  v_4 = (signed char)p_7[0][0][1];
  v = (unsigned long long)(((int)v_4 % ((int)p + 295)) / -834) / (result + 641ULL);
  result = ! v;
  return result;
}


