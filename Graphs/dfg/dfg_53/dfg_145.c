#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160110719
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p[5], unsigned long p_11,
                       unsigned short p_13, char p_15, long p_17)
{
  long long v_19;
  unsigned char v_8;
  int v_6;
  unsigned long v_4;
  long v;
  unsigned long long result;
  v_19 = -49948LL;
  v_8 = (unsigned char)36;
  v_4 = (unsigned long)p_13;
  v = (long)p_11;
  v_8 = (unsigned char)((double)(-25104852L + 39261L % (long)((int)v_8 + 257)) * -423.290347425);
  v_6 = (int)(! ((unsigned long long)(! p_15) / (18446744072863728138ULL % (unsigned long long)(
                                                 p_17 + 414L) + 635ULL) - (unsigned long long)(
                 (long long)(55UL / (p_11 + 526UL)) * - v_19)));
  v = (long)(((long long)(-346007122 - (v_6 & (int)v_8)) + (long long)(
                                                           v * 453585569L) % (
                                                           (p[1] | 8567LL) + 201LL)) - (
             0 - (long long)((p_11 << 23U) + (unsigned long)((int)p_13 * (int)p_15))));
  result = (unsigned long long)(! ((unsigned long)(! v + 57207513L) % (
                                   v_4 + 311UL)));
  return result;
}


