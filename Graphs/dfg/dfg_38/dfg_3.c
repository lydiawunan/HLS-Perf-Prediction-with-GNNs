#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288738862
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[5][4][4], float p_5, char p_11,
                unsigned long long p_13, float p_15)
{
  long v_9;
  int v_7;
  float v;
  signed char result;
  v_9 = -205109601L;
  v = (float)p_13;
  v_9 = (long)((float)(- ((long)(- p_15) + - v_9)) * v);
  v_7 = (int)(~ (- ((unsigned long long)((long)-1.55602893123e+38 % (
                                         v_9 + 4L)) / ((unsigned long long)p_11 / (
                                                       p_13 + 1006ULL) + 959ULL))));
  v = (float)(~ v_7);
  result = (signed char)(- (- (v - (float)(p[2][1][2] % ((long long)p_5 + 559LL)))));
  return result;
}


