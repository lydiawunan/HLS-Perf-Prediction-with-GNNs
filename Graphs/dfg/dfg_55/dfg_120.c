#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232070819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, int p_5, char p_7, long p_11, short p_13[5][5])
{
  int v_9;
  short v;
  int result;
  v = (short)p_11;
  result = -60422;
  v_9 = (int)(! ((long)(- (~ v)) * ((long)((int)p_13[0][0] * (int)p_13[1][0]) - ~ p_11)));
  v = (short)(124 + (int)(~ v));
  v = (short)(((long)((int)p_7 / ((int)((char)(6.60430917629e+37 / ((double)result + 495.))) + 555)) - (
               ((long)v_9 - p_11) - (long)(20406 + (int)v))) << ((int)p_13[4][0] & 31));
  result = (int)v << (! ((int)p ^ p_5) % 127 & 15);
  return result;
}


