#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997946768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned short p_7, unsigned int p_9)
{
  unsigned char v_13;
  int v_11;
  unsigned long long v_5;
  float v;
  float result;
  v_13 = (unsigned char)9;
  v_11 = (int)p_7;
  v_5 = (unsigned long long)p_9;
  result = (float)(unsigned short)12246;
  result = (float)(((long)p_7 / 587014695L) / (long)((v_11 & (int)result) + 586) + (long)(
                   (double)(! ((int)v_13 - 48407)) - 3.21704039939e+38));
  v = (float)(((int)((double)(result + (float)p_9) * 3.28362440361e+38) ^ (
               (int)((unsigned short)7.67670797212e+37f) ^ 47072)) / (
              (int)-2455642368.f + 141));
  result = (float)((unsigned long long)p + ! ((unsigned long long)v % (
                                              v_5 + 994ULL) - (unsigned long long)(
                                              (int)p_7 * 118)));
  return result;
}


