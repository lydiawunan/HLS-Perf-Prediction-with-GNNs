#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 76094102
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, char p_5, signed char p_7, unsigned long long p_9,
        unsigned char p_11)
{
  double v_13;
  unsigned char v;
  int result;
  v_13 = (double)p_11;
  v = (unsigned char)p_7;
  result = (int)(992490371ULL - ((unsigned long long)(~ ((int)v / ((int)p_11 + 469))) + - (
                                 18446744073709504257ULL & (unsigned long long)v_13)));
  v = (unsigned char)(! (18446744073447308290ULL - (p_9 & (unsigned long long)result)));
  v = (unsigned char)(((unsigned int)(- ((int)p_5 & (int)p)) / (0U / (unsigned int)(
                                                                (int)p + 960) + 91U)) * (unsigned int)(
                      (int)p_7 / ((-18709 & (int)p_7 * (int)v) + 626)));
  result = (int)((double)p + (8380144359.09 + (double)(~ v)) / -8.32013107154e+37);
  return result;
}


