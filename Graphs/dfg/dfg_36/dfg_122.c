#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32763473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, short p_5, short p_9[2][4], long p_13,
                 unsigned long long p_17)
{
  int v_15;
  long long v_11;
  short v_7;
  long v;
  unsigned int result;
  v_15 = 417018475;
  v_11 = (long long)p_5;
  result = (unsigned int)((unsigned long long)(((long long)p_9[0][3] + p) - -989383517LL) * p_17 - 13ULL);
  v_7 = (short)((unsigned long)(- (p_13 / 358455008L) % (long)(v_15 * 112 + 99)) + (unsigned long)result);
  v = (long)((long long)v_7 + (long long)p_9[0][0] * - (3344649815LL % (
                                                        v_11 + 536LL)));
  result = (unsigned int)(p % (((long long)(~ (! v)) + -41904LL % (p % (long long)(
                                                                   (int)p_5 + 534) + 366LL)) + 199LL));
  return result;
}


