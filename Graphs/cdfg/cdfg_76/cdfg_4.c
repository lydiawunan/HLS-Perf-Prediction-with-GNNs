#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704067499
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p)
{
  unsigned long long v_7;
  unsigned long long v_5;
  signed char v;
  long result;
  v_7 = 18446744073709533262ULL;
  v_5 = 32197ULL;
  v = (signed char)((unsigned long long)(- (! p)) * ((v_5 - v_7) / (unsigned long long)(
                                                     ! p + 611UL)));
  result = (long)(- v);
  return result;
}


