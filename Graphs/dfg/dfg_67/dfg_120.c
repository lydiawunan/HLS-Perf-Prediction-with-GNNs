#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930418913
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, short p_4[5], double p_6[1][5], double p_8)
{
  double v_11;
  signed char v;
  long long result;
  v_11 = -2.07911982066e+38;
  result = (long long)p_6[0][2];
  v = (signed char)p_4[0];
  v = (signed char)(((long long)(~ ((int)v | (int)((signed char)v_11))) / (
                     ! (result + (long long)v_11) + 709LL)) % 48LL);
  result = (long long)(((double)(((unsigned long long)p_6[0][3] + 18446744073571154320ULL) * (unsigned long long)result) - 
                        - p_8 * (p_8 * (double)v)) / 1.24158064248e+38);
  result = ~ (result - (long long)p / (((long long)p_4[3] + result) + 493LL));
  return result;
}


