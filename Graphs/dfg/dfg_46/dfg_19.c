#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1048405800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long p_7, int p_9, double p_11,
                  signed char p_13)
{
  long long v_4;
  long v;
  unsigned char result;
  v = (long)(! (((int)(p_11 / ((double)p_13 + 487.)) + ~ p_9) + ((int)p * -20159) / (
                                                                ! p_9 + 889)));
  v_4 = (long long)((unsigned int)p % (((6646U >> (p_7 & 31UL)) + (unsigned int)(! (! p_9))) + 63U));
  result = (unsigned char)(((long long)v | (-39261LL - v_4)) % (long long)(
                           - (89 | (int)p) * 41826 + 144));
  return result;
}


