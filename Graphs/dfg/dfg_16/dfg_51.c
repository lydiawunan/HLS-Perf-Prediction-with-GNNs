#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1010714079
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned long long p_5[1][5], float p_7,
           unsigned long p_11[4][2][1], unsigned long long p_15)
{
  char v_13;
  int v_9;
  unsigned int v;
  double result;
  v_9 = (int)p_15;
  v_13 = (char)(179L - ! p);
  v = (unsigned int)(- v_13);
  result = (double)(((unsigned long long)p + ((unsigned long long)v % (
                                              p_5[0][1] + 143ULL)) % (
                                             (unsigned long long)(p_7 * (float)v_9) + 751ULL)) / (unsigned long long)(
                    p_11[0][0][0] + 406UL));
  return result;
}


