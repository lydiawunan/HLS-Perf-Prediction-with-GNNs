#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 703344806
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, long p_4, unsigned int p_7, int p_9,
                 int p_11)
{
  unsigned int v_13;
  long v;
  unsigned int result;
  v_13 = (unsigned int)p_4;
  if (0LL > (long long)v_13) result = (unsigned int)(- (~ p));
  else {
    v = (long)p_11;
    result = (unsigned int)((unsigned long)p_4 * ((unsigned long)((long)p % (
                                                                  v + 470L)) % (unsigned long)(
                                                  p_7 * (unsigned int)p_9 + 182U)));
  }
  result = result;
  return result;
}


