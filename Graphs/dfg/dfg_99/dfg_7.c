#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 99494206
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[3][3], unsigned short p_5,
                  unsigned short p_9[3])
{
  int v_7;
  short v;
  unsigned char result;
  v_7 = (int)((unsigned long)p_5 - - (4294905959UL + (unsigned long)p_9[2]) / (
                                   (unsigned long)(((float)p[2][1] / 7665431040.f) * (float)(~ p[1][2])) + 962UL));
  v = (short)v_7;
  result = (unsigned char)(0UL / ((((unsigned long)((int)p_5 % (v_7 + 965)) - 652253177UL) ^ 3786335477UL) + 753UL));
  return result;
}


