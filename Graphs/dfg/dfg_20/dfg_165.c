#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940493590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, double p_7[2], char p_9)
{
  double v_11;
  unsigned long long v_5;
  int v;
  long long result;
  v_11 = (double)p;
  v_5 = 1053017630ULL;
  result = (long long)p_9;
  v = (int)(((double)(((unsigned long long)p | 18446744073709531050ULL) / (
                      (v_5 + (unsigned long long)p) + 563ULL)) - - (p_7[1] + (double)result)) * (double)(
            -7442 + ((int)p_9 << ((unsigned long long)v_11 * 1050151145ULL & 7ULL))));
  result = (long long)v;
  result *= (long long)v;
  return result;
}


