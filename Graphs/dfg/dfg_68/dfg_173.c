#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78179528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, float p_5[1], unsigned int p_11,
                  unsigned long long p_13)
{
  unsigned long v_9;
  signed char v_7;
  short v;
  unsigned long result;
  v_7 = (signed char)37;
  v_9 = (unsigned long)1781649813.62;
  v = (short)((unsigned long long)(- ((unsigned long)1.8929706747e+38f + v_9) | (unsigned long)p_11) % 157ULL);
  result = (unsigned long)(- ((float)((int)v % 8254) + (float)p * p_5[0]) + - (
                           (float)(! v_7) + 3296557312.f));
  return result;
}


