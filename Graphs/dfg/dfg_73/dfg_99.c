#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948083525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p[1][1])
{
  unsigned long v_11;
  char v_8;
  double v_6;
  unsigned char v_4;
  signed char v;
  short result;
  v_11 = 4294916119UL;
  v_4 = (unsigned char)p[0][0];
  v = (signed char)p[0][0];
  v_6 = (double)((unsigned long)v | ((unsigned long)(p[0][0] / ((int)v + 363)) - - (
                                     v_11 * 63157UL)));
  v_8 = (char)(~ 46932LL);
  v = (signed char)((double)(! ((int)v_4 * -12)) + - (v_6 - (double)v_8) / (
                                                   3.65798505275e+37 * (
                                                   -2.1241757227e+38 - (double)v_4) + 613.));
  result = (short)(~ (! (~ ((int)v + (int)v_4))));
  return result;
}


