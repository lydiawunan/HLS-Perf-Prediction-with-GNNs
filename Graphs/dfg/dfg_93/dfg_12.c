#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 496196153
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[4][5], short p_9)
{
  signed char v_11;
  unsigned long long v_6;
  double v_4;
  char v;
  unsigned int result;
  v_11 = (signed char)p_9;
  v_6 = (unsigned long long)v_11;
  v_4 = (double)p_9;
  v = (char)(- v_6 % 756ULL - (unsigned long long)p[1][2]);
  result = (unsigned int)(~ (972 - ((int)v - (int)((char)(v_4 * -5670702592.)))));
  return result;
}


