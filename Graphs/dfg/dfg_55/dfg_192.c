#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 680788775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned int p_9, unsigned int p_13,
           short p_17[4])
{
  signed char v_15;
  unsigned char v_11;
  unsigned long v_7;
  char v_4;
  char v;
  double result;
  v_15 = (signed char)p_13;
  v_11 = (unsigned char)p_13;
  v = (char)(((-4548LL * (long long)(31207UL + p)) * (long long)(0 - (
                                                                 (int)v_15 - -28))) % (long long)(
             (int)(~ p_17[3]) + 13));
  v_7 = (unsigned long)(~ (- (- ((unsigned int)v_11 * p_13))));
  v_4 = (char)((32654UL | - p / ((v_7 - (unsigned long)p_9) + 463UL)) % (unsigned long)(
               ! ((int)2.48987951693e+38 / -10845) + 444));
  result = (double)((float)v / ((1.35525053013e+38f + (float)(- ((int)v_4 % (
                                                                 (int)((char)2771833344.f) + 888)))) + 776.f));
  return result;
}


