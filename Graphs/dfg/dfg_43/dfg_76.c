#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 635738836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, signed char p_4, int p_11,
                  unsigned long p_13)
{
  long long v_9;
  char v_7;
  double v;
  unsigned char result;
  v_7 = (char)p_13;
  v_9 = (long long)p_11;
  v = (double)(! (((long long)v_7 / (v_9 + 128LL) + (long long)(~ p)) / (long long)(
                  (p_11 << ((int)v_7 & 31)) + 607)));
  result = (unsigned char)((double)((int)(~ p) / ((int)p_4 / ((int)((signed char)2.62556173909e+38) + 206) + 270)) / -3483173772.64 + v);
  return result;
}


