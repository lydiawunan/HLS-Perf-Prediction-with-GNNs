#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913205855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[4][2][3], long long p_7, char p_9[1],
                       unsigned long p_11[5][5], unsigned long p_13)
{
  int v_15;
  unsigned long long v_5;
  char v;
  unsigned long long result;
  v_15 = 937292218;
  result = (unsigned long long)((long long)(~ (p_11[4][4] << (v_15 & 31))) - 872628508LL);
  v_5 = ((unsigned long long)(- (~ p_11[3][2])) | - ((unsigned long long)p_13 + result)) / 39578ULL;
  v = (char)(! (result / (unsigned long long)(! ((int)p_9[0] % ((int)p_9[0] + 527)) + 675)));
  result = ((unsigned long long)(~ ((int)v * (int)p[2][1][2])) ^ 18ULL * (
                                                                 v_5 + (unsigned long long)p_7)) + result;
  return result;
}


