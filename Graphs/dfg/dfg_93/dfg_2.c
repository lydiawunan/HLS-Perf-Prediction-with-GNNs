#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 717465219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned short p_9, short p_13, double p_15)
{
  unsigned long long v_11;
  int v_6;
  unsigned long v_4;
  float v;
  double result;
  v_11 = (unsigned long long)p_13;
  v_6 = (int)(((unsigned long long)(! (~ p_9)) * (! v_11 - (unsigned long long)(~ p_13))) / (unsigned long long)(
              ! ((unsigned long)(- p_15) / 4294931222UL) + 978UL));
  v_4 = (unsigned long)(- ((p + 535512928.f) * p) + -4.32082357922e+37f);
  v = (float)(0UL - (unsigned long)v_6);
  result = (double)v;
  return result;
}


