#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226739334
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p[2][1][5], unsigned char p_4, signed char p_6,
              int p_9, signed char p_11)
{
  unsigned int v;
  long long result;
  v = (unsigned int)((3341501079UL ^ (unsigned long)(~ (p_9 + (int)p_11))) | (unsigned long)p[1][0][1]);
  result = (long long)(~ (v / (unsigned int)((p_9 ^ (int)p[1][0][0]) % (
                                             ((int)p_11 - -123) + 913) + 980)));
  result = result;
  result = 409187220LL / (((4294915903LL ^ result) % (long long)(((int)p[0][0][1] & (int)p_4) + 846)) * (
                          (long long)(- p_6) * result) + 37LL);
  return result;
}


