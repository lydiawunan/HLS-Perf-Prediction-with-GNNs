#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460998759
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[1][1], unsigned char p_5[4][3],
              unsigned char p_7)
{
  long v_9;
  unsigned int v;
  long long result;
  v_9 = (long)p[0][0];
  v = (unsigned int)v_9;
  result = (long long)((641992357ULL + ~ p[0][0]) / (unsigned long long)(
                       (v / (unsigned int)((int)p_5[0][1] + 512)) * ~ v + 49U) + (unsigned long long)(
                       (int)p_5[3][1] / ((int)p_7 + 638)));
  return result;
}


