#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 213997557
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, int p_4[5][4][2], unsigned short p_7,
                unsigned short p_9)
{
  int v;
  signed char result;
  v = (int)-8933880432.86;
  result = (signed char)((((long long)p * -175626319LL) % (long long)(
                          p_4[2][2][0] + 98) - (long long)(146 / (v + 1004) << (
                                                           (int)p_7 % (
                                                           (int)p_9 + 363) & 31))) ^ -78LL);
  return result;
}


