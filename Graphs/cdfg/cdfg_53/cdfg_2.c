#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231962514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(void)
{
  double v_8;
  unsigned char v_6;
  char v_4;
  unsigned int v;
  long long result;
  v_8 = 3.24019892469e+38;
  v_6 = (unsigned char)31;
  v = 664167916U;
  v_4 = (char)((int)((signed char)(804.489420905 + ((double)v_6 + v_8))));
  result = (long long)(~ ((unsigned long)(v + (unsigned int)v_4) + 402005374UL));
  return result;
}


