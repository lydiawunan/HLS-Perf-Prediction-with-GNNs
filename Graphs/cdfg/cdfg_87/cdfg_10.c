#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 953279150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned char p_4, unsigned long long p_6,
           unsigned long p_8, char p_10)
{
  double v_17;
  signed char v_15;
  char v_13;
  long v;
  double result;
  v_17 = 2.20071566974e+38;
  v_15 = (signed char)p_8;
  v_13 = (char)-20;
  result = -750.281258115;
  v = (long)(((int)result % ((int)v_15 / ((int)((signed char)v_17) + 524) + 439)) / (
             (int)(- result) + 763));
  if (~ (~ ((unsigned long long)-2.99890333561e+38f - p_6)) < (unsigned long long)(! (~ (
      v * (long)v_13)))) result = (double)p;
  else result = (double)p_4;
  return result;
}


