#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 483162531
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned long p_9, unsigned long p_11,
        signed char p_13)
{
  unsigned long v_7;
  signed char v_5;
  long long v;
  int result;
  v_7 = p;
  v = 362253099LL;
  v_5 = (signed char)((v_7 % 3782606312UL - p_9) % (p_11 * (p_9 / (unsigned long)(
                                                            (int)p_13 + 560)) + 689UL));
  result = (int)(((long long)(p % 4247087183UL) - v % 4195903282LL) + (long long)(- (! v_5)));
  return result;
}


