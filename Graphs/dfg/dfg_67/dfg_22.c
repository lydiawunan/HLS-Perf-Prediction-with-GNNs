#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1004721357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[4], unsigned char p_5, double p_9, long long p_11[5][5][5],
        float p_13)
{
  unsigned long long v_15;
  signed char v_7;
  double v;
  int result;
  v_15 = (unsigned long long)p_11[0][3][3];
  v_7 = (signed char)-71;
  v = (double)p[1];
  v_15 = ! (- (v_15 % (unsigned long long)((int)p_5 + 380))) * (unsigned long long)p_9;
  result = (int)(v - (2107739597.36 - (double)(p_13 + p_13) * (p_9 / (
                                                               (double)v_15 + 826.))));
  v = - (v - (double)((int)p_9 + result) / (((double)p_11[4][1][0] - p_9) + 633.));
  result = ((int)((double)p[3] / ((v - (double)p[0]) + 529.)) * ! (-29790 % (
                                                                   (int)p_5 + 500))) % (
           (int)(~ v_7) + 722);
  return result;
}


