#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511450930
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned short p_4, unsigned long p_6)
{
  double v_9;
  unsigned char v;
  double result;
  v_9 = -799.24661443;
  v = (unsigned char)v_9;
  result = (double)(! (- (p_6 / 37487UL)) | (unsigned long)(19877L + (long)(
                                                            (int)v * 37076)));
  result = - result;
  result = (double)((- ((unsigned long)result * 4143736054UL) + (unsigned long)(
                     18722 % ((int)((short)(- p)) + 923))) * (unsigned long)(~ (! (~ p_4))));
  return result;
}


