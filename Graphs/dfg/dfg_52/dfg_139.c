#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1048630031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned short p_7, int p_9[5][1][2], int p_13,
                 unsigned long long p_15)
{
  char v_17;
  unsigned long long v_11;
  long long v_4;
  float v;
  unsigned int result;
  v_17 = (char)0;
  v_11 = 18446744073637294038ULL;
  v = -2.16004729271f;
  result = 228046588U;
  result = (unsigned int)(((unsigned long long)(! result) * ((18446744073597592934ULL - v_11) - (unsigned long long)p_13)) / (unsigned long long)(
                          - ((int)((char)(v / ((float)p_15 + 826.f))) / (
                             (int)(- v_17) + 390)) + 851));
  v_4 = (long long)p_9[1][0][0];
  v = (float)result;
  result = (unsigned int)((int)((- v / 226463200.f) / ((float)(3479550145U << (
                                                               ~ v_4 & 31LL)) + 613.f)) ^ - (
                          (int)(- p) + (int)p_7 / ((int)p + 830)));
  return result;
}


