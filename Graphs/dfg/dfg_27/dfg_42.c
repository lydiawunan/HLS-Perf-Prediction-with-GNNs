#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 766318746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, float p_4, long p_7[5], long p_9,
                       unsigned short p_13)
{
  unsigned long long v_17;
  unsigned long v_15;
  char v_11;
  short v;
  unsigned long long result;
  v_17 = 33228ULL;
  v_15 = (unsigned long)p_9;
  v_11 = (char)v_17;
  v = (short)(((0 % (unsigned long long)(p_7[1] + 699L)) / (unsigned long long)(
               ! (p_9 % (long)((int)v_11 + 68)) + 740L)) * (unsigned long long)(~ (
              (unsigned long)(-41121390L % (long)((int)p_13 + 713)) % (
              (v_15 & (unsigned long)p_13) + 379UL))));
  result = (unsigned long long)(! (~ (309827005UL ^ (unsigned long)v)));
  result = (((unsigned long long)(p + -700478340LL) * (result | (unsigned long long)p_4)) / 70ULL) / (
           (unsigned long long)7.01675639313e+37f + 771ULL);
  return result;
}


