#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 445284934
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[2][3][2], signed char p_5, short p_7,
                  double p_9)
{
  signed char v_15;
  long long v_13;
  unsigned int v_11;
  double v;
  unsigned long result;
  v_15 = (signed char)24;
  v_11 = (unsigned int)p_7;
  v = (double)p_5;
  while ((unsigned int)-873.009097845 >= 47494U + v_11) {
    v_13 = (unsigned long long)v_15 % 18446744072660620590ULL;
    v_15 = (signed char)v_13;
    v = (double)4294963125U;
    v_11 = 4132277184U;
  }
  while_0_break: ;
  result = (unsigned long)(((double)p[1][0][1] / (v / ((double)p_5 + 535.) + 608.)) / (
                           (double)p_7 + 579.));
  return result;
}


