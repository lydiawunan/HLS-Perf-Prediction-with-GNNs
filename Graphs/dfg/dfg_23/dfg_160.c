#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20251796
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_4, char p_9, unsigned char p_11,
           double p_13)
{
  unsigned char v_15;
  signed char v_7;
  long long v;
  double result;
  v_15 = p_11;
  v = (long long)p_13;
  result = - (p_13 + (double)((unsigned long)(! v_15) + ! p));
  v_7 = (signed char)(((unsigned long long)(~ (p / (unsigned long)((int)p_4 + 321))) % (
                       (18446744072640500034ULL ^ (unsigned long long)p_9) / (
                       (unsigned long long)(result - 29413.) + 622ULL) + 751ULL)) / (unsigned long long)(
                      (int)p_11 + 666));
  result = (double)((long long)(! (~ p / (unsigned long)((int)p_4 + 952))) % (
                    ! v % (long long)((0 ^ (unsigned long)((int)v_7 * 111)) + 288UL) + 12LL));
  result = result;
  return result;
}


