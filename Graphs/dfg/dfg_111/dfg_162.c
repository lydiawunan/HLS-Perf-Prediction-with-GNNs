#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 283180225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p[1][4], float p_9, unsigned int p_11, long p_13)
{
  signed char v_6;
  signed char v_4;
  unsigned int v;
  long result;
  result = 209167008L;
  v = (unsigned int)((- p_9 / ((float)((unsigned int)p[0][0] % (p_11 + 958U)) + 19.f)) * (float)(~ (~ p_13)) + 
                     0.f / ((177845040.f - p[0][1]) + 440.f));
  v_4 = (signed char)p[0][1];
  v_6 = (signed char)((- p[0][2] / ((float)(57356U - (unsigned int)p[0][1]) / (
                                    - p[0][3] + 151.f) + 670.f)) / ((float)(
                                                                    v - 42U) + 315.f));
  result = (long)(- ((unsigned long)(! result) * (unsigned long)v) ^ (unsigned long)(! (
                  (int)v_4 * (int)v_6)));
  return result;
}


