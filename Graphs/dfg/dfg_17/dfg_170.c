#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1059347425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, short p_13[4][5])
{
  unsigned int v_10;
  short v_8;
  unsigned short v_6;
  float v_4;
  unsigned int v;
  unsigned long long result;
  v_8 = p_13[0][0];
  v_6 = (unsigned short)18988;
  v = (unsigned int)p_13[2][1];
  v_10 = 0U;
  v = (unsigned int)(3290361411UL | - (~ (4294967257UL - p)));
  v_4 = (float)(- ((long long)((unsigned long)(v_10 ^ v) / ((unsigned long)v_10 * p + 867UL)) + (
                   (long long)-1.22541359776e+38f + 22942LL)));
  result = (unsigned long long)((112U % (v / ((unsigned int)v_4 + 43U) + 696U) - (unsigned int)(~ (
                                 (int)v_6 % -95))) + (unsigned int)((int)v_8 % (
                                                                    (int)v_8 + 916)));
  return result;
}


