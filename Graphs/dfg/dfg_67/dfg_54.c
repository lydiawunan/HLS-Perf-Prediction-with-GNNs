#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488234310
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p[5][1], unsigned long p_7)
{
  unsigned int v_11;
  double v_9;
  float v_5;
  unsigned long v;
  unsigned int result;
  v_11 = 57400U;
  v_5 = (float)v_11;
  v_9 = (double)(unsigned char)22;
  v = (unsigned long)(~ ((long long)(v_5 - (float)p_7) % (long long)(
                         ((int)((char)v_9) | -40) + 434)));
  result = (unsigned int)(105430903ULL * - (p[2][0] / (unsigned long long)(
                                            v * v + 503UL)));
  return result;
}


