#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999550679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, int p_7, unsigned long long p_11[4][1])
{
  int v_15;
  unsigned char v_13;
  double v_9;
  long long v_5;
  unsigned short v;
  unsigned int result;
  v_15 = -83701660;
  v_13 = (unsigned char)183;
  v = (unsigned short)36500;
  result = (unsigned int)p;
  v_5 = (long long)(37112UL % (unsigned long)((unsigned int)(! ((int)v * v_15)) / (
                                              - result + 379U) + 716U));
  v_9 = (double)((unsigned long long)(- p_7) + ! (p_11[2][0] % (unsigned long long)(
                                                  (int)v_13 + 129))) / 284.463947263;
  v = (unsigned short)v_9;
  result = (unsigned int)((int)(0. - (p / 50139.) / ((double)(v_5 * -100LL) + 555.)) >> (
                          p_7 & 31));
  return result;
}


