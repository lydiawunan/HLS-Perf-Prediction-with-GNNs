#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 584074624
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(void)
{
  unsigned int v_14;
  double v_12;
  unsigned long long v_10;
  char v_8;
  char v_6;
  float v_4;
  short v;
  float result;
  v_14 = 5052U;
  v_12 = -806.075816683;
  v_10 = 18446744073175665230ULL;
  v_4 = -217.571807861f;
  v = (short)30646;
  v_6 = (char)(v_10 | (unsigned long long)(~ ((unsigned int)(v_12 * (double)v_10) / (
                                              ~ v_14 + 310U))));
  v_8 = (char)24;
  v = (short)(- (60071.f + v_4) / ((float)((unsigned long long)((int)v * (int)v_6 + (int)(! v_8)) - 
                                           0ULL % (v_10 + 853ULL)) + 87.f));
  result = (float)v;
  return result;
}


