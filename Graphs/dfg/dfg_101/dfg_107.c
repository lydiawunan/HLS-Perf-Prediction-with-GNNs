#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1063143283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long p_7, float p_11[2][3][5],
                       signed char p_13, unsigned short p_15[4][5][2])
{
  long v_17;
  unsigned long v_9;
  int v_4;
  double v;
  unsigned long long result;
  v_17 = 209170816L;
  v_4 = (int)(p_11[0][0][0] - (float)(- (p_7 % (long)((int)p_15[2][4][1] + 485) | -37L)));
  v_9 = (unsigned long)(v_17 + (long)p);
  v = (double)((((long)(v_4 / ((int)2.68248293963e+38f + 800)) - -302701231L) >> (
                (int)p & 31)) - (long)((float)((unsigned long)(! p_7) | v_9) / (
                                       ((p_11[1][2][2] - (float)p_13) + (float)(- p_15[1][3][1])) + 322.f)));
  result = (unsigned long long)v;
  return result;
}


