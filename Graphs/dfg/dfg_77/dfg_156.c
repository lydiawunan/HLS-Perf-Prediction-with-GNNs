#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 655482883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[4][5][3], float p_5, signed char p_9, int p_11,
                  long p_13)
{
  unsigned long v_7;
  long long v;
  unsigned char result;
  v = -403354216LL;
  v = - (((long long)(! p_13) + 8070LL) % ((long long)(- (p_5 + (float)v)) + 456LL));
  v_7 = (unsigned long)(! p_11);
  v = (long long)(p[3][4][1] * (long)p_9) * v;
  result = (unsigned char)(~ ((long long)(p[1][4][0] / (p[2][4][1] + 945L)) % (
                              (v ^ 3502045458LL) + 190LL)) * ((long long)(
                                                              101.f / (
                                                              p_5 + 332.f) - (float)(~ v_7)) + v));
  return result;
}


