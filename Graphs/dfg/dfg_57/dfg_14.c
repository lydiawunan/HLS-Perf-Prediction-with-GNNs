#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981900247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned long long p_11)
{
  unsigned short v_13;
  signed char v_9;
  long long v_7;
  unsigned int v_4;
  unsigned short v;
  double result;
  v_7 = -86835765LL;
  v = (unsigned short)33017;
  v_9 = (signed char)(- p_11);
  v_4 = 52789U;
  v_13 = (unsigned short)(~ (((unsigned long long)v_9 | 53200ULL / (p_11 + 430ULL)) * (unsigned long long)v_7));
  result = (double)((float)((long long)(~ ((unsigned int)v - v_4)) + p) - (
                    (float)(~ (v_7 & (long long)v_9)) + (float)((unsigned long long)-1.55034783116e+37 * p_11) * (
                                                        (float)v_13 / -9750977536.f)));
  return result;
}


