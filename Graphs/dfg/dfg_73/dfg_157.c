#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 212127576
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, signed char p_4[5][2], unsigned long p_7[4][3][5],
          int p_15)
{
  long v_13;
  short v_11;
  int v_9;
  unsigned long v;
  float result;
  v_13 = (long)p;
  result = 7756798464.f;
  v_9 = (int)result;
  v_11 = (short)(- (result / ((float)v_13 + 867.f)) / ((float)p_15 + 986.f));
  v = (unsigned long)(~ (~ (769478095L % (long)((v_9 >> ((int)v_11 & 31)) + 683))));
  result = (- (p + (float)p_4[4][0]) / ((float)(- (v + (unsigned long)p_4[1][0])) + 798.f)) / (
           (float)(p_7[2][0][1] + 37802UL) + 918.f);
  return result;
}


