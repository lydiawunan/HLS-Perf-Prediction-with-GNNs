#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 744141302
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned int p_7[3][3], float p_9,
           unsigned long long p_11, long p_15)
{
  int v_19;
  unsigned long v_17;
  double v_13;
  int v_4;
  unsigned int v;
  double result;
  v_19 = 373592443;
  v_4 = (int)p_15;
  result = -2.71738860801e+38;
  v_13 = (double)((long)(~ v_19) + - (p_15 & (long)p));
  v = (unsigned int)(! ((-1005432822L + ((long)result + 47207L)) * ((long)result - p_15)));
  v_17 = (unsigned long)(~ (p_7[2][2] % 8488U)) % ((unsigned long)(~ (
                                                   p_7[2][0] - (unsigned int)p_9)) + 596UL);
  result = (double)((long long)((! v % ((v + (unsigned int)v_4) + 140U)) / (
                                ~ ((unsigned int)p & p_7[1][0]) + 903U)) % (
                    (-863577629LL * (long long)(p_9 / ((float)p_11 + 733.f))) * (long long)(
                    (unsigned long)(- v_13) ^ ((unsigned long)p_15 + v_17)) + 665LL));
  return result;
}


