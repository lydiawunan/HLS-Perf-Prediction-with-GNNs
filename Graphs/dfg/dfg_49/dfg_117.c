#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 120526417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[2][1], signed char p_4, long p_7[5][3],
                   double p_13)
{
  unsigned long long v_11;
  int v_9;
  char v;
  unsigned short result;
  v_11 = 18446744073709502685ULL;
  v_9 = (int)p_4;
  v = (char)-127;
  result = (unsigned short)(- (2250835456ULL - (v_11 | 18446744073709537860ULL)) & (unsigned long long)(~ (
                            ((int)p_13 - v_9) / 720)));
  v_9 = ((int)p_4 - -75) % -91 & (int)result;
  result = (unsigned short)((unsigned long)(- (178924032L | p_7[3][1]) ^ (long)p[0][0]) * (
                            (unsigned long)(! (124L - p_7[3][1])) & (
                            0UL - (unsigned long)(p_7[1][2] / (long)(
                                                  v_9 + 834)))));
  result = (unsigned short)((~ (18446744073709532639ULL * (unsigned long long)result) % (unsigned long long)(
                             (((int)p[0][0] << 11) & (int)(- p_4)) + 642)) * (unsigned long long)(
                            (long)(-39 ^ ((int)v + 42298)) & p_7[3][1] / -75L));
  return result;
}


