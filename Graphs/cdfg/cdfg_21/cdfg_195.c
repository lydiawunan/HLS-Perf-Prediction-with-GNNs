#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 358749909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[2][4][2])
{
  double v;
  unsigned char result;
  v = (double)-10010;
  result = (unsigned char)(- ((4294943111U & (unsigned int)p[1][0][0]) / (
                              (unsigned int)(v - 16018157.) + 700U)));
  return result;
}


