#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735137959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[4][5][4], char p_7)
{
  double v_9;
  signed char v_5;
  long long v;
  char result;
  v_9 = -9980233553.47;
  v_5 = p[1][0][1];
  v = (long long)p[3][3][1];
  v_9 = 215. - (77271. - - v_9);
  result = (char)((v - -32LL) / (long long)((int)p[2][0][2] * (int)v_5 + 373) - (long long)(
                  (int)(! p_7) / ((int)((char)v_9) + 778)));
  return result;
}


