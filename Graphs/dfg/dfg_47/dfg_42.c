#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 910405018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, double p_7[5][3])
{
  char v_11;
  double v_9;
  unsigned int v_4;
  unsigned int v;
  signed char result;
  v_11 = (char)p_7[4][2];
  v_9 = -958.355390288;
  result = (signed char)(~ ((long)v_9 + - (-59236L - (long)v_11)));
  v_4 = (unsigned int)(- ((double)result * - ((double)p / (p_7[3][2] + 743.))));
  v = ~ v_4;
  result = (signed char)v;
  return result;
}


