#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 677658546
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, short p_5, short p_7[2], unsigned long long p_9,
         signed char p_11[4][4])
{
  int v_15;
  signed char v_13;
  short v;
  long result;
  v_15 = (int)p_11[2][1];
  v_13 = (signed char)v_15;
  result = (long)((unsigned long long)p_7[0] * ((20ULL + p_9) - (unsigned long long)(
                                                (int)p_11[3][2] - (int)((signed char)p))) ^ (
                  (unsigned long long)(-2.80507316272e+38 / ((double)v_13 + 439.)) / (
                  - p_9 + 243ULL) - 94ULL));
  v = (short)(17996 + (int)p_5);
  result = (long)((unsigned long long)(((int)((short)p) - -7668) & ((int)v + (int)v) / (
                                                                   (int)(! p_5) + 520)) * (
                  (unsigned long long)(8856 % ((int)((double)result / -2.92212563633e+38) + 239)) / 18446744073704199327ULL));
  return result;
}


