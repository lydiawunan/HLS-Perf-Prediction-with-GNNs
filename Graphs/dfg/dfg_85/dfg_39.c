#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 996842955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long p_13)
{
  double v_11;
  unsigned char v_9;
  unsigned long long v_6;
  long long v_4;
  float v;
  double result;
  v_11 = (double)p_13;
  v_9 = (unsigned char)p;
  v_6 = (unsigned long long)p_13;
  result = 2.14000178006e+38;
  v_4 = (long long)(! p);
  v_11 = - (- (- (v_11 * result)));
  v = (float)((unsigned long long)v_4 / (18446744073709536461ULL % (v_6 / 31ULL + 545ULL) + 511ULL) ^ 
              ((p & 964073700ULL) << ((int)v_9 % ((int)((unsigned char)v_11) + 247) & 63)) / (
              (unsigned long long)p_13 % (((unsigned long long)v_9 + v_6) + 605ULL) + 670ULL));
  result = (double)(- v);
  return result;
}


