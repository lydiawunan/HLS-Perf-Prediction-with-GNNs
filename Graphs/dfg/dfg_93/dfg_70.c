#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1004183367
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[2][4][1], signed char p_7,
                       double p_9[1][3], short p_13, unsigned int p_15[5][5])
{
  int v_11;
  long v_5;
  unsigned short v;
  unsigned long long result;
  v_11 = 1997;
  result = (unsigned long long)p_9[0][2];
  v_5 = (long)(! (~ ((result - 91ULL) ^ (unsigned long long)((unsigned int)p_13 % (
                                                             p_15[2][4] + 792U)))));
  v_5 = (long)(((unsigned long long)((long)(-118 * (int)p_7) ^ ((long)p_9[0][1] - v_5)) ^ ! result) ^ (unsigned long long)(
               72L + ~ ((long)v_11 + v_5)));
  v = (unsigned short)v_5;
  result = (unsigned long long)(- ((int)p[1][3][0] << ((65037UL - (unsigned long)(
                                                        (int)v / ((int)p[1][0][0] + 343))) & 7UL)));
  return result;
}


