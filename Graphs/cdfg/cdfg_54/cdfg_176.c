#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 67148947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, int p_4, unsigned short p_6,
           unsigned char p_8, short p_10)
{
  unsigned char v_15;
  short v_13;
  unsigned short v;
  double result;
  v_15 = p_8;
  v_13 = p_10;
  v = (unsigned short)3086;
  v_13 = (short)(((float)v_13 * -2.40359635957e+38f + -25389.f) * - (
                 (float)v_15 - -336.925415039f));
  if (0 > (int)v_13) result = (double)(~ (~ p ^ (unsigned long long)p_4));
  else result = (double)p_6;
  return result;
}


