#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 586584238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[4][1][3], unsigned char p_7[4][1][2],
                 char p_11[2][3], signed char p_13[3][1])
{
  long long v_9;
  unsigned short v_5;
  signed char v;
  unsigned int result;
  v_9 = (long long)1.13873468411e+38;
  v = (signed char)((-486868350LL ^ v_9) - ((long long)p_11[0][0] - 33543LL) % (long long)(
                                           (int)p_13[1][0] + 83));
  v_5 = (unsigned short)(! v);
  result = (unsigned int)((3335039750. + (p[3][0][2] / ((double)v + 294.)) * (double)(! v)) * (double)(
                          (int)(~ v_5) % ((int)p_7[3][0][1] + 577)));
  return result;
}


