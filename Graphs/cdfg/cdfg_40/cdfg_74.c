#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 666096720
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, int p_4[5][5], unsigned char p_6[2][1],
                   double p_8, unsigned long long p_11[3][2])
{
  long v;
  unsigned short result;
  v = (long)p_11[1][0];
  if ((unsigned long)p_6[1][0] != (567UL / ((unsigned long)p_8 % 3367431532UL + 411UL)) / (unsigned long)(
                                  ! ((long)p_4[1][1] + v) + 763L)) result = (unsigned short)p;
  else result = (unsigned short)(! (p_4[4][4] / -49) - ~ p_4[0][2]);
  return result;
}


