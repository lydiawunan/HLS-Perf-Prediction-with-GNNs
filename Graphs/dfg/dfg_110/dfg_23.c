#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 278292358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[2])
{
  char v_9;
  signed char v_6;
  int v_4;
  float v;
  unsigned char result;
  v_6 = (signed char)p[1];
  v = -1890379648.f;
  result = (unsigned char)241;
  v_4 = (int)(~ (18446744072899415233ULL << (((unsigned long long)(- p[0]) + 18446744073206632360ULL) & 63ULL)));
  v_9 = (char)v;
  v = (float)((double)((((long long)v_4 + 381790491LL) - (long long)(
                        36110UL * (unsigned long)v_6)) + 45342LL) * - (
              (double)result * p[1] - (double)(! v_9)));
  result = (unsigned char)(1.84467440737e+19f - v);
  return result;
}


