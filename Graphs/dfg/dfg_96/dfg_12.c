#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993796556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned long long p_7, double p_11, unsigned long p_13,
           char p_17)
{
  int v_19;
  short v_15;
  unsigned char v_9;
  unsigned short v_5;
  unsigned int v;
  double result;
  v_19 = (int)p_11;
  v_15 = (short)p_13;
  v_9 = (unsigned char)196;
  v_5 = (unsigned short)44806;
  v = (unsigned int)-995.011108398f;
  v_5 = (unsigned short)(! (! ((unsigned long)p_17 + p_13)) * ((unsigned long)(
                                                               v_19 | 45082) * ~ (
                                                               (unsigned long)v_5 * p_13)));
  result = (double)((~ (~ p) + (int)(- p_11)) + (int)(- ((p_11 / ((double)p_13 + 521.)) / (
                                                         (double)v_15 + 982.))));
  result *= (double)((unsigned long long)((v * (unsigned int)p) / (unsigned int)(
                                          (int)v_5 + 656)) / (~ p_7 / (unsigned long long)(
                                                              ((int)v_9 >> 7) + 336) + 212ULL));
  return result;
}


