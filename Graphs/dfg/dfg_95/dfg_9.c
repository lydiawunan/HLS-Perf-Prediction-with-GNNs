#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 615322324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long p_9, int p_11[2][4], float p_13)
{
  float v_6;
  long v_4;
  long long v;
  unsigned int result;
  v = (long long)p_13;
  v_4 = (long)p_11[1][2];
  v_6 = (float)((long)p % (p_9 + 175L));
  result = (unsigned int)((int)((char)((float)v - (float)(v_4 * (long)4735474176.f) * - v_6)) / (
                          (int)(! p) + 221));
  return result;
}


