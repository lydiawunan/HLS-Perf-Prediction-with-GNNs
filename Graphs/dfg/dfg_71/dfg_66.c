#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475491971
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, float p_4, long p_9[2][5], char p_11)
{
  double v_7;
  short v;
  unsigned long long result;
  v_7 = (double)p_11;
  v = (short)(- ((double)(- p_4) * v_7 + (double)(- ((float)p_9[0][0] + p_4))));
  result = (unsigned long long)v_7;
  result = ((unsigned long long)(~ p) / ((unsigned long long)p_4 % (result + 516ULL) + 755ULL) + ~ (
            result & (unsigned long long)v)) + (18446744073709551502ULL + ! (~ result));
  return result;
}


