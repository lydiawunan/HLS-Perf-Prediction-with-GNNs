#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 210578778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, long p_9, long long p_13[4][4])
{
  long long v_11;
  int v_7;
  int v_5;
  signed char v;
  short result;
  v_11 = 14055LL;
  v_5 = 974124405;
  result = (short)p_13[0][3];
  v_7 = (int)(26640ULL / ((18446744073709551519ULL % (- p + 461ULL) | (unsigned long long)(~ (- p_13[1][0]))) + 28ULL));
  v_11 = 83LL - - (! (! v_11));
  v = (signed char)((long long)result * ((long long)v_7 % (629680980LL % (
                                                           (long long)p_9 % (
                                                           v_11 + 872LL) + 383LL) + 131LL)));
  result = (short)(! ((unsigned long long)v % (p % (unsigned long long)(
                                               v_5 * 122 + 901) + 460ULL)));
  return result;
}


