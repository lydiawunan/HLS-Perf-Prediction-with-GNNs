#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 149016885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[4][4][3], long long p_5, unsigned char p_7, double p_11[3])
{
  unsigned short v_15;
  unsigned int v_13;
  unsigned char v_9;
  float v;
  double result;
  v_15 = (unsigned short)p_7;
  v_13 = 4294921050U;
  v = (float)p_7;
  v_9 = (unsigned char)(~ (! v_13) + (unsigned int)(! (- ((int)v_15 * (int)((unsigned short)-194.918276763)))));
  v = (float)(~ (- ((int)p_7 % ((int)v_9 + 763))) * (((int)((unsigned char)(
                                                      (double)p_5 * p_11[0])) * (int)(- v_9)) * (int)(- v)));
  result = (double)((2.40284591042e+38f * (v * p[1][0][1]) - (float)(- (~ p_5))) - 25025.f);
  return result;
}


