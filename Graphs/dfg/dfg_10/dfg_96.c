#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 540602506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned short p_4, unsigned long long p_6,
          unsigned char p_9, long p_11)
{
  long v_13;
  double v;
  short result;
  v = (double)p_6;
  v_13 = (long)v;
  v = (double)(((long long)(p_11 * 16488L | p_11 * (long)p_4) + (p + (long long)(
                                                                 -100L / (
                                                                 v_13 + 892L)))) / 749260298LL);
  result = (short)(! (~ p_6 % (unsigned long long)(- ((int)((unsigned char)v) / (
                                                      (int)p_9 + 470)) + 306)));
  result = (short)(- (((long long)(-21171 % ((int)result + 431)) + (long long)result % (
                                                                   p + 163LL)) ^ (long long)(~ (
                      391713888 * (int)p_4))));
  return result;
}


