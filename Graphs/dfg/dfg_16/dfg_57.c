#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 728086359
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p[1][5][5], unsigned long long p_5, long p_9, char p_13,
          long long p_15)
{
  unsigned char v_11;
  unsigned long long v_7;
  signed char v;
  short result;
  v_7 = 18446744073015008484ULL;
  v_11 = (unsigned char)p_15;
  v = (signed char)((long long)v_11 - (long long)p_13 / (p_15 + 433LL));
  result = (short)(- ((unsigned long long)(-4183 * ((int)p[0][3][0] & (int)v)) / (
                      (p_5 + p_5) / ((v_7 - (unsigned long long)p_9) + 453ULL) + 21ULL)));
  result = result;
  return result;
}


