#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32855643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p)
{
  signed char v_8;
  int v_6;
  unsigned int v_4;
  float v;
  unsigned long result;
  v_8 = (signed char)-93;
  v_6 = -1688;
  v_4 = (unsigned int)p;
  result = (unsigned long)p;
  v = (float)(((v_6 % ((int)v_8 + 285)) * (int)p) / (v_6 + 454));
  result = (unsigned long)((- v - (49.f - v)) - (float)((unsigned long)v_4 % (
                                                        result / 1421UL + 344UL)));
  return result;
}


