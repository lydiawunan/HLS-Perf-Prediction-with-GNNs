#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 368727172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p)
{
  unsigned int v_10;
  float v_8;
  int v_6;
  short v_4;
  unsigned char v;
  unsigned long long result;
  v_8 = 1270339840.f;
  v_4 = (short)24813;
  v_10 = (unsigned int)(! (~ ((int)p + ((int)p | 6))));
  v_6 = (int)(- ((long)(- (v_8 - (float)v_10)) / 114L));
  v = (unsigned char)(((int)(- v_4) * (int)((short)-2.86179992576e+38f)) / (
                      v_6 + 379));
  result = 0ULL;
  return result;
}


