#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274428111
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p)
{
  unsigned int v_7;
  double v_5;
  unsigned char v;
  unsigned int result;
  v_7 = 4277103944U;
  v_5 = -1.33094895576e+37;
  v = (unsigned char)p;
  result = ~ v_7;
  result = (unsigned int)p - (result % ((unsigned int)((double)v + v_5) + 385U)) * (
                             (unsigned int)(-4707 & (int)p) - ~ v_7);
  result = result;
  result = ~ ((unsigned int)(~ p) ^ - result * 74U);
  return result;
}


