#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 808392060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, long long p_5, int p_7,
                  unsigned char p_11[4][5], unsigned int p_13)
{
  signed char v_19;
  long v_17;
  unsigned int v_15;
  double v_9;
  unsigned int v;
  unsigned char result;
  v_19 = (signed char)79;
  v_15 = (unsigned int)p_11[3][2];
  v_9 = 667.960711646;
  v = 3880270469U;
  result = p_11[1][1];
  v_17 = (long)(~ (((p_5 * (long long)p_13) / 885990575LL) / ((p + (long long)p_11[1][4]) / (long long)(
                                                              (v_15 >> (
                                                               p & 31LL)) + 795U) + 420LL)));
  v_15 = (unsigned int)((long long)(- v_19) | - p_5);
  result = (unsigned char)((unsigned long long)(((p_5 & (long long)p_7) + (long long)(- v_9)) % (long long)(
                                                (int)(~ (~ result)) + 609)) * (
                           (unsigned long long)((unsigned int)(! p_11[1][4]) + 
                                                144U * p_13) % (((unsigned long long)v_15 / 18446744073709505640ULL) / (unsigned long long)(
                                                                v_17 + 13L) + 737ULL)));
  result = (unsigned char)(4294934804LL * (((long long)result - p) ^ (long long)(
                                           4294955753U / ((v - 4294930922U) + 270U))));
  return result;
}


