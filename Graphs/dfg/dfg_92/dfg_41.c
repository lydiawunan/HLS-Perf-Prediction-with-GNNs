#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847648827
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, long long p_5[1][4][1], signed char p_7,
          unsigned char p_11, unsigned char p_13)
{
  unsigned short v_9;
  double v;
  float result;
  v_9 = (unsigned short)4.5610965459e+36f;
  result = (float)((unsigned long)p_11 % ((10078UL * ((unsigned long)p_13 / 909858053UL) | (unsigned long)v_9) + 606UL));
  v = (double)v_9;
  result = (float)(124.779912253 + (double)(((float)((int)((unsigned char)v) * (int)p) * result) * (float)(
                                            p_5[0][0][0] * (long long)(
                                            84 / ((int)p_7 + 970)))));
  return result;
}


