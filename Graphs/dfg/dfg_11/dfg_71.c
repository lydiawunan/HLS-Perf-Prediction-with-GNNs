#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42357995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[4][1][3], unsigned char p_5,
                unsigned long long p_9)
{
  unsigned long long v_11;
  char v_7;
  long v;
  signed char result;
  v_7 = (char)126;
  result = (signed char)p[2][0][2];
  v_11 = (unsigned long long)((unsigned int)result % 3532563134U);
  v = (long)p[2][0][1];
  v = (long)((unsigned long long)((float)((long long)(-307331144 - (int)v_7) + -7242LL) + (
                                  (float)((unsigned long long)p_5 % (
                                          p_9 + 261ULL)) - (-258.459197998f - (float)p[3][0][0]))) / (
             ((unsigned long long)v + - v_11) + 102ULL));
  result = (signed char)((- p[0][0][2] / (long long)((v ^ (long)-5938599424.f) * (long)p_5 + 87L)) / (
                         p[0][0][0] + 1011LL));
  return result;
}


