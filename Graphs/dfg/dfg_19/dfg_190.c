#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 535614852
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long long p_5, signed char p_7,
           signed char p_9)
{
  int v_15;
  int v_13;
  short v_11;
  unsigned char v;
  double result;
  v_15 = (int)p_7;
  v = (unsigned char)39;
  result = 24.1600094049;
  v_11 = (short)(- (- ((float)v_15 * 58805440512.f)));
  v_13 = (int)p_9;
  v_11 = (short)(! (p / (((p_5 - (unsigned long long)v_13) - (unsigned long long)(
                          (int)p_7 / ((int)v_11 + 673))) + 643ULL)));
  result = (double)((((p >> ((int)v & 63)) + ((unsigned long long)result ^ p_5)) / (unsigned long long)(
                     ((int)p_7 & -28) + 727)) * (unsigned long long)(
                    - ((double)p_9 + result) - (double)v_11));
  return result;
}


