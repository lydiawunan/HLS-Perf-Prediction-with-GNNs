#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068541213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p[5][3], unsigned long p_7, unsigned int p_9, short p_11,
              long long p_15)
{
  unsigned short v_13;
  double v_5;
  double v;
  long long result;
  v_13 = (unsigned short)41469;
  result = (long long)p[4][2];
  v = (double)(! (- (- p_15)));
  if (-12266 < (int)p_11 / ((int)v_13 + 625)) {
    v_5 = (double)(- ((long long)(- v) / (((long long)p_9 | result) + 368LL)));
    v = (double)((long long)v_5 % (-39LL % (long long)((p_7 - (unsigned long)p_9) + 865UL) + 746LL));
    result = (long long)((unsigned long long)(- v) / ((unsigned long long)(- p[2][1]) * 18446744073659511368ULL + 996ULL));
  }
  else result = ! 4789LL;
  return result;
}


