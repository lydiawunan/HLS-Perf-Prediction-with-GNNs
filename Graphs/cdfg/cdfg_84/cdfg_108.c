#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 285564866
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, short p_9, unsigned long long p_11, signed char p_19)
{
  unsigned long long v_17;
  double v_15;
  long long v_13;
  unsigned long long v_7;
  unsigned int v_5;
  long long v;
  int result;
  v_17 = 10881ULL;
  v_13 = (long long)p_9;
  v_7 = (unsigned long long)p_19;
  v_5 = 810237314U;
  v = -33545LL;
  result = 60901;
  while (((unsigned long long)((unsigned int)p * v_5) * (v_7 + (unsigned long long)p_9)) % 61893869ULL < 0ULL) {
    v_15 = v_13 - 14LL;
    v_13 = (long long)(! ((unsigned int)v_15 / 44735U) >> ((unsigned int)(
                                                           10651.5068359f - (float)(~ result)) & 31U));
    v_7 = (unsigned long long)((~ v % (long long)(! result + 265)) / 631LL);
    v_5 = (unsigned int)((unsigned long long)((v_13 * 65152613LL) / (long long)(
                                              (-1 << (v_17 & 7ULL)) + 703)) ^ 
                         (unsigned long long)(~ p_19) / (! v_7 + 998ULL));
  }
  while_0_break: ;
  result = (int)v;
  return result;
}


