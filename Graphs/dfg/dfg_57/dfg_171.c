#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1014938
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p[2][4], unsigned long long p_4, long long p_9,
          int p_17, unsigned char p_19)
{
  unsigned short v_15;
  unsigned char v_13;
  double v_11;
  float v_7;
  unsigned short v;
  float result;
  v_15 = (unsigned short)p_9;
  v_13 = (unsigned char)221;
  v_11 = (double)(p_17 % ((int)p_19 + 644));
  v_7 = (float)(((unsigned long long)(- p_9 + 28708LL) + (unsigned long long)(
                                                         (long long)v_11 / -504338828LL) * 18446744073709486211ULL) * (unsigned long long)(
                (unsigned int)(! v_13) | (6925U - (unsigned int)v_15) % 28461U));
  v = (unsigned short)(- v_7);
  result = (float)(~ ((((unsigned long long)p[1][1] - p_4) & 53634ULL) - (unsigned long long)v));
  return result;
}


