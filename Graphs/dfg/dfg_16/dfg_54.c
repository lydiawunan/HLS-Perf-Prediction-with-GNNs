#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377037771
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p)
{
  short v_9;
  unsigned long v_7;
  long long v_5;
  long v;
  int result;
  v_9 = (short)1100;
  v_7 = 4294903977UL;
  v_5 = ! p % (long long)(~ (! v_7 << ((int)(- v_9) & 31)) + 837UL);
  result = (int)(v_5 - (long long)v_7);
  v = 8382L;
  result = (int)((long long)(- (- result) + 27910) * - (~ (p % (long long)(
                                                           v + 146L))));
  return result;
}


