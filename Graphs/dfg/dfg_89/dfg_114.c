#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 447258820
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, int p_7, signed char p_9, unsigned long long p_15,
           short p_17)
{
  double v_19;
  char v_13;
  unsigned long long v_11;
  unsigned char v_5;
  long long v;
  double result;
  v_19 = 2022979165.75;
  v_13 = (char)p;
  v_5 = (unsigned char)177;
  v = -343626274LL;
  v = ~ ((77LL - v) % (long long)(p_7 + 774)) - (long long)(! (p_7 | 226) - ! (
                                                            (int)p_17 % (
                                                            (int)((short)v_19) + 377)));
  v_11 = p_15;
  result = (double)(! ((v_11 % (unsigned long long)((int)v_13 + 1005)) / 42446ULL) % 18446744073709551584ULL);
  result = (double)(~ (v / ((long long)(46653. * p) + 410LL)) - (long long)(
                    (int)(29.6739444733f + (float)((int)v_5 + p_7)) / (
                    (int)((char)(result + (double)p_9)) + 957)));
  return result;
}


