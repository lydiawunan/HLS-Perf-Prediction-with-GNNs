#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471795912
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_5, int p_7, signed char p_9, float p_11)
{
  unsigned short v_17;
  char v_15;
  unsigned long long v_13;
  unsigned short v;
  long result;
  v_17 = (unsigned short)p_5;
  v_13 = 18446744073709491159ULL;
  v = (unsigned short)p_7;
  result = (long)p_11;
  v_15 = (char)((unsigned long long)((int)v - (int)((unsigned short)(
                                     (float)(33189 % ((int)p + 58)) * (
                                     (float)p - p_11)))) & (((unsigned long long)p_5 - v_13) % (unsigned long long)(
                                                            ~ result + 931L)) % (unsigned long long)(
                                                           ~ ((int)p * (int)p) + 878));
  v_13 = (unsigned long long)(- ((int)v_17 * -70));
  v = (unsigned short)(1 + ((int)((char)((float)((unsigned long long)p_11 / (
                                                 v_13 + 869ULL)) * p_11)) + (int)v_15));
  result = (long)(((long long)v + ~ ((long long)p * p_5)) | (long long)(
                  (p_7 / ((int)p_9 + 619)) / -26935));
  return result;
}


