#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1027039304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned short p_7)
{
  unsigned long v_13;
  int v_11;
  double v_9;
  unsigned short v_5;
  unsigned long v;
  float result;
  v_13 = 4294936847UL;
  v_11 = (int)p_7;
  v_9 = (double)p;
  v_5 = p_7;
  v_13 = v_13;
  if ((unsigned long)(~ ((int)(121. * v_9) + v_11)) != v_13) {
    result = (float)v_5;
    v = (unsigned long)p;
    result = (float)(~ v ^ v) - result;
  }
  else result = (float)p_7;
  return result;
}


