#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 756238677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[5], int p_5, short p_7)
{
  int v_9;
  unsigned long v;
  double result;
  v_9 = (int)p[4];
  result = (double)p_5;
  v = (unsigned long)p_7;
  result = (double)((unsigned long)((double)(p_5 + (int)p_7) * (result * -42930.)) * (
                    - v << 29L) - (unsigned long)v_9);
  v = (unsigned long)(- -20168L);
  result = (double)(~ (v - v) + 3084409937UL) / (- ((double)(p[0] - p[2]) / (
                                                    result + 169.)) + 288.);
  return result;
}


