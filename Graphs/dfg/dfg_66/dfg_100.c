#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402660155
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned int p_7, unsigned int p_9[2][5],
                       float p_11, float p_13)
{
  unsigned long v_15;
  int v_4;
  char v;
  unsigned long long result;
  v_15 = 4294941791UL;
  v_4 = (int)p_9[1][2];
  result = 18446744073709491024ULL;
  v = (char)(((unsigned long)((p_9[0][0] ^ (unsigned int)p) / ((unsigned int)(
                                                               (float)result / (
                                                               p_11 + 32.f)) + 58U)) - (unsigned long)(! (
              (long)p_13 + 561607761L))) / (unsigned long)(~ (45272 / (
                                                              v_4 + 786)) % (
                                                           (int)((float)v_15 * p_13) + 164) + 811));
  v_4 = (int)result;
  result = (unsigned long long)(- -0.00585745554417f);
  result = ((result * (unsigned long long)v) * 63909ULL) % (unsigned long long)(
           ((v_4 - (int)p) + 79900605) + 261) - (unsigned long long)p_7;
  return result;
}


