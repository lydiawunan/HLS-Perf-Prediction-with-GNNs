#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 935483434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, int p_9, long p_11, char p_13, long long p_15[5])
{
  unsigned long long v_17;
  unsigned char v_7;
  unsigned long long v_5;
  long v;
  long result;
  v_17 = (unsigned long long)p_13;
  v_5 = (unsigned long long)p_9;
  v_7 = (unsigned char)(5000ULL + v_17);
  v = (long)(- (-661601215 % (((int)v_7 << (((long long)p_11 ^ p_15[1]) & 7LL)) + 416)));
  v_7 = (unsigned char)(- p_11 * p_11);
  result = (long)((unsigned long long)((long)p + ~ v) / ((v_5 + (unsigned long long)(
                                                          (int)v_7 * p_9)) + 786ULL) - (unsigned long long)(
                  - (p_11 % -496387079L) / ((long)((float)((unsigned long long)p_13 % (
                                                           v_5 + 404ULL)) - -296.209197998f) + 521L)));
  return result;
}


