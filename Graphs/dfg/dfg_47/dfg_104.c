#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 11300032
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, float p_11)
{
  long long v_8;
  signed char v_6;
  signed char v_4;
  unsigned short v;
  unsigned long result;
  v_8 = -459393962LL;
  v_4 = (signed char)81;
  v_8 = v_8;
  v_6 = (signed char)(- (- (- (1.7369472247e+38f + p_11))));
  v = (unsigned short)(((double)(((int)v_4 + -13074) * (int)v_6) + - (
                        -5090360999.98 / ((double)v_8 + 271.))) - (double)(
                       740967169ULL * (unsigned long long)((74. / (p + 461.)) * 101.180267334)));
  result = (unsigned long)(1014856770LL + (long long)v);
  return result;
}


