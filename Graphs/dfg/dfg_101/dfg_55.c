#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 971457245
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p[4][1][3], int p_7, double p_9[5], long long p_13,
                 short p_15)
{
  char v_11;
  unsigned long long v_4;
  unsigned long long v;
  unsigned int result;
  v_11 = (char)-6;
  v = (unsigned long long)((long long)(! p_7) / ((p_13 + ((long long)(
                                                          (long)p_7 % -15780L) ^ 
                                                          (long long)p_7 % (
                                                          p_13 + 77LL))) + 390LL));
  result = (unsigned int)(((long long)((long)((int)p_9[1] % (p_7 + 958)) ^ 
                                       p[3][0][2] * 106L) - (long long)(~ v_11) / (
                                                            1036LL % (
                                                            p_13 + 651LL) + 110LL)) + 
                          p_13 / (long long)((int)p_15 + 783));
  v_4 = (unsigned long long)(~ (~ (53965UL / (unsigned long)(p_7 + 570)))) * (
        (((unsigned long long)p[1][0][0] - v) - 18446744073709551600ULL) * (unsigned long long)(~ (
        p[1][0][1] / 123L)));
  result = (unsigned int)(((unsigned long long)(- result) + v) / (18446744073709551546ULL * v_4 + 86ULL) - (unsigned long long)p[1][0][1]);
  return result;
}


