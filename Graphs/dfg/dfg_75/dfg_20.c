#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576118483
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned long long p_5, long long p_11,
                char p_13, unsigned int p_15)
{
  long v_9;
  unsigned int v_7;
  signed char v;
  signed char result;
  v_9 = (long)(24796 / ((int)p + 198));
  v_7 = (unsigned int)((unsigned long)(~ (! p_13)) + 0UL / (((unsigned long)p_15 / (unsigned long)(
                                                             v_9 + 586L) - 4216957756UL) + 69UL));
  v = (signed char)(- ((long long)(v_9 & - v_9) * ~ (p_11 | 22762LL)));
  result = (signed char)((unsigned long long)(((long)v * -202249983L >> (
                                               (int)((unsigned short)3.13258997073e+38f) * (int)p & 31)) | 45L) + 
                         p_5 / (unsigned long long)(((unsigned long)(
                                                     4294967205U + v_7) - (unsigned long)(! v_9)) + 897UL));
  return result;
}


