#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 652576490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p[3], int p_4[3][2][2], float p_9,
        unsigned char p_13[5][4][5])
{
  int v_11;
  short v_7;
  double v;
  int result;
  v_11 = (int)p_9;
  v = (double)p_13[0][1][4];
  result = v_11;
  v_7 = (short)(- (- p_9));
  result *= ((int)(~ p[1]) + (p_4[0][1][0] + 126)) - (int)(- (v + (double)v_7));
  return result;
}


