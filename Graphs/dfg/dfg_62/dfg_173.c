#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162102223
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long long p_7, double p_9,
                 unsigned short p_13[4][4][1], long p_15)
{
  unsigned char v_11;
  unsigned int v_4;
  unsigned int v;
  unsigned int result;
  v_11 = (unsigned char)(p_15 + 135L);
  v = (unsigned int)((int)(- (- p_9)) * (int)(! p_13[1][3][0]));
  v_4 = (unsigned int)((long long)(! p) + p_7);
  result = ~ v / (v_4 + 109U);
  return result;
}


