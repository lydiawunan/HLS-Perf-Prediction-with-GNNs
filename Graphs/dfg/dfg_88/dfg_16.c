#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 49740446
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, long p_7[4][5], char p_9,
                 unsigned int p_11, short p_13)
{
  unsigned long long v_5;
  long long v;
  unsigned int result;
  v = (long long)p_13;
  v_5 = (unsigned long long)(~ (- (- (-454362802LL))));
  result = (unsigned int)(((unsigned long long)(~ v * (long long)((unsigned int)p / 776658071U)) / (
                           (unsigned long long)(38814L % (long)((int)p + 67)) % (
                           v_5 % (unsigned long long)(p_7[3][4] + 753L) + 524ULL) + 907ULL)) / (
                          (! v_5 >> (((unsigned long long)p_9 % 804090090ULL >> (
                                      -1060698443LL * (long long)p_11 & 63LL)) & 63ULL)) + 511ULL));
  return result;
}


