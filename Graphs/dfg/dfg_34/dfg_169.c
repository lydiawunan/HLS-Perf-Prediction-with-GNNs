#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169943251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, long p_5[5][3][3], unsigned long long p_7[2],
          signed char p_9, long p_11)
{
  unsigned long long v_17;
  long long v_15;
  float v_13;
  unsigned char v;
  float result;
  v_17 = (unsigned long long)p_11;
  v_15 = (long long)p_7[1];
  v_13 = (float)(! ((((unsigned long long)p & p_7[0]) + (unsigned long long)v_15) / (
                    v_17 + 686ULL)));
  result = (float)(! (107ULL * ! p_7[1]) + ! (p_7[0] % (unsigned long long)(
                                              (int)p_9 + 109) >> ((p_11 - (long)v_13) & 63L)));
  v = (unsigned char)((unsigned long long)((result * -37.f) * (float)p_5[2][2][1] + (float)(~ p_5[2][2][1])) / (
                      p_7[0] + 691ULL));
  result = (float)(! ((unsigned int)(27874 | p) * (unsigned int)(- (result + (float)v))));
  return result;
}


