#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918668081
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, double p_5[1][4], long p_7, long long p_9,
                  unsigned short p_13[3][1])
{
  short v_11;
  unsigned int v;
  unsigned long result;
  v_11 = (short)p_9;
  result = p;
  v_11 = (short)(~ (- result & (unsigned long)(44161U - (unsigned int)v_11)) / (unsigned long)(
                 (int)p_13[1][0] * 18041 + 304));
  v = (unsigned int)(! ((int)v_11 - (int)(- v_11)));
  v = (unsigned int)((long long)((unsigned long)(((double)p - 481.00953312) / (
                                                 ((double)v - p_5[0][3]) + 587.)) * (
                                 (451188774UL - (unsigned long)p_7) * (unsigned long)5.69835439909e+27)) % (
                     - p_9 + 951LL));
  result = (unsigned long)v;
  return result;
}


