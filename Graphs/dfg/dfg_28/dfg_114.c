#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 652797047
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, long long p_9)
{
  long long v_15;
  double v_13;
  unsigned long long v_11;
  long v_7;
  unsigned long long v_5;
  char v;
  unsigned long result;
  v_15 = -258186729LL;
  v_13 = (double)p_9;
  v_11 = 18446744073049246834ULL;
  v_7 = (long)p;
  v_5 = (unsigned long long)((long long)(- (v_13 * 16628808.) - (double)(! (
                                         (unsigned long)v_7 * 608201108UL))) & v_15);
  v_7 = 31646L;
  v = (char)(9167ULL & (unsigned long long)(~ (p_9 << (p_9 & 63LL))) / (
                       (v_11 & 13542ULL) * (unsigned long long)p_9 + 310ULL));
  result = (unsigned long)((unsigned long long)((int)v * (int)((char)(
                                                - p / ((double)(23298ULL + v_5) + 778.)))) * (
                           (v_5 - ~ v_5) + ((unsigned long long)v_7 ^ (
                                            18446744073709544728ULL + (unsigned long long)p))));
  return result;
}


