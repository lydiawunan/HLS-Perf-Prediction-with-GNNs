#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 200891736
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p[1][5][3], long long p_5, long p_11, double p_13,
        short p_15)
{
  double v_9;
  float v_7;
  unsigned short v;
  int result;
  v_9 = p_13;
  v_7 = -3.21821723348e+38f;
  if ((int)p_13 <= - ((int)p_15 * ((int)((char)v_7) ^ 36))) {
    v_7 = (float)(- (- v_9) - 33.);
    result = (int)(- (p_5 + (long long)(- v_7)));
    v = (unsigned short)(- (- (-19.7607650757f - (float)p_5)));
  }
  else {
    result = (int)(- (- -1.10775858484e+38f));
    v = (unsigned short)((35218UL + (unsigned long)p_11) / ((unsigned long)p_13 + 1UL));
  }
  result = - ((result & (int)p[0][1][2]) / ((result - (int)v) + 467));
  return result;
}


