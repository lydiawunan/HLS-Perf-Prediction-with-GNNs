#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 614483913
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[3][5][4], long p_7[4], long p_9, float p_13,
           unsigned long p_17)
{
  short v_15;
  unsigned long long v_11;
  long long v_5;
  long v;
  double result;
  v_15 = (short)-9429;
  v_11 = (unsigned long long)p_13;
  if (0 > (int)((unsigned short)(((float)(v_11 | 18446744073709541051ULL) - (
                                  p_13 + (float)v_15)) - (float)((p_17 + 494283740UL) - (unsigned long)(
                                                                 60L * p_7[2]))))) {
    v = (long)(-(unsigned char)215);
    v_5 = (long long)(- p_7[2] + (~ p_9 >> (- v & 31L)));
    result = (double)(4032258355UL - (unsigned long)(((long)p[1][1][3] << (
                                                      v & 31L)) / ((long)(
                                                                   (double)v_5 - -860.347592435) + 889L)));
  }
  else result = (double)(unsigned short)48953;
  return result;
}


