#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 36267266
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, signed char p_4)
{
  int v_7;
  long v;
  short result;
  v_7 = 62937;
  v = 19601L;
  result = (short)(~ (- (! p)));
  result = (short)(~ (25435 * v_7) * ((int)result - ~ (~ v_7)));
  result = (short)(~ (((unsigned long long)result & p % (unsigned long long)(
                                                    (int)p_4 + 821)) / (unsigned long long)(
                      v + 184L)));
  return result;
}


