#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524012517
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, signed char p_11, long p_13, long p_15)
{
  long long v_9;
  unsigned long long v_7;
  long long v_5;
  unsigned int v;
  char result;
  v = 4294952956U;
  v_7 = - (18446744073709527868ULL ^ (unsigned long long)(884L * p_13)) - (unsigned long long)p_15;
  v_9 = (long long)((int)p_11 * ! (94 & (int)(~ p)));
  v_5 = (long long)p_11;
  result = (char)((unsigned long long)(- (- ((unsigned long)p + 4294903307UL))) + (
                  (unsigned long long)(- v) / ((unsigned long long)v_5 / (
                                               v_7 + 167ULL) + 220ULL) - 
                  (v_7 + (unsigned long long)v_9) / (unsigned long long)(
                  30514L * (long)p_11 + 793L)));
  return result;
}


