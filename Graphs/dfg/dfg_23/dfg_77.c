#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279744489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, double p_13, unsigned short p_15, int p_19)
{
  long long v_17;
  long long v_11;
  char v_8;
  unsigned long v_6;
  signed char v_4;
  int v;
  float result;
  v_17 = (long long)p_13;
  v_11 = 221098794LL;
  v_8 = (char)p;
  v_4 = (signed char)19;
  v_6 = (unsigned long)(((long long)((int)((unsigned short)p_13) / ((int)p_15 + 204)) * (
                         v_17 + (long long)p_19)) % ((long long)(p_13 / (
                                                                 (double)(
                                                                 (int)((unsigned short)p_13) - (int)p_15) + 466.)) + 92LL) - (long long)p);
  v = (int)p_13;
  result = (float)((unsigned long long)(~ (((long)p + 579925338L) * -9L)) | (
                   (unsigned long long)v_11 | 18446744073709497601ULL));
  result = (float)((unsigned long long)(- ((unsigned long)(v / ((int)v_4 + 5)) + 
                                           3309894423UL / (v_6 + 896UL))) / (
                   (18446744073688382870ULL & (unsigned long long)result) % (
                   ~ ((unsigned long long)v_8 * 646020142ULL) + 703ULL) + 366ULL));
  return result;
}


