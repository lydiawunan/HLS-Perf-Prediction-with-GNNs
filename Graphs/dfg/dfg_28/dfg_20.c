#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947778438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, long p_5[2], char p_7)
{
  unsigned long v_13;
  long v_11;
  unsigned long long v_9;
  unsigned long long v;
  double result;
  v_13 = 6298UL;
  v_11 = 51333L;
  v_9 = (unsigned long long)p;
  v = 18446744073709547634ULL;
  result = (double)p;
  result = (- (result * 535145080.) + -100.) + result;
  result = (double)(~ (v * v_9 | (unsigned long long)v_11) % ((18446744073005477321ULL / (unsigned long long)(
                                                               v_13 / (
                                                               (unsigned long)result + 70UL) + 236UL) >> (
                                                               p_5[1] & 63L)) + 208ULL));
  v = (unsigned long long)p * ((unsigned long long)(p_5[0] + (long)result) * (
                               (unsigned long long)p_7 | 27347ULL)) - 4499ULL;
  result = (double)(861866980ULL * v);
  return result;
}


