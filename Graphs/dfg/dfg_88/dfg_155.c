#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 108683504
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p[2], short p_7)
{
  char v_5;
  unsigned int v;
  float result;
  v = (unsigned int)p_7;
  v_5 = (char)98;
  v = (unsigned int)(~ ((int)p[0] * -20) + (int)v_5) % (((unsigned int)p[1] + v) + 294U);
  result = (float)(! v);
  return result;
}


