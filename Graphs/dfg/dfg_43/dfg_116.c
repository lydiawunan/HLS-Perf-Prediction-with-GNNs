#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675531448
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, unsigned char p_7, char p_9, short p_11,
                  unsigned char p_13)
{
  unsigned long long v_4;
  unsigned int v;
  unsigned char result;
  v_4 = (unsigned long long)p_7;
  v = (unsigned int)((int)p_9 - (int)((char)(((double)(~ p_11) * ((double)p + 2.38069942464e+38)) / (
                                             (double)(! p_13) + 123.))));
  result = - p_7;
  v = (unsigned int)(~ result) - v;
  result = (unsigned char)((((unsigned long long)(! v) | ((unsigned long long)result + v_4)) - (unsigned long long)(
                            4294936771UL * p - 617740426UL)) + 18228928973713095472ULL);
  return result;
}


