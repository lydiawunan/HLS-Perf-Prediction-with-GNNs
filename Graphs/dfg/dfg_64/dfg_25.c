#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106572679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned short p_7, float p_9,
                  unsigned long p_13[3][3][5], unsigned long p_15[1][3][1])
{
  unsigned long v_17;
  unsigned short v_11;
  unsigned short v_5;
  unsigned long long v;
  unsigned char result;
  v_17 = p_13[2][0][4];
  v_5 = (unsigned short)(p_15[0][0][0] * ! (! (- v_17)));
  v_11 = (unsigned short)p_13[2][1][3];
  v = (unsigned long long)(121.087066359 - (double)(! (18446744073709540619ULL - (unsigned long long)p_7) * (unsigned long long)(
                                                    (long long)p_9 + (
                                                    15023LL - (long long)v_11))));
  result = (unsigned char)(~ (v - (unsigned long long)((17882 - p) / (
                                                       (int)v_5 + 164))));
  return result;
}


