#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 644174952
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, int p_7, int p_11, unsigned char p_13[5])
{
  unsigned short v_15;
  float v_9;
  long long v_4;
  unsigned long v;
  unsigned int result;
  v_15 = (unsigned short)p_11;
  v_9 = 565.166870117f;
  result = (unsigned int)p_11;
  v_4 = (long long)(- result);
  v = (unsigned long)((int)((unsigned char)(((float)(v_4 & (long long)p_7) - v_9) - (float)p_11)) / (
                      (int)p_13[0] + 660));
  v_4 = (long long)(~ (- p));
  result = (unsigned int)(~ ((long long)v * (3486826353LL + v_4)));
  return result;
}


