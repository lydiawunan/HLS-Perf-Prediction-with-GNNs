#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 450707314
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, float p_9)
{
  float v_11;
  char v_6;
  unsigned int v_4;
  short v;
  int result;
  v_11 = (float)p;
  v_4 = 4093097717U;
  result = (int)p;
  v_6 = (char)v_11;
  result = (int)(p_9 + (float)result);
  v = (short)(~ ((unsigned long)result - ((unsigned long)(v_4 | (unsigned int)v_6) + - p)));
  result = (int)(~ (- (- (~ v))));
  return result;
}


