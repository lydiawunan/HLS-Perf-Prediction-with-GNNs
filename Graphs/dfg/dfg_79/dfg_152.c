#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025034169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, char p_15, signed char p_17)
{
  unsigned char v_13;
  int v_10;
  char v_8;
  long long v_6;
  unsigned long long v_4;
  long long v;
  unsigned long result;
  v_10 = -35145;
  v_8 = (char)p;
  v_4 = 18446744073709540638ULL;
  result = 4190253550UL;
  v_13 = (unsigned char)(~ (162 * ~ ((int)v_8 >> 2LL)));
  v_6 = (long long)((! (result ^ (unsigned long)v_10) ^ p) & (unsigned long)(
                    (double)(! ((unsigned long long)v_13 / (v_4 + 761ULL))) - 
                    (double)p_15 / ((double)p_17 / -2.59955951669e+38 + 61.)));
  v = (long long)(~ (! (~ v_4) ^ (unsigned long long)(~ (v_6 / (long long)(
                                                         (int)v_8 + 272)))));
  result = (unsigned long)v;
  return result;
}


