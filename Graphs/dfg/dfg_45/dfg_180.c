#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 633417848
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, long long p_9, short p_15)
{
  unsigned long v_13;
  unsigned short v_11;
  unsigned long v_7;
  double v_4;
  long long v;
  short result;
  v_13 = p;
  v_7 = 56718UL;
  result = (short)p_9;
  v_11 = (unsigned short)0;
  v_4 = 2.62956641742e+38 * (double)((long long)(49913UL / (p + 128UL) - v_7) | (
                                     (p_9 + p_9) + (long long)((int)v_11 / (
                                                               (int)v_11 + 353))));
  v = (long long)((unsigned long)((int)(-64. - v_4) * 116) + 4294967289UL) - 23522LL;
  result = (short)(v * (long long)(~ ((unsigned long)(129002236U << (
                                                      (unsigned int)v_4 & 31U)) / (
                                      (p & v_7) + 233UL))));
  return result;
}


