#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 472987604
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, double p_9)
{
  unsigned long v_11;
  unsigned long long v_6;
  long v_4;
  signed char v;
  int result;
  v_11 = 5356UL;
  v_4 = -45948L;
  v = (signed char)51;
  v_6 = (unsigned long long)(v_11 & (unsigned long)v_4);
  v_4 = (long)(- (~ (p - (unsigned long long)3.3899276353e+38) - (unsigned long long)p_9));
  result = (int)(- (((unsigned long long)(- v) - ((unsigned long long)v_4 | v_6)) >> (
                    ! p & 63ULL)));
  result = result;
  return result;
}


