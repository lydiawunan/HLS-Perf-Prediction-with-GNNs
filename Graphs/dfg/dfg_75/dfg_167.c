#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 34570855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[1], short p_7, unsigned int p_11,
                       unsigned int p_15, unsigned long p_17)
{
  double v_13;
  long long v_9;
  unsigned long long v_5;
  double v;
  unsigned long long result;
  v = 4157275489.08;
  v_9 = (long long)(! (- p_11 | p_11));
  v_13 = (double)((int)p_7 ^ -91);
  v_5 = (unsigned long long)(4294965766U / (((unsigned int)((double)(
                                                            (long long)p_7 / (
                                                            v_9 + 32LL)) / (
                                                            ((double)p_11 + v_13) + 199.)) - (
                                             - p_15 >> (p_17 & 31UL))) + 116U));
  result = ! (((p[0] & (unsigned long long)v) - 28587ULL) % ((18446744073709533479ULL ^ ! v_5) + 417ULL));
  return result;
}


