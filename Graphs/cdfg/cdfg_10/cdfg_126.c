#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 833647067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[4], int p_5, char p_9)
{
  signed char v_11;
  int v_7;
  double v;
  double result;
  v_11 = (signed char)-71;
  v_7 = (int)v_11;
  if (v_7 > (int)p_9) {
    v = (double)p_5;
    result = (double)(~ (p[2] * (unsigned long long)((int)((char)v) / -75)));
  }
  else result = (double)(! p[2]);
  return result;
}


