#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 223075002
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p[2], unsigned long long p_5)
{
  double v_7;
  float v;
  short result;
  v_7 = (double)3480320014UL;
  v = (float)v_7;
  result = (short)((unsigned long long)(- ((4513U + p[0]) * (38700U - p[0]))) / (
                   ((unsigned long long)((float)(-69 % ((int)((signed char)2097598208.f) + 309)) + 
                                         -704.f * v) + p_5) + 766ULL));
  return result;
}


