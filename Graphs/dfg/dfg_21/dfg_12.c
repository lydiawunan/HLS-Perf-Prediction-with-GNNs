#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487923330
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[4])
{
  unsigned int v_5;
  float v;
  short result;
  v_5 = (unsigned int)p[1];
  v = (float)(char)25;
  result = (short)11961;
  result = (short)(- ((p[0] * (double)v_5) * (p[0] + 78.)) + (double)(~ (
                   (141 - (int)result) - (int)(- result))));
  result = (short)((unsigned long long)((int)v / (((int)((short)(3842958336.f + v)) - (int)result) + 120)) % (
                   (177ULL + (unsigned long long)((unsigned int)p[1] * v_5)) + 845ULL));
  return result;
}


