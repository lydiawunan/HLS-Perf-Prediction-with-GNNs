#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554824213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, int p_7, long p_9, short p_13, long long p_15)
{
  short v_17;
  unsigned long v_11;
  unsigned long v_5;
  char v;
  long long result;
  v_17 = (short)-11958;
  v_11 = 656261087UL;
  v_5 = 4294959505UL;
  v = (char)((long long)((long)p_7 / (p_9 + 751L) >> 10LL) ^ (((long long)(
                                                               v_11 * (unsigned long)p_9) - (
                                                               (long long)p_13 | p_15)) | (long long)(
                                                              (unsigned int)v_17 * 107776540U)));
  result = (long long)v_5;
  result = (long long)((double)(- (- p) / ((float)(- ((long long)v - result)) + 365.f)) + - (
                       1.72047311067e+38 / (double)((p - 25.f) + 734.f)));
  result = result;
  return result;
}


