#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 519805698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, signed char p_4, unsigned int p_6,
                       unsigned long long p_9)
{
  short v;
  unsigned long long result;
  v = (short)(! 369500395UL);
  result = (unsigned long long)p + (((unsigned long long)p | 335081805ULL) / (unsigned long long)(
                                    ((unsigned long)p_4 - 21532UL) + 111UL) & 
                                    (unsigned long long)((unsigned long)p_6 / 4294950238UL) * (
                                    (unsigned long long)v * p_9));
  return result;
}


