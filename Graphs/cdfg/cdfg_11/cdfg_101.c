#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641135165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned char p_9, long p_13, double p_15,
                  double p_17)
{
  long long v_19;
  double v_11;
  unsigned long v_7;
  float v_5;
  long long v;
  unsigned char result;
  v_19 = (long long)p_13;
  v_11 = 2898014096.48;
  v_7 = 4292106755UL;
  if (- (v_19 % -13265LL + (long long)(p_15 + p_17)) > (long long)p_17) {
    result = (unsigned char)p_15;
    v_5 = (float)((unsigned long long)(32927 / ((int)p_9 / ((int)((unsigned char)v_11) + 8) + 640)) % (
                  (18446744073147331972ULL + (unsigned long long)((long)result % (
                                                                  p_13 + 431L))) + 203ULL));
    v = (long long)(0 % ((-21710 << ((unsigned long)v_5 % (v_7 + 383UL) & 15UL)) + 834));
  }
  else v = (long long)p_17;
  result = (unsigned char)((long long)p + v);
  return result;
}


