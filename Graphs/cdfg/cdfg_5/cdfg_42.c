#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 162900538
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, double p_5, unsigned short p_9)
{
  short v_13;
  unsigned short v_11;
  unsigned char v_7;
  long long v;
  double result;
  v_11 = (unsigned short)24043;
  v_7 = (unsigned char)231;
  v = -112091164LL;
  result = -3.57712079372e+37;
  if ((int)((double)p_9 * - p_5) == ~ (~ ((int)v_7 / 128))) {
    result = - result;
    result = (double)((int)((unsigned short)(- result)) - (int)v_11);
    v_7 = (unsigned char)160;
  }
  else {
    v_13 = (short)-21058;
    v = (long long)((int)(! (- v_13)) / 131);
    result = (double)v_7;
  }
  while ((double)(9915LL / (v + 51LL)) != p - (-1004618107. + p) * p_5) {
    result = (int)v_7 / -38027;
    v_7 = (unsigned char)p_9;
    result = (double)(! ((14943ULL * (unsigned long long)result) / ((unsigned long long)(
                                                                    518.055370503 + p) + 58ULL)));
    v = (long long)(~ (- p_9));
  }
  while_0_break: ;
  return result;
}


