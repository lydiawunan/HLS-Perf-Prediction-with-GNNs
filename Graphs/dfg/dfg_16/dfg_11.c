#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543451864
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p[1][4][4], long long p_4, long long p_6, char p_11)
{
  unsigned long long v_9;
  int v;
  double result;
  v_9 = (unsigned long long)((long long)(! p_11) % (~ (! (~ p_4)) + 160LL));
  v = (int)(-557601377L);
  result = (double)((unsigned long long)(((long long)(47062U / (unsigned int)(
                                                      p[0][3][0] + 30)) + (
                                          p_4 + p_6)) / -26LL) + (18446744073353022241ULL | (
                                                                  16906ULL - (
                                                                  (unsigned long long)v - v_9))));
  return result;
}


