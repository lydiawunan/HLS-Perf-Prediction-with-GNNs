#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742080869
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, int p_5[4][4],
                       unsigned long long p_7[4][2][2], double p_9,
                       float p_13)
{
  unsigned int v_15;
  int v_11;
  unsigned long v;
  unsigned long long result;
  v_15 = 4294941029U;
  v = (unsigned long)p_9;
  v_11 = (int)((float)(31967ULL / (unsigned long long)((unsigned int)(~ p) / (
                                                       v_15 * 4294967181U + 679U) + 368U)) / (
               - p_13 + 358.f));
  result = (unsigned long long)(p_9 - -3990194989.52);
  result = ! (840294444ULL % ((result + (unsigned long long)p_5[2][3]) % (unsigned long long)(
                              v_11 * (int)p_13 + 751) + 258ULL));
  result = (unsigned long long)(v + (unsigned long)(174 * (int)p)) / (
           (- result - 18446744073709510538ULL) + 918ULL) - (unsigned long long)(
           p_5[3][0] - (int)((double)(p_7[2][1][1] - (unsigned long long)v) * - p_9));
  return result;
}


