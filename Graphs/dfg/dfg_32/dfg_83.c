#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495391876
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned int p_9, long p_11, float p_13,
          unsigned long long p_15[3][1])
{
  int v_7;
  char v_5;
  long v;
  float result;
  v_7 = (int)p_15[0][0];
  v = -11443L / (! p_11 + 573L);
  v_5 = (char)p_13;
  result = (float)(((unsigned long)v ^ p * (unsigned long)v_5) % (unsigned long)(
                   v_7 + 824) - ((unsigned long)(! (p_9 * p_9)) - (unsigned long)(
                                 p_11 % (long)((int)v_5 + 59))));
  return result;
}


