#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 485710244
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned long long p_9, long p_15,
         unsigned short p_17[3][3][2])
{
  long long v_19;
  unsigned long long v_13;
  unsigned long v_11;
  double v_6;
  unsigned short v_4;
  signed char v;
  long result;
  v_19 = 58353LL;
  v_6 = -194.837720555;
  v_4 = (unsigned short)49041;
  v_13 = (unsigned long long)((long long)((unsigned long)(! (-199407772L + (long)v_6)) + 371771276UL) / (
                              (long long)p_15 % (((long long)p_17[2][2][1] + v_19) + 299LL) + 977LL));
  v_11 = (unsigned long)p_9;
  v = (signed char)(((unsigned long long)((double)((int)v_4 / ((int)v_4 + 833)) + (
                                          v_6 + (double)p)) * ((p_9 >> (
                                                                (int)p & 63)) - (
                                                               p_9 & (unsigned long long)v_11))) % (
                    ~ ((v_13 + 109ULL) - v_13 * (unsigned long long)p_15) + 945ULL));
  result = (long)v;
  return result;
}


