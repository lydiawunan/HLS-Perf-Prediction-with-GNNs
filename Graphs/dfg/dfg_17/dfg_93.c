#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24399562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p[2], unsigned long long p_4,
                 unsigned char p_6, float p_8[3][3], char p_11)
{
  short v_13;
  int v;
  unsigned int result;
  v_13 = (short)(- (~ ((p_4 + 62ULL) % 1ULL)));
  result = (unsigned int)v_13;
  v = (int)p_11;
  result = (unsigned int)(- p[0] | - (18446744073630698977ULL % (p_4 + 823ULL)) % (unsigned long long)(
                                   (unsigned int)((float)p_6 / (p_8[2][1] + 942.f)) / (
                                   result * (unsigned int)v + 868U) + 367U));
  return result;
}


