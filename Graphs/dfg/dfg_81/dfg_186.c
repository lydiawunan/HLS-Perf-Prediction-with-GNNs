#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218738325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, long long p_5, char p_9, unsigned long p_11,
           unsigned char p_13)
{
  long long v_7;
  unsigned long long v;
  double result;
  v_7 = p_5;
  v = (unsigned long long)(p_5 - (v_7 % (long long)((int)p_9 + 461) - -455434318LL) * (long long)(- (
                                 p_11 - (unsigned long)p_13)));
  result = (double)(- p * ((v + 18446744073709534026ULL) >> 21UL));
  return result;
}


