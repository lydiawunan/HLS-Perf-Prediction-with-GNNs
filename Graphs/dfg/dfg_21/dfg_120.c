#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 215248111
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[2][4], long long p_7, unsigned long long p_9)
{
  long long v_13;
  signed char v_11;
  int v_4;
  unsigned int v;
  char result;
  v_13 = p_7;
  v_11 = (signed char)0;
  v = (unsigned int)(66LL / ((long long)v_11 * v_13 + 776LL));
  v_4 = (int)(~ (~ ((long long)((unsigned int)p[1][2] * v) ^ p_7)));
  result = (char)((unsigned long long)((251460LL + (long long)(v | 226U)) + (
                                       (long long)(v_4 - (int)p[1][3]) - (
                                       442745548LL - p_7))) * p_9);
  return result;
}


