#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106774369
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, long long p_5[3][4][4],
                       long long p_7, long p_9, double p_11)
{
  unsigned int v_15;
  unsigned short v_13;
  char v;
  unsigned long long result;
  v_13 = (unsigned short)55392;
  v_15 = (unsigned int)(~ -47992);
  v = (char)((-7.36788758124e-06 + (double)((int)(1.84467440728e+19 * p_11) + (
                                            98 - (int)v_13))) / ((double)(~ (
                                                                 (unsigned long)v_15 * (unsigned long)p_9)) + 570.));
  v = (char)(- ((unsigned long long)(! p_5[2][0][1] - (long long)(p_9 + (long)v)) % (
                (18446744073709540754ULL >> ((unsigned long long)p_11 & 63ULL)) / (unsigned long long)(
                p_5[1][1][2] % (long long)((int)p + 212) + 96LL) + 13ULL)));
  result = (unsigned long long)(((long long)(! v) + ((long long)p * p_5[2][3][0] + (long long)(
                                                     -60 << (p_5[2][3][1] & 7LL)))) * p_7);
  return result;
}


