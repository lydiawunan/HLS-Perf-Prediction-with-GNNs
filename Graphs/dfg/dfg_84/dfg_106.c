#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78324554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned int p_4, long p_6,
                 unsigned short p_8, unsigned long long p_11)
{
  float v;
  unsigned int result;
  result = (unsigned int)(! p_11);
  v = (float)60116;
  result = (unsigned int)((float)((p % (unsigned long)(p_4 + 346U) - 
                                   (unsigned long)result % (unsigned long)(
                                   p_6 + 111L)) & (unsigned long)p_8) + - (- v));
  return result;
}


