#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663912490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, float p_4, unsigned int p_7, char p_9,
          unsigned char p_11)
{
  float v;
  short result;
  v = (float)((int)p_11 % (((int)p - (int)((unsigned char)((float)p_11 + (
                                                           -8712907776.f - (float)p_7)))) + 234));
  result = (short)((unsigned int)(- ((float)p / (p_4 + 151.f) + (4294914560.f + v))) + (
                   p_7 | (unsigned int)((int)(! p_9) * (int)p_9)));
  return result;
}


