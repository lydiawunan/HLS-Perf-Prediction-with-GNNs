#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746751890
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned char p_5, char p_7[5][5], int p_11,
           long long p_13)
{
  unsigned short v_9;
  unsigned int v;
  double result;
  v_9 = (unsigned short)p_13;
  result = (double)((long long)(- v_9) % (! ((long long)(p_11 + (int)p_7[4][3]) - (
                                             11144LL - p_13)) + 254LL));
  v = (unsigned int)p_7[1][1];
  v = (unsigned int)(- result) * ! (~ (! v));
  result = (double)((~ (~ p) - (unsigned long long)v) / (unsigned long long)(
                    (int)p_5 + 604));
  return result;
}


