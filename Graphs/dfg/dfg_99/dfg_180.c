#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92184138
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(void)
{
  short v_12;
  float v_10;
  long v_8;
  unsigned long long v_6;
  short v_4;
  char v;
  unsigned int result;
  v_12 = (short)23902;
  v_10 = 910.887023926f;
  v_4 = (short)12521;
  result = 971918361U;
  v_8 = (long)(- (- ((658718144.f + v_10) * (float)(! v_12))));
  v_6 = (unsigned long long)v_8;
  v = (char)((unsigned long long)(! (~ (- result))) + (! (173ULL / (v_6 + 608ULL)) << 20LL));
  result = (unsigned int)(((32037ULL ^ (unsigned long long)result) - (unsigned long long)(
                           (long)((int)v * (int)((char)-1.01342093988e+38f)) ^ -325600520L)) * (unsigned long long)(! (
                          (int)v % ((int)v_4 + 778))));
  return result;
}


