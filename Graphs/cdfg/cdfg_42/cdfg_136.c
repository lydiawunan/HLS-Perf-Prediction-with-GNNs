#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820200081
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[3][5], short p_15[2][1][5])
{
  unsigned int v_19;
  unsigned long v_17;
  unsigned char v_13;
  unsigned short v_11;
  double v_9;
  signed char v_7;
  unsigned char v_5;
  unsigned char v;
  unsigned long long result;
  v_19 = (unsigned int)p_15[0][0][2];
  v_17 = (unsigned long)p_15[0][0][1];
  v_13 = (unsigned char)43;
  v_11 = (unsigned short)p_15[1][0][1];
  v_9 = (double)p[2][3];
  v_7 = (signed char)p[2][3];
  v = (unsigned char)9;
  result = 8472ULL;
  if (-209.703353882f > (float)(- (- (~ v_11)))) {
    v = (unsigned char)((unsigned long)(- (-59370L + (long)p_15[0][0][3])) % (unsigned long)(
                        ((unsigned int)p_15[1][0][1] | ~ p[0][0]) + 687U));
    v_13 = (unsigned char)(! (- (p[0][4] * p[1][0])));
    v_5 = (unsigned char)(- p[1][2]);
  }
  else {
    v_5 = (unsigned char)(~ (! (v_17 ^ (unsigned long)v_19)));
    result = (unsigned long long)(- (- -36940));
    v_13 = (unsigned char)(p[2][0] * (unsigned int)v_13 - (unsigned int)(! (
                           4689 % ((int)v_7 + 47))));
  }
  while (18446744073709547207ULL * ! (result % (unsigned long long)((int)v + 265)) <= (unsigned long long)v_5) {
    v_11 = (int)v_7 * 67;
    v_7 = (signed char)(~ (598509326U % (p[1][4] + 709U)) * ((unsigned int)(- v_9) ^ 
                                                             p[2][0] * (unsigned int)v_13));
    result = (unsigned long long)((unsigned int)(- v_9 - (double)((long long)v_11 / 28LL)) - (
                                  - p[1][3] - 4294967241U));
    v = (unsigned char)result;
  }
  while_0_break: ;
  return result;
}


