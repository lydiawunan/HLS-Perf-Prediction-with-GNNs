#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 794225878
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long p_5, long long p_13)
{
  unsigned char v_11;
  long v_9;
  double v_7;
  unsigned short v;
  signed char result;
  v_11 = (unsigned char)p_13;
  v_7 = 2.64129593306e+38;
  v_9 = (long)((int)v_11 % ((int)((unsigned char)(2.74690166065e+38 + (double)p_13)) + 499));
  result = (signed char)(-710012802LL / ((long long)v_9 * p + 36LL));
  v = (unsigned short)((long)result % 31075L);
  result = (signed char)((double)(- (((float)p + -8085731328.f) * 240720176.f)) / (
                         ((double)((unsigned long)(- result) - ((unsigned long)v - p_5)) - - (
                          v_7 * -2719362285.11)) + 933.));
  return result;
}


