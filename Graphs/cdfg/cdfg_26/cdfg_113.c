#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1012632718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, long long p_7, char p_9)
{
  double v_11;
  long long v_4;
  char v;
  unsigned short result;
  v_11 = 6.98160457558e+37;
  v_4 = 530685607LL;
  v = (char)((18446744073709489837ULL - (unsigned long long)(p_7 % (long long)(
                                                             (int)p_9 + 100))) - (unsigned long long)v_11);
  result = (unsigned short)((long long)(~ ((int)v * -17)) ^ (82LL / (
                                                             v_4 + 749LL) << (
                                                             p * 42185UL & 63UL)));
  return result;
}


