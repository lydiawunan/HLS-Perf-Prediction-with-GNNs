#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375764127
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p)
{
  signed char v_7;
  unsigned short v_5;
  long v;
  double result;
  v_7 = (signed char)p;
  v = -16238L;
  result = (double)p;
  v_5 = (unsigned short)((double)v * ((double)(100UL + (unsigned long)result) * (
                                      (double)v_7 * -3889554554. + 0.)));
  v_7 = (signed char)(v * (long)(- (~ (16660 / ((int)v_7 + 727)))));
  result = (double)(~ ((v * (long)p + (long)(- v_5)) * (long)(~ ((int)v_7 % (
                                                                 (int)p + 346)))));
  return result;
}


