#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62020587
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p[5], float p_4, signed char p_6, long p_8,
           unsigned char p_10)
{
  short v_15;
  long long v_13;
  char v;
  double result;
  v_15 = (short)-8262;
  v = (char)p_10;
  result = -7453444057.32;
  v_13 = (long long)((int)(~ (~ p_10)) % (! ((int)p[1] % ((int)v_15 + 103)) + 344));
  if ((float)(((long)(- result) - p_8) - (long)((40253 + (int)p[4]) >> (
                                                ((long long)v + v_13) & 31LL))) >= 
      (float)(~ p_8) * -4122050816.f - p_4) result = (double)p[4];
  else result = (double)(1624.f / ((p_4 - (float)p[1]) / ((float)((int)((signed char)603882432.f) | (int)p_6) + 682.f) + 864.f));
  return result;
}


