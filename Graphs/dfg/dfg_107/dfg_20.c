#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 639550013
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, double p_7)
{
  unsigned long long v_5;
  float v;
  long long result;
  v_5 = (unsigned long long)p_7;
  v_5 = v_5;
  result = (long long)(- (v_5 % (unsigned long long)(- ((long)p_7 * 11992L) + 443L)));
  v = (float)(- v_5);
  result = (long long)v % ((-43022LL % (long long)(p + 762L) - ! result) + 643LL) & (long long)v;
  return result;
}


