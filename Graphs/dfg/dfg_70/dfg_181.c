#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 959912711
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, int p_5, short p_9[2], long long p_11,
                       unsigned long long p_15)
{
  long v_13;
  short v_7;
  signed char v;
  unsigned long long result;
  v_13 = (long)p_11;
  v_7 = p_9[1];
  result = p_15;
  v = (signed char)(-502859662LL % (long long)(v_13 + 441L));
  v_7 = (short)(((unsigned long long)((long long)(- p_9[0]) + (long long)v_7 % (
                                                              p_11 + 449LL)) - result) * - (~ (
                result - 141ULL)));
  result = (unsigned long long)p % (((unsigned long long)((float)v - p) - (
                                     18446744073709520659ULL - result)) + 420ULL) & (unsigned long long)(
           ~ (- p_5) / ((int)v_7 + 709));
  return result;
}


