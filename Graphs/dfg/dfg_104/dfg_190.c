#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895254355
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p)
{
  unsigned char v_7;
  float v_5;
  float v;
  unsigned int result;
  v_7 = (unsigned char)190;
  v_5 = (float)p;
  v = -2.63228154198e+38f;
  result = (unsigned int)((v - v_5) + (float)v_7);
  v = (float)(p % (unsigned long long)(! result + 782U));
  v = v;
  result = (unsigned int)v;
  return result;
}


