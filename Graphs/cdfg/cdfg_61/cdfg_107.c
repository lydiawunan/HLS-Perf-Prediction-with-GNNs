#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 500059511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p[5][5], double p_7, double p_9, short p_11,
           signed char p_13)
{
  unsigned long long v_15;
  float v_5;
  unsigned long v;
  double result;
  v_15 = 48822ULL;
  v = 19981UL;
  if ((unsigned long long)((int)((signed char)((double)(~ p[4][1]) / (
                                               p_7 + 269.))) - (int)(~ (! p_13))) >= v_15) 
    v = (unsigned long)p[3][3];
  else {
    v_5 = (float)(~ v);
    v_5 = v_5;
    v = (unsigned long)(((int)v_5 % 33330) * (int)(p_7 / (double)(v_5 + 664.f)) + 69);
  }
  result = (double)(~ ((v ^ (unsigned long)p[0][2]) + (unsigned long)(- p[2][4])));
  return result;
}


