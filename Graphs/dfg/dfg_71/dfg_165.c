#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532148917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p[2], unsigned long long p_9)
{
  short v_15;
  long v_13;
  char v_11;
  unsigned int v_7;
  short v_5;
  signed char v;
  float result;
  v_15 = (short)-27650;
  v_13 = 61911L;
  v_7 = (unsigned int)p[1];
  v = (signed char)p[0];
  result = (float)p_9;
  v_11 = (char)(- v_15);
  v = (signed char)(((p_9 / 4033987836ULL) / (unsigned long long)((int)(! v_11) + 193)) * (unsigned long long)(
                    (75L + v_13) / (long)((int)v_11 / ((int)v_15 + 770) + 453)) - (unsigned long long)v);
  v_5 = (short)16;
  result = (float)((unsigned long long)(~ v) / (p[0] % (unsigned long long)(
                                                ((unsigned int)(~ v_5) - (
                                                 (unsigned int)result - v_7)) + 977U) + 872ULL));
  return result;
}


