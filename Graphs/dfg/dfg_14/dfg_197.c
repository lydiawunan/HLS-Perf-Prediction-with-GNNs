#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695753185
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, unsigned short p_7, unsigned short p_9,
        unsigned long long p_13)
{
  double v_11;
  unsigned long v_4;
  unsigned long v;
  int result;
  v = 903189939UL;
  result = (int)p;
  v_11 = (double)v;
  v_4 = (unsigned long)(p_13 ^ 18446744073198482590ULL);
  v = (unsigned long)(- (p + (long)p_7) + (long)((result - (int)p_9) * (int)(
                                                 (double)(! p) + v_11 / (
                                                                 (double)p_7 + 299.))));
  result = (int)(~ (~ ((579433845UL - v) / (v_4 + 364UL))));
  return result;
}


