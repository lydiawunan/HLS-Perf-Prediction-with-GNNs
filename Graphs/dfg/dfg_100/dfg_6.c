#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608129511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p[5], signed char p_5)
{
  char v_11;
  float v_9;
  long long v_7;
  int v;
  double result;
  v_11 = (char)p_5;
  v_9 = 1.44229999544e+38f;
  v_7 = 44856LL;
  result = -758.560476853;
  result = (double)(39LL % ((long long)result * (v_7 * (long long)v_9 + (long long)(- v_11)) + 379LL));
  v = (int)result;
  result = (double)(~ ((unsigned int)(! v) & p[4]) - (unsigned int)p_5);
  result = result;
  return result;
}


