#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 84225486
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned long long p_5[4][1][2],
         unsigned long long p_9, long long p_11, short p_13)
{
  unsigned long long v_15;
  long long v_7;
  long v;
  long result;
  v = (long)p_5[0][0][1];
  v_15 = (unsigned long long)p_13;
  v_7 = (long long)(- ((! p_9 & (unsigned long long)(! p_11)) - (unsigned long long)(
                                                                52786U + (unsigned int)p_13) * (
                                                                v_15 >> (
                                                                v & 63L))));
  v = (long)(- (~ ((long long)(~ p) * - v_7)));
  result = (long)(- ((unsigned long long)(~ (38 + (int)p)) / ((((unsigned long long)v | p_5[3][0][1]) + 24443837ULL) + 331ULL)));
  return result;
}


