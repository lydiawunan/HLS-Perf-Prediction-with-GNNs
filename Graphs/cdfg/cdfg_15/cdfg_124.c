#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984697858
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p[3][3], short p_5, signed char p_7)
{
  short v;
  float result;
  result = (float)p_7;
  v = (short)p_7;
  result = (-42.f * result + (float)((unsigned long long)v - p[1][2])) - (float)(- (
           p[0][2] * (unsigned long long)p_5));
  return result;
}


