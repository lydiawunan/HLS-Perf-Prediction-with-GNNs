#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 760951748
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned long p_9, long long p_11, short p_15, int p_19)
{
  unsigned short v_17;
  char v_13;
  double v_7;
  short v_5;
  float v;
  double result;
  v_17 = (unsigned short)p_9;
  v_13 = (char)-35;
  v = (float)p_9;
  v_7 = (double)((long long)((unsigned int)(((int)p_15 - (int)p) & (int)v_17) - (
                             (unsigned int)-2.58085366701e+38f - 3805418517U % (
                                                                 (unsigned int)v + 496U))) - (
                 - ((long long)p_19 - p_11) - (long long)((int)v * ! p_19)));
  v_5 = (short)(1ULL % (unsigned long long)(! ((p_11 & (long long)v_13) % (long long)(
                                               (1701L + (long)v_7) + 959L)) + 813LL));
  v = (float)((53063. + (double)v_5 / (v_7 + 359.)) / ((double)(~ (p_9 % 587904600UL)) + 402.) + (double)(! p_11));
  result = (double)((int)v + ! (- ((int)((char)-1.0821200887e+37) * (int)p)));
  return result;
}


