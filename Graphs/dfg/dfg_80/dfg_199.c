#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 446488062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned int p_4, double p_6, float p_11[5],
         long p_13)
{
  float v_15;
  unsigned int v_9;
  unsigned short v;
  char result;
  v_15 = -2.17827014703e+38f;
  v_9 = (unsigned int)p_6;
  v = (unsigned short)((unsigned long)p_13 - (unsigned long)(! (- p_4 - (unsigned int)v_15)));
  result = (char)(((p_6 * (double)((int)v + 249)) / (double)(((float)v_9 * p_11[1] + 903263872.f) + 840.f)) * 40.);
  result = (char)(~ ((18446744073709509940ULL % ((unsigned long long)-1.8356444722e+38f % (
                                                 p + 989ULL) + 523ULL)) % (unsigned long long)(
                     p_4 / (((unsigned int)result + 4294926386U) + 797U) + 233U)));
  result = (char)(p * (unsigned long long)((int)result / -61261));
  return result;
}


