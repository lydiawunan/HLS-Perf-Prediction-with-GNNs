#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 853948849
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long p_11, unsigned long p_13, short p_15)
{
  unsigned long v_9;
  signed char v_7;
  unsigned long long v_5;
  signed char v;
  long result;
  v_5 = 18446744073709486661ULL;
  v = (signed char)-106;
  v_7 = (signed char)(~ (624665069U * (unsigned int)(! p)));
  v_9 = ! ((unsigned long)p_11 + (p_13 + 118UL) % (unsigned long)((int)p_15 % (
                                                                  (int)v_7 + 788) + 484));
  result = (long)((unsigned long long)(~ (-685432941LL * (long long)p) - (long long)(! (
                                       (int)v * -30))) % ((v_5 - (unsigned long long)(
                                                           (unsigned long)(
                                                           (int)v_7 % 52619) * (
                                                           3466413576UL % (
                                                           v_9 + 42UL)))) + 407ULL));
  return result;
}


