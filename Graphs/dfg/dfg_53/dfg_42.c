#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97118735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, double p_9, unsigned char p_11)
{
  long long v_13;
  unsigned long long v_7;
  double v_5;
  signed char v;
  short result;
  v_13 = -311176234LL;
  v_7 = 18446744073709511433ULL;
  v_5 = (double)(! (! 0));
  result = (short)((0ULL - ! p / (unsigned long long)(((int)((unsigned char)390.173675537f) >> 1) + 670)) + (unsigned long long)(
                   (long long)((int)(! p_11) & 221) % (v_13 + 817LL)));
  v = (signed char)p_9;
  result = (short)((unsigned long long)((1.26833236748e-36 - (double)(
                                         p % (unsigned long long)((int)result + 117))) - (
                                        (double)(- v) - v_5)) % ((- (! v_7) - (unsigned long long)(
                                                                  (long)(
                                                                  p_9 / (
                                                                  (double)p + 956.)) % (
                                                                  (long)v / -1072295338L + 462L))) + 456ULL));
  return result;
}


