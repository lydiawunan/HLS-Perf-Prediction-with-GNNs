#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437442061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p)
{
  signed char v_4;
  signed char v;
  float result;
  v_4 = (signed char)-3;
  result = (float)p;
  v = (signed char)(- ((float)((unsigned long)v_4 % (p + 326UL)) * (11023.f - result)));
  result = (float)v;
  return result;
}


