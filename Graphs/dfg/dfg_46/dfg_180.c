#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 765060385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, short p_4, short p_9,
                  unsigned short p_17[2][3][5], unsigned long p_19)
{
  unsigned long v_15;
  char v_13;
  long long v_11;
  unsigned short v_7;
  double v;
  unsigned long result;
  v_13 = (char)p_4;
  v_11 = (long long)p_9;
  v = -3.31555060891e+38;
  v_15 = (unsigned long)(((unsigned long long)((unsigned long)p_17[1][2][2] * p_19 - (unsigned long)(
                                               (unsigned int)v * 4294939805U)) % (
                          ((unsigned long long)(v_11 + (long long)p_17[0][1][2]) + 4828ULL) + 474ULL)) / 46494ULL);
  v_7 = (unsigned short)v_15;
  v = (double)0LL;
  result = (unsigned long)(~ ((int)(! (~ p)) % (((int)(- p_4) - (int)((short)(
                                                 v + (double)v_7))) + 561)));
  return result;
}


