#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 834887715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  unsigned short v_6;
  unsigned char v_4;
  float v;
  int result;
  v_6 = (unsigned short)51826;
  v_4 = (unsigned char)148;
  result = -29861;
  v_4 = (unsigned char)((int)v_6 / (0 % (- ((int)v_4 % (result + 950)) + 197) + 582));
  result = (int)v_4;
  v = (float)result;
  result = (int)((v + (float)((int)v_4 % ((int)v_4 + 97))) / 120.f - v);
  return result;
}


