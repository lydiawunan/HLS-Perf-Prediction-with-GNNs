#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675045752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p[4], short p_5, long long p_9)
{
  int v_11;
  unsigned int v_7;
  double v;
  unsigned char result;
  v_11 = (int)p[3];
  v_7 = 40074U;
  v = (double)(- -2.07349507267e+37f);
  result = (unsigned char)((long long)((182. - v) / ((double)((int)p[2] % (
                                                              (int)p_5 + 187)) + 580.)) / (
                           ((long long)v_7 + p_9 % (long long)(v_11 + 475)) + 950LL));
  return result;
}


