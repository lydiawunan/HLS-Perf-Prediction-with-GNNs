#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 555710631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(void)
{
  double v_6;
  signed char v_4;
  char v;
  unsigned int result;
  v_6 = -771.131473104;
  v_4 = (signed char)-122;
  v = (char)(- (((double)v_4 + v_6) / 28204.));
  result = (unsigned int)v;
  return result;
}


