#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036831554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned int p_9, double p_11, int p_13)
{
  unsigned char v_17;
  long long v_15;
  unsigned int v_6;
  double v_4;
  float v;
  signed char result;
  v_17 = (unsigned char)p;
  v_15 = 213979677LL;
  v_6 = (unsigned int)(((long long)(~ p_13 / 223) / (! (- v_15) + 452LL)) * (long long)v_17);
  v = (float)p_11;
  v_4 = (double)(char)56;
  result = (signed char)(((double)v * (v_4 + 831751578.) - (double)(- (- v_6))) / (
                         (double)((unsigned long)(~ (p - 91L)) * (unsigned long)(
                                  p_9 / 74U)) + 414.));
  return result;
}


