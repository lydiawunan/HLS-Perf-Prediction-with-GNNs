#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293144101
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p[1][5][1], long long p_5,
                       short p_7, double p_9)
{
  unsigned char v_13;
  int v_11;
  unsigned long long v;
  unsigned long long result;
  v_13 = (unsigned char)p_5;
  v_11 = (int)(- (- (! (p_5 + -13LL))));
  result = 41619ULL;
  v = (unsigned long long)((unsigned int)((int)((unsigned char)((double)(
                                                                (unsigned long long)v_11 - result) - p_9)) % (
                                          (int)v_13 + 426)) / 39766U);
  result = ~ (- (~ p[0][2][0]) * ((v ^ (unsigned long long)p_5) * (unsigned long long)(
                                  (int)p_7 % ((int)((short)p_9) + 204))));
  return result;
}


