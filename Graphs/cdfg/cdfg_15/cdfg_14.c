#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027534460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p[5], unsigned short p_9, float p_11[5][1])
{
  float v_6;
  unsigned long long v_4;
  double v;
  float result;
  v_4 = 18446744073276113596ULL;
  v = (double)p[4];
  v_6 = (float)(((int)(- p[0]) - -125) / ((int)p_9 * (int)((unsigned short)(- p_11[1][0])) + 683));
  result = (float)((double)(1ULL ^ (unsigned long long)v % (v_4 + 821ULL)) / (
                   - ((double)v_6 + v) + 758.));
  return result;
}


