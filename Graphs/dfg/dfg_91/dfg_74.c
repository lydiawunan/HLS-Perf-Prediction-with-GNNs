#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331476187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p[1][3], char p_9, long long p_11,
              unsigned long p_13)
{
  double v_17;
  char v_15;
  long v_7;
  unsigned long long v_5;
  long v;
  long long result;
  v_15 = p_9;
  v_5 = (unsigned long long)p_13;
  v = (long)p_11;
  result = (long long)p[0][2];
  v_17 = (double)((unsigned long long)p_13 % (v_5 + 12ULL));
  v_7 = (long)(! ((long long)(~ p_13) - result) - (long long)((long)v_15 % (
                                                              41473L / (
                                                              (long)v_17 / (
                                                              v + 731L) + 555L) + 484L)));
  v = (long)(- ((v_5 << (v_7 & 63L)) - (unsigned long long)((unsigned long)p_9 * p[0][0])) % (unsigned long long)(
             p_11 + 272LL));
  result = (long long)((unsigned long)(~ ((v + (long)8918617153.55) % 958L)) + p[0][0]);
  return result;
}


