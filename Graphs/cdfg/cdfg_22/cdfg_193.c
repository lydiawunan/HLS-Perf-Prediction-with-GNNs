#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 720970515
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[3][4], long p_9[5], long p_15,
                       signed char p_19)
{
  long v_17;
  unsigned long v_13;
  unsigned long long v_11;
  float v_7;
  unsigned char v_5;
  long v;
  unsigned long long result;
  v_17 = 1026426718L;
  v_13 = (unsigned long)p_19;
  v_11 = 18446744073709533965ULL;
  v_7 = (float)p_19;
  v_5 = (unsigned char)p_9[3];
  v = 42254L;
  result = 18446744073586355316ULL;
  while ((unsigned long long)((int)(~ p[1][0]) / ((int)((unsigned char)(
                                                  (float)v_5 + v_7)) + 831)) * ~ (
         (unsigned long long)p_9[1] & v_11) != v_11) {
    v = v_13 - 5453UL;
    v_7 = (float)((10519L - p_15) / ((v_17 ^ (long)p_19) + 369L) - - (
                  v_17 - p_9[3]));
    v_13 = (unsigned long)((long)(~ (- p[0][0])) * p_9[0]);
    v_5 = (unsigned char)(~ v_11 - (unsigned long long)(33L * (61L + v)));
  }
  while_0_break: ;
  result = (968320420ULL & result) * (unsigned long long)(~ (~ v));
  return result;
}


