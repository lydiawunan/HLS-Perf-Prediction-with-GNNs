#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817310870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long long p_7, double p_9, float p_11[5],
                   int p_15[5][3])
{
  long long v_17;
  unsigned short v_13;
  short v_5;
  unsigned long long v;
  unsigned short result;
  v_17 = 51307LL;
  v_13 = (unsigned short)p_7;
  result = (unsigned short)49392;
  v_5 = (short)((float)(p_7 + -19LL) / (- p_11[4] / ((float)result + 677.f) + 669.f) - (float)(
                ((long long)(! v_13) + (long long)p_15[3][2] / (v_17 + 476LL)) / -52LL));
  v = (unsigned long long)(- ((double)((long long)((double)v_5 - p) % (
                                       ~ p_7 + 567LL)) * ((double)p_7 + p_9)));
  result = (unsigned short)v;
  result = (unsigned short)((long long)result + ((long long)(p / 7702374912. - p) - (
                                                 -677986622LL >> 22U)));
  return result;
}


