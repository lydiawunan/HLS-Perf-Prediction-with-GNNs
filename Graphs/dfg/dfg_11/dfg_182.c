#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015182763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned int p_5, unsigned short p_7,
                       unsigned long long p_9[5][4])
{
  unsigned long long v_11;
  long long v;
  unsigned long long result;
  v_11 = 23173ULL;
  result = (unsigned long long)(730804057U % ((unsigned int)((((double)p_9[1][3] / 599.900738906) * (double)v_11) * (double)p_9[0][1]) + 139U));
  v = (long long)p_7;
  result = (! result / (result * (unsigned long long)p + 476ULL) + (unsigned long long)(
            - v << ((int)(- p) & 63))) + (unsigned long long)p_5;
  return result;
}


