#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 262842112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_5, unsigned long long p_9)
{
  signed char v_13;
  double v_11;
  signed char v_7;
  unsigned short v;
  unsigned long long result;
  v_7 = (signed char)p_5;
  v = (unsigned short)p;
  v_13 = (signed char)v;
  v_11 = (double)((int)(- v) + (int)(- (- v_13)));
  v = (unsigned short)((unsigned long long)v_7 % (- (~ p_9) + 957ULL) - (unsigned long long)(- (- (
                       3860252266. + v_11))));
  result = (unsigned long long)(! ((long long)p % ((long long)(- v) * (
                                                   p_5 - (long long)v) + 779LL)));
  return result;
}


