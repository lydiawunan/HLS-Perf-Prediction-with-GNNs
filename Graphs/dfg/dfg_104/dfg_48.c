#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992966752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, signed char p_7, unsigned long p_11[4][1][2])
{
  unsigned long long v_13;
  long v_9;
  unsigned short v_5;
  long long v;
  unsigned short result;
  v_13 = 6076ULL;
  v_5 = (unsigned short)p;
  v = (long long)p_11[2][0][0];
  v_9 = 24112L;
  v = (long long)((unsigned long long)p_11[3][0][0] + v_13 % (unsigned long long)(
                                                      - ((long long)p_7 % (
                                                         v + 652LL)) + 567LL));
  result = (unsigned short)(~ (1482944LL / ((v & -31474LL) + 409LL)) % (long long)(
                            - ((long)(p + (int)v_5) - (long)p_7 * v_9) + 50L));
  return result;
}


