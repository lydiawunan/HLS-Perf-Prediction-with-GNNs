#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705242737
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned long p_7)
{
  char v_5;
  int v;
  unsigned char result;
  v = (int)p;
  result = (unsigned char)(-942075050L);
  v_5 = (char)result;
  result = (unsigned char)((unsigned long)((int)((unsigned char)(-5.10806318064e+35 - (double)(
                                                                 -8.35920395643e+37f + (float)v))) % (
                                           (int)result + 807)) | (unsigned long)(
                                                                 - p + (double)(~ v_5)) * p_7);
  return result;
}


