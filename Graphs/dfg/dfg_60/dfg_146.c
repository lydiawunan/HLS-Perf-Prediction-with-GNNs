#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 295877952
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[5][5][5], unsigned int p_4, float p_6,
                   double p_11, signed char p_13)
{
  long long v_19;
  short v_17;
  unsigned long long v_15;
  float v_9;
  unsigned short v;
  unsigned short result;
  v_19 = (long long)p_11;
  v_17 = (short)-16801;
  v_9 = 2.77904302963e+38f;
  v_15 = (unsigned long long)(p[3][0][2] - ((long long)(! (~ v_17)) | ! (
                                            (long long)v_17 + v_19)));
  v = (unsigned short)(-93 + (int)((signed char)(v_9 * (float)((unsigned long long)(
                                                               p_11 * 5794041856.) % (
                                                               ((unsigned long long)p_13 | v_15) + 599ULL)))));
  result = (unsigned short)(((float)(p[4][2][1] - p[1][2][4]) * -907.532348633f + (float)(
                             p[4][4][0] >> ((long long)((float)p_4 + p_6) & 63LL))) * (float)(~ (- (- v))));
  result = result;
  return result;
}


