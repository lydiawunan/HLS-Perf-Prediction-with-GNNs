#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 766245044
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[5][5][4], double p_7[5][3][1],
                 unsigned char p_9[2][3], unsigned short p_11)
{
  unsigned short v_4;
  unsigned short v;
  unsigned int result;
  v_4 = p_11;
  v = (unsigned short)(~ (! ((int)((unsigned short)p_7[2][1][0]) % ((int)v_4 + 289) >> (
                             ((long)p_9[1][2] - -59191L) & 31L))));
  v_4 = (unsigned short)(~ p[1][1][1]);
  result = (unsigned int)(! ((int)v % ((int)v_4 + 348)));
  return result;
}


