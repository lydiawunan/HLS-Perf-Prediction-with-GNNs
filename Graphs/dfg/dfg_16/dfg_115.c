#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 21485852
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, char p_5, unsigned short p_11, short p_13,
           unsigned int p_15)
{
  unsigned long long v_9;
  unsigned long v_7;
  int v;
  double result;
  v_9 = (unsigned long long)(! ((unsigned int)(- p_11) ^ ((unsigned int)(- p_13) + (
                                                          65U - p_15))));
  v_7 = (unsigned long)((unsigned long long)((int)((char)3.14557781291e+38) / (
                                             (int)p_5 + 1007)) / (v_9 + 448ULL));
  v = (int)(((unsigned long long)(~ ((long long)p - 62482LL)) + 18446744073482075726ULL) << (
            (unsigned long)p_5 * v_7 & 63UL));
  result = (double)((unsigned long)v * ! (p >> (v & 31)));
  return result;
}


