#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264214143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p[3][5][3], double p_11)
{
  short v_9;
  char v_7;
  double v_5;
  long long v;
  float result;
  v_9 = (short)14394;
  v = (long long)p_11;
  result = (float)p_11;
  v_5 = (double)((long long)(- (-586243739. - (34. - p_11))) - ((30698LL - v) / -4915253202LL - (long long)(- (- v_9))));
  v = (long long)result;
  v_7 = (char)(~ (- (v * (long long)p[2][2][0]) / (long long)((-11001 - (int)v_9) + 769)));
  result = (float)((double)p[1][2][2] * ((double)(v % (long long)(p[0][4][0] + 597)) * v_5 + (double)v_7));
  return result;
}


