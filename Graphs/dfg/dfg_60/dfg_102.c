#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672572705
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p[5][5][5], char p_7)
{
  long long v_15;
  unsigned int v_13;
  long v_11;
  unsigned int v_9;
  double v_5;
  unsigned int v;
  float result;
  v_15 = -694154414LL;
  v_13 = 23208U;
  v_11 = 961535266L;
  v_9 = (unsigned int)p_7;
  v = (unsigned int)p_7;
  v_5 = (double)(- ((long long)(- (~ v)) % (((long long)((unsigned long)v_9 | (unsigned long)v_11) ^ 
                                             (long long)v_13 / (v_15 + 419LL)) + 50LL)));
  v = (unsigned int)(- (p[1][4][1] / ((double)((int)3.52979903597e+36 % (
                                               (int)((char)v_5) / ((int)p_7 + 206) + 843)) + 839.)));
  result = (float)(! (- (- (- v))));
  return result;
}


