#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177912172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, int p_5, unsigned int p_7,
                 int p_11[3][4][5])
{
  unsigned char v_9;
  double v;
  unsigned int result;
  v_9 = (unsigned char)p_11[1][0][4];
  v = (double)v_9;
  v_9 = (unsigned char)((long long)(2936508928U * ((36934U % (p_7 + 1012U)) / 51U)) * - (
                        -3902137327800LL / (long long)(((int)p - p_11[1][1][4]) + 899)));
  v = (double)(~ ((long long)((float)p * -1.36802875242e+38f - (float)(
                              p_5 * (int)v)) * (((long long)p_7 | -1054779838LL) - (long long)v_9)));
  result = (unsigned int)v;
  return result;
}


