#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 277747683
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[3][5])
{
  signed char v_8;
  signed char v_6;
  signed char v_4;
  unsigned char v;
  float result;
  v_4 = p[1][0];
  v = (unsigned char)122;
  result = (float)p[0][1];
  v_6 = (signed char)-109;
  v_8 = (signed char)result;
  result = (float)(((long)v_8 - (long)v_6 % 21233L) * (long)(- (- ((int)p[1][1] * (int)p[1][2]))));
  result = (-2073.f * (result / ((float)v + 123.f)) - (float)(~ v_4)) / (
           (float)((int)(! v_6) % ((int)v_8 + 1009) + 23999) + 920.f);
  return result;
}


