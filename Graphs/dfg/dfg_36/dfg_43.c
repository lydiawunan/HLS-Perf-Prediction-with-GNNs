#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 426105740
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[5][2][1], short p_4, unsigned long p_7,
                  unsigned long p_9, double p_11)
{
  short v_13;
  unsigned long long v;
  unsigned long result;
  v_13 = (short)17166;
  v = (unsigned long long)p_9;
  v = (unsigned long long)(- (((p_11 + (double)v_13) / 1415220.) * (double)(! (
                              v - 720953849ULL))));
  result = (unsigned long)((double)(~ (~ (~ p_9))) - -2973097984.6);
  v = (unsigned long long)(3837510912UL / (result + 886UL)) - ((unsigned long long)(! p_7) - ! (
                                                               v + 18446744073709551597ULL));
  result = (unsigned long)((unsigned long long)(~ ((-30782 - p[2][1][0]) * (int)p_4)) - (
                           v + (unsigned long long)(4294908786UL - p_7)));
  return result;
}


