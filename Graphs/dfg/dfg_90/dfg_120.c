#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305071404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[2][4][1], float p_4, double p_7, char p_11[5][5],
        int p_13)
{
  long long v_17;
  short v_15;
  long v_9;
  long v;
  int result;
  v_17 = -50608LL;
  v_9 = 804592266L;
  v = (long)p_4;
  result = (int)p[1][0][0];
  v_15 = (short)((int)p_11[2][0] >> ((v_17 << (! v_9 & 63L)) % ((long long)p_7 + 814LL) & 7LL));
  v_9 = (long)(p_13 / (p_13 + 451) >> (100L % ((long)v_15 * v + 42L) & 31L)) / (
        (78L | ~ v_9 / (long)((result ^ (int)p_7) + 616)) + 59L);
  v = ~ (- ((long)p_7 * v_9 - (long)(30078 + (int)p_11[0][3])));
  result = (int)((double)((int)((float)(p[1][1][0] + p[1][2][0]) / ((
                                                                    p_4 + (float)v) + 156.f)) + 
                          - result * 25) * p_7);
  return result;
}


