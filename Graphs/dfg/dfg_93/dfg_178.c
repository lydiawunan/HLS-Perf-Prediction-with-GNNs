#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693641337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p[2][2][3], long long p_7[3])
{
  signed char v_13;
  int v_11;
  int v_9;
  double v_5;
  unsigned long v;
  int result;
  v_13 = (signed char)103;
  v_11 = 389275548;
  v_9 = (int)p_7[2];
  v_9 += ~ v_11 - ~ (36 / ((int)v_13 + 431));
  v_5 = (double)(! p_7[1]);
  v = (unsigned long)(((unsigned long long)((int)p[1][0][2] * 26) + 18446744073709549060ULL) + (unsigned long long)(
                      ((long long)v_5 * (p_7[0] - (long long)v_9)) * 16336LL));
  result = (int)v;
  return result;
}


