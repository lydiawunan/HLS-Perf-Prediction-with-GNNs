#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835272335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, long long p_5, unsigned int p_9[3][5][5],
                       signed char p_13, long p_15[1][3])
{
  unsigned short v_19;
  float v_17;
  float v_11;
  short v_7;
  unsigned char v;
  unsigned long long result;
  v_19 = (unsigned short)40290;
  v_7 = (short)p_13;
  v_11 = (float)(- (~ (- p_15[0][0])));
  v_17 = (float)(- (! ((unsigned long)(p_9[2][3][2] | 4294955077U) * (unsigned long)(
                       (long)v_19 + -26844L))));
  v = (unsigned char)((int)v_7 + (int)((short)((float)((long long)p_9[0][3][4] / -26076LL) * - v_11 + 
                                               (float)((long)p_13 & p_15[0][2]) * v_17)));
  result = (unsigned long long)(((float)v * - (p / ((float)v + 611.f))) * (float)p_5);
  return result;
}


