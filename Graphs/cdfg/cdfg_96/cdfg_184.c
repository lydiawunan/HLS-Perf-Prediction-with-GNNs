#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822720867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, int p_7, char p_11, long long p_15)
{
  long v_13;
  signed char v_9;
  int v_4;
  long v;
  double result;
  v_13 = 643290296L;
  v_9 = (signed char)4;
  v_4 = (int)p;
  v = (long)p_11;
  result = (double)p_15;
  result = 7.5753665384e+12 * (0. + - result);
  if ((unsigned long long)v_4 <= ((((unsigned long long)v_13 & 18446744073709512889ULL) + (unsigned long long)v) & (unsigned long long)p_15)) {
    v = (long)((int)((signed char)result) - (int)v_9);
    v_4 = p_7;
    result = (double)(~ v << (v_4 & 31)) * - (- p);
  }
  else result = (double)p_11;
  return result;
}


