#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878549729
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[3][1][2], unsigned long long p_5,
          unsigned char p_7[3][1], short p_9, unsigned char p_11)
{
  unsigned long v;
  short result;
  v = (unsigned long)p_11;
  v = (unsigned long)(((long long)(! p_7[0][0]) + (long long)((unsigned long)6.20464468756e+37 | v) % (
                                                  (42314LL + (long long)p_9) + 430LL)) * -74LL);
  result = (short)(18446744073709551559ULL % (- ((unsigned long long)(
                                                 v * p[2][0][1]) | p_5) + 452ULL));
  return result;
}


