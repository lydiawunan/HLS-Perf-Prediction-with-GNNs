#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 342188298
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, short p_5, unsigned char p_7)
{
  unsigned short v;
  unsigned int result;
  v = (unsigned short)p_5;
  result = (unsigned int)(-46 >> ((((unsigned long)p * 729266486UL - (unsigned long)(
                                    (unsigned int)v % 3332979112U)) >> (
                                   18446744072783168134ULL * (unsigned long long)(
                                   (int)p_5 * (int)p_7) & 31ULL)) & 7UL));
  return result;
}


