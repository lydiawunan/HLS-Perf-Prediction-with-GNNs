#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 617764589
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p)
{
  double v_11;
  long long v_9;
  long v_7;
  char v_4;
  float v;
  float result;
  v_11 = -6117881050.13;
  v_9 = (long long)p;
  v_7 = (long)(4294932203U + (unsigned int)(((double)(~ v_9) + p) / (
                                            (double)((long long)(-79. / (
                                                                 v_11 + 774.)) * 8598LL) + 147.)));
  v_4 = (char)(! (- v_7));
  v = (float)(! (unsigned short)29506);
  result = (float)((double)(v - (float)(! v_4)) / (p + 769.) + 64.);
  return result;
}


