#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409494106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, char p_11, unsigned int p_15,
                  unsigned int p_17, long long p_19[4][4][1])
{
  int v_13;
  unsigned long v_8;
  float v_6;
  unsigned short v_4;
  unsigned long long v;
  unsigned long result;
  v_6 = -2.11405542975e+38f;
  v_4 = (unsigned short)38535;
  v = (unsigned long long)p_17;
  result = (unsigned long)(~ (- (! p_19[0][2][0])));
  while (v < 18446744072910343912ULL) {
    v_8 = (unsigned long long)v_4 % 18446744073709530351ULL;
    v_13 = (int)(((-11317LL - p_19[2][1][0]) + -81086LL) * (long long)(~ (
                 (unsigned long)p_15 * v_8)));
    result = (unsigned long)((unsigned long long)((unsigned int)((int)p % -677509648) * (
                                                  p_17 - 9601U)) + (15081ULL + (unsigned long long)v_13));
    v = (unsigned long long)((float)((int)(! p) * ((int)p_11 + v_13)) / (
                             (float)(~ p_15) * (4294938624.f - v_6) + 486.f));
  }
  while_0_break: ;
  return result;
}


