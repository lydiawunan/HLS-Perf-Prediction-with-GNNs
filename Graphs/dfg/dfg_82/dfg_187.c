#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 710876571
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[3][4], unsigned short p_5)
{
  unsigned char v;
  signed char result;
  result = (signed char)(-21178LL);
  v = (unsigned char)p[1][0];
  result = (signed char)(((802887446LL % (p[0][1] + 1004LL)) / (long long)(
                          (21483 & (int)result) + 933) + (long long)result) / (
                         61874LL / (((long long)v * p[0][1]) * (long long)p_5 + 29LL) + 544LL));
  return result;
}


