#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844549115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned short p_4, long p_9, long long p_13,
           long p_15)
{
  unsigned long long v_17;
  unsigned char v_11;
  float v_7;
  short v;
  double result;
  v_17 = (unsigned long long)p;
  v_11 = (unsigned char)169;
  v_7 = 694.65447998f;
  result = (double)p_9;
  v = (short)((unsigned long long)v_11 / (v_17 + 600ULL));
  while ((int)p > ((int)p_4 | (int)(- (- v)))) {
    v_11 = (long)v_7 % -33471686L;
    result = (double)p_15;
    v_7 = (float)((long long)(-14300L * p_9 + (long)v_11) + p_13);
    v = (short)((int)((6209144595.85 * result) * 0.) % -152091198);
  }
  while_0_break: ;
  return result;
}


