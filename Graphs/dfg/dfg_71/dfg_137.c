#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 971044547
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, signed char p_7, int p_13,
                unsigned long long p_15)
{
  int v_11;
  signed char v_9;
  double v_5;
  double v;
  signed char result;
  v_9 = (signed char)p_15;
  v_11 = (int)((unsigned long long)(! p_13) % (p_15 + 60ULL));
  v_5 = (double)v_11;
  v = (double)v_9;
  result = (signed char)((unsigned long)(- (4294967173U % (p + 621U)) % (
                                         p + 865U)) ^ (unsigned long)(
                         (long)(- v) % ((-519022792L - (long)v_5) + 66L) + (long)(! (
                         (int)p_7 + -13548))));
  return result;
}


