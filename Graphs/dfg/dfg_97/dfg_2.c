#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 129168201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, signed char p_5[3][3],
                  unsigned int p_7[5], unsigned short p_11)
{
  long v_9;
  long v;
  unsigned long result;
  v_9 = (long)p;
  v = (long)p_5[2][2];
  v += (long)(-194633104 & (int)(- p_11)) % 45657L;
  v = (long)((long long)(p_7[2] % 178U) + (! ((long long)v | 435093690LL) << (
                                           (long long)(4.92415224181e+37 / (
                                                       (double)(~ v_9) + 906.)) & 63LL)));
  result = ! ((p - (unsigned long)v) * 38341UL) + (unsigned long)(- (
           255 * ((int)p_5[0][2] - 19411)));
  return result;
}


