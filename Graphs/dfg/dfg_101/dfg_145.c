#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 527214811
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p[3])
{
  long v_6;
  double v_4;
  unsigned char v;
  unsigned char result;
  v_6 = 30439L;
  v_4 = (double)((unsigned long long)v_6 / (p[2] + 1009ULL));
  v = (unsigned char)v_4;
  result = v;
  return result;
}


