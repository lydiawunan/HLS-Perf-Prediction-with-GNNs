#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375377800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p[2], unsigned long p_4[2],
              unsigned long long p_6[2][4][3], double p_9, long long p_13)
{
  signed char v_15;
  short v_11;
  long long v;
  long long result;
  v_11 = (short)573;
  v_15 = (signed char)p_9;
  result = -23864LL % ((long long)(p_4[0] % 23UL) / (~ (p_13 * (long long)p_4[0]) + 540LL) + 589LL);
  v = (long long)((long)(~ (33289 / ((int)v_11 + 842))) + 120L) & (p_13 / (long long)(
                                                                   (int)v_15 + 148) + (long long)(
                                                                   19215 * (int)(! v_15)));
  result = (long long)((double)(~ ((unsigned long)((unsigned int)p[0] / 4294907685U) ^ 22235UL)) + (
                       (double)((unsigned long long)(result % (long long)(
                                                     p_4[0] + 792UL)) % (
                                (p_6[1][1][1] + (unsigned long long)v) + 833ULL)) + p_9));
  return result;
}


