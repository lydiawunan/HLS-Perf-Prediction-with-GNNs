#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 677732387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p[2][2][3])
{
  unsigned short v_7;
  double v_5;
  float v;
  int result;
  v_5 = -8582506227.12;
  v = -941.788879395f;
  result = (int)(- v_5);
  v_7 = (unsigned short)((unsigned long long)(((p[1][1][0] | 14352LL) / 544LL) % (long long)(
                                              (result - - result) + 1013)) / (
                         18446744073709551615ULL % (((unsigned long long)p[1][0][1] % 18446744073651736301ULL | (unsigned long long)(! p[1][0][1])) + 860ULL) + 299ULL));
  result = (int)v_7;
  result = (int)(117985327LL * (p[0][1][2] + (long long)result) - (long long)(
                 (double)(8833480704.f * - v) + (v_5 + (double)(- p[0][1][0]))));
  return result;
}


