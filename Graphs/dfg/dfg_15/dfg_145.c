#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729036492
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned long p_9, long p_11)
{
  float v_15;
  char v_13;
  signed char v_7;
  long long v_4;
  int v;
  unsigned int result;
  v_15 = -3.14724036084e+38f;
  v_13 = (char)-5;
  v_7 = (signed char)((float)(p * ! p_9 + 65UL) + ((float)(! (p_11 * (long)v_13)) - v_15));
  v_4 = 3303671934LL;
  v = (int)(~ (- (! v_4) - (long long)(- (p - (unsigned long)v_7))));
  result = (unsigned int)(~ (! (! (- v))));
  return result;
}


