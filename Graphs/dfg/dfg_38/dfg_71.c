#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 865795889
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p)
{
  unsigned short v_7;
  double v_4;
  unsigned char v;
  double result;
  v_7 = (unsigned short)25954;
  result = (double)v_7;
  v_4 = (double)(~ (-4076875290U));
  v = (unsigned char)p;
  result = - (- (- result)) + (double)((int)((unsigned short)((double)(! v) - (
                                                              -6985. + v_4))) << 12);
  return result;
}


