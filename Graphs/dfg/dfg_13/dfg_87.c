#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1033755153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned long p_5[1], unsigned long long p_9,
                  double p_15, double p_19)
{
  float v_17;
  short v_13;
  char v_11;
  unsigned char v_7;
  unsigned int v;
  unsigned long result;
  v_17 = (float)p_15;
  v_13 = (short)p_9;
  v_11 = (char)16;
  result = 7295UL;
  v = (unsigned int)((double)v_13 * - (- ((double)v_17 - p_19)));
  v_7 = (unsigned char)p_15;
  v_13 = (short)((unsigned long long)p / (p_9 + 771ULL));
  result = (unsigned long)(((unsigned long long)(((unsigned long)v | result) / (
                                                 ((unsigned long)p - p_5[0]) + 156UL)) | (
                            (unsigned long long)v_7 % (p_9 + 755ULL) + (unsigned long long)p)) - (unsigned long long)(
                           (long long)(! (43 / ((int)v_11 + 796))) / (
                           (-54812LL + (long long)v_13) + 476LL)));
  return result;
}


