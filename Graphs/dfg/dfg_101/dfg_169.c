#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525085561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[5], unsigned long long p_7[3][2][1],
                  unsigned short p_9[5], long long p_11,
                  unsigned long long p_13)
{
  signed char v_5;
  long long v;
  unsigned char result;
  v_5 = (signed char)1.37521344331e+38;
  v = (long long)(((unsigned long long)(! (p[0] ^ (unsigned int)v_5)) * (
                   p_7[2][1][0] % (unsigned long long)((int)p_9[1] + 177) - (unsigned long long)p_11)) * (
                  18446744073709518368ULL - p_13));
  result = (unsigned char)v;
  return result;
}


