#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335909753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, float p_7[4][1], short p_11, unsigned char p_13,
          int p_15)
{
  unsigned char v_9;
  int v_5;
  signed char v;
  float result;
  v_9 = (unsigned char)(p + (unsigned long)(- (- (p_7[3][0] + (float)p_13))));
  v_5 = -50184;
  v = (signed char)0;
  result = (float)(~ (! p) + (unsigned long)(- (((int)v - v_5) + (-89 - (int)((signed char)p_7[1][0])))));
  return result;
}


