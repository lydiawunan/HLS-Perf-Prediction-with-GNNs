#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 978646195
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, signed char p_9[4][5][3], int p_11,
         unsigned long long p_13, char p_15)
{
  unsigned long v_17;
  float v_7;
  unsigned long long v_5;
  unsigned short v;
  char result;
  v_17 = (unsigned long)(~ p_11 / ((11045 - ((int)p_15 & (int)p_15)) + 117));
  if ((long long)(~ (- (p_11 + -32597))) >= ((long long)(v_17 - (unsigned long)p_9[3][3][2]) + 438112017LL) % (
                                            (long long)((p - (float)p_11) - p) + 257LL)) {
    v = (unsigned short)p;
    result = (char)v;
  }
  else {
    v_5 = p_13;
    v_7 = (float)((unsigned long long)((19148UL | (unsigned long)6.99715192307e+37f) & 22748UL) % (
                  (~ v_5 | (unsigned long long)((int)p_9[1][3][1] / (
                                                p_11 + 568))) + 8ULL));
    result = (char)((v_5 * (unsigned long long)(12539.f - p)) * (unsigned long long)(
                    p * p + - v_7));
  }
  return result;
}


