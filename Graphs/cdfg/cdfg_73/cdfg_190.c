#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590582600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[5][5], int p_5[4], double p_7,
                       double p_11, unsigned char p_13)
{
  unsigned short v_9;
  long long v;
  unsigned long long result;
  v_9 = (unsigned short)(! ((int)(1010618124. * p_11) % (((int)p_13 + (int)p_13) + 629)));
  if ((long long)(3626004003U / (unsigned int)((int)v_9 + 927)) <= 4212352881LL << (
                                                                   117 / (
                                                                   (int)(~ v_9) + 736) & 63)) {
    v = (long long)p_5[1];
    result = (unsigned long long)((double)((unsigned long long)(v / 45035LL) * (
                                           p[4][0] % 93ULL)) + -945.10956834);
  }
  else result = (unsigned long long)p_7 % 18446744073252375491ULL;
  return result;
}


