#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1002493552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, short p_4, float p_6[2][1][4], float p_8, signed char p_10)
{
  unsigned short v_13;
  long long v;
  double result;
  v_13 = (unsigned short)57260;
  v = (long long)(- (- (! (3596217657U + (unsigned int)v_13))));
  result = (double)(21202LL - ! (30251LL + v) % 104LL);
  result = (double)((int)p_10 + (int)((signed char)result));
  result = (double)((float)(~ ((int)(~ p) + ((int)p - 94))) - (float)(~ p) / (
                                                              ((float)(
                                                               (int)p_4 % (
                                                               (int)((short)result) + 710)) - 
                                                               p_6[1][0][3] * p_8) + 611.f));
  return result;
}


