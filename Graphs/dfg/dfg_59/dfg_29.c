#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 898045058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[2][2][2], long p_5, long p_7[1], long p_9, float p_11)
{
  char v_15;
  unsigned char v_13;
  int v;
  unsigned int result;
  v_15 = (char)-117;
  v_13 = (unsigned char)(~ (~ (p_9 & p_9 * (long)v_15)));
  result = (unsigned int)(~ (p_7[0] / ((long)((float)p_9 / ((p_11 - (float)v_13) + 910.f)) + 497L)));
  v = (int)result;
  result = (unsigned int)((long)p[1][1][1] + ~ ((long)(v * v) - ! p_5));
  return result;
}


