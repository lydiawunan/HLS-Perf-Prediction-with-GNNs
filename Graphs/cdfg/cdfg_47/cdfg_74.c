#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 932806941
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned short p_7[4])
{
  signed char v_5;
  unsigned char v;
  unsigned long long result;
  v_5 = (signed char)-8;
  result = (unsigned long long)p_7[3];
  v = (unsigned char)result;
  while (- (p + (double)v) * p > 49573.) {
    result = (unsigned long long)v_5 + 18446744073709543967ULL;
    v_5 = ! (! (~ (signed char)-39));
    result = (40664ULL - result) / (unsigned long long)((int)(! v_5) + 149) - (unsigned long long)(! (
             (int)p_7[1] / ((int)v_5 + 802)));
    v = (unsigned char)2;
  }
  while_0_break: ;
  return result;
}


