#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113928725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned short p_9)
{
  float v_7;
  unsigned short v_4;
  char v;
  char result;
  v_7 = -1095118208.f;
  v_4 = (unsigned short)(((int)((unsigned char)((-3.33847554666e+38 / (double)(
                                                 p + 619.f)) * (double)(
                                                (int)((unsigned char)v_7) * 20))) & 29) - (int)p_9);
  result = (char)v_4;
  v = (char)((int)result ^ 10724);
  result = v;
  return result;
}


