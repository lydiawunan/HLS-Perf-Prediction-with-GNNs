#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 697550022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, unsigned long p_5[1], unsigned long p_7[1],
              short p_11[5][5][1], float p_13[2][2])
{
  unsigned long long v_19;
  unsigned short v_17;
  char v_15;
  unsigned short v_9;
  char v;
  long long result;
  v_19 = 52625ULL;
  v_15 = (char)p_11[0][4][0];
  v = (char)p;
  v_17 = (unsigned short)(~ (~ (- v_19) - (unsigned long long)(30092UL + (unsigned long)(- v_15))));
  result = - (178LL * ((long long)p % -37495LL - (long long)p));
  v_9 = (unsigned short)((unsigned long long)((result + (long long)p_5[0]) * (long long)(
                                              p | (unsigned int)p_11[2][0][0]) + (long long)(
                                              46877 * ((int)v % ((int)((char)p_13[1][1]) + 754)))) % (
                         (unsigned long long)((unsigned long)p_11[0][4][0] / (
                                              p_7[0] + 928UL) + (unsigned long)(
                                              (int)v_15 - (int)v_17)) % (
                         v_19 + 975ULL) + 558ULL));
  result = (long long)(((unsigned long)(p + (unsigned int)v) % ((p_5[0] - p_7[0]) % 4294962010UL + 906UL)) * (unsigned long)(! v_9));
  return result;
}


