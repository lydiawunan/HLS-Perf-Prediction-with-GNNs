#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170907285
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p[1][2], int p_4[4][4][5],
                   unsigned char p_6, unsigned long long p_8)
{
  signed char v;
  unsigned short result;
  result = (unsigned short)(~ p_6);
  v = (signed char)((long long)result | 1);
  result = (unsigned short)((unsigned long long)(~ (- p_4[2][2][3] - (int)(! p_6))) * ~ (~ (
                            p_8 + (unsigned long long)v)));
  result = (unsigned short)(p[0][1] * (unsigned long)result);
  return result;
}


