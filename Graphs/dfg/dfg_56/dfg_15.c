#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 649977227
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p[4], float p_9[1][3])
{
  int v_7;
  float v_5;
  short v;
  char result;
  v_7 = 753606886;
  v = (short)p_9[0][1];
  v_5 = (float)v;
  v_5 = (43817.f - p_9[0][1]) - v_5;
  v = (short)v_7;
  result = (char)((int)(((float)((long)v - p[2]) - - v_5) + (float)(-707L - - p[3])) + 211742284);
  return result;
}


