#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181141885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p[3][4], char p_7, char p_9, int p_11)
{
  long long v_15;
  double v_13;
  unsigned long long v_5;
  unsigned long long v;
  unsigned char result;
  v_13 = 598.677050585;
  v = (unsigned long long)p_7;
  result = (unsigned char)75;
  v_15 = (long long)p_11;
  v_5 = (unsigned long long)(- v_15) + v;
  v = (unsigned long long)(~ ((int)(p[1][1] + (float)v_5) * ((int)p_7 - (int)p_9) - (
                              p_11 / ((int)v_13 + 459) - (int)result)));
  result = (unsigned char)v;
  return result;
}


