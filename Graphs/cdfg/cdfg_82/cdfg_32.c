#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241393274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p[4][2], long p_5, unsigned char p_11, signed char p_13)
{
  double v_9;
  signed char v_7;
  unsigned long long v;
  double result;
  v_9 = (double)p_5;
  result = (double)p_5;
  if (- ((int)-1.73625825565e+38 * ((int)p_13 ^ -14893)) == ! ((int)result & (
                                                               (int)((short)8588301859.03) & 10491))) {
    v_7 = (signed char)((long)(15 ^ (int)((unsigned char)v_9)) * p_5);
    result = (double)v_7;
    v = (unsigned long long)((double)p_5 / (- result + 216.));
  }
  else v = (unsigned long long)p_11;
  result = (double)(- v * (unsigned long long)(p[3][0] - (long long)1.84467440734e+19));
  return result;
}


