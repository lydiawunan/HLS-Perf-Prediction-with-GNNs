#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683218935
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(void)
{
  unsigned long v_6;
  unsigned long v_4;
  unsigned char v;
  float result;
  v_6 = 57009UL;
  v_4 = 4294959852UL;
  v = (unsigned char)(- (- (44.6600418091f / ((float)v_6 + 635.f))));
  result = (float)(1538UL + ((unsigned long)(~ v) + v_4));
  return result;
}


