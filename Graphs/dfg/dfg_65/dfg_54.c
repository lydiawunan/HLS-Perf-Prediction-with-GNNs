#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147624700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_4, unsigned long long p_6[3], double p_8,
                 int p_13)
{
  char v_11;
  unsigned long long v;
  unsigned int result;
  v = (unsigned long long)(- (-108 ^ (int)((signed char)9.10538579084e+37))) / 18446744073709519532ULL;
  v_11 = (char)(- (- p_8));
  result = (unsigned int)(((-918.80831226 / ((double)v_11 + 928.) + (double)(
                            62725L & (long)p_13)) * (double)(~ ((int)p >> 15ULL))) * (double)(
                          - (-6690180096.f / ((float)p_13 + 188.f)) / (
                          (float)(~ (p_13 & -12195)) + 1003.f)));
  result = (unsigned int)((double)((unsigned int)(~ ((int)p & p_4)) | result) * - (
                          (double)((unsigned long long)result / (p_6[1] + 2ULL)) / (
                          (p_8 + (double)v) + 24.)));
  return result;
}


