#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017663523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long long p_7, int p_9, double p_11,
                unsigned long long p_13[4][2])
{
  unsigned char v_5;
  int v;
  signed char result;
  v_5 = (unsigned char)p_13[1][1];
  v = (int)((unsigned long long)(- ((long long)(p & (unsigned int)v_5) / (
                                    p_7 % (long long)(p_9 + 406) + 437LL))) + (
            (unsigned long long)p_11 / (~ p_13[2][1] + 997ULL) - (unsigned long long)(- (
            p_7 & (long long)v_5))));
  result = (signed char)(- v);
  return result;
}


