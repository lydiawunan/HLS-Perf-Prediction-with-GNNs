#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396128851
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, double p_9, int p_13[1][5],
                unsigned long long p_15)
{
  unsigned char v_11;
  double v_6;
  unsigned long v_4;
  short v;
  signed char result;
  v_11 = (unsigned char)122;
  v_6 = p_9;
  v_4 = (unsigned long)p;
  v = (short)p;
  result = (signed char)p_9;
  v_11 = (unsigned char)(~ (! ((unsigned long long)v_11 * p_15)) % (unsigned long long)(
                         (int)v_11 + 609));
  v_4 = (unsigned long)((((unsigned long long)(p_13[0][4] | 50) + ((unsigned long long)v_4 & p_15)) - (unsigned long long)(- (
                         (int)v - (int)result))) + 751633797ULL);
  v = (short)(((unsigned long long)((p + p) & (unsigned int)(~ v)) | (
               (unsigned long long)(- p_9) - (unsigned long long)v_11 * 92899959ULL)) + (unsigned long long)(- p_9));
  result = (signed char)(-1. + - ((double)((unsigned long)-673.364956521 % (
                                           v_4 + 128UL)) * (18959. - v_6)));
  return result;
}


