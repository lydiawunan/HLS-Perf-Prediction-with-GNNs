#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732640163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, double p_7, unsigned long p_13[5][2][3],
         int p_17, long p_21)
{
  long v_25;
  int v_23;
  unsigned long v_19;
  long long v_15;
  unsigned long long v_11;
  unsigned int v_9;
  short v_4;
  double v;
  char result;
  v_25 = (long)p;
  v_23 = -16890;
  v_19 = p_13[0][0][2];
  v_15 = 12759LL;
  v_11 = (unsigned long long)p_17;
  v_4 = (short)p;
  v = 267.604831679;
  result = (char)123;
  if ((long long)(! (345933833UL - v_19)) != ! (v_15 / (long long)((int)v_4 + 251) + (long long)v_25)) {
    v_15 = (long long)p_17;
    v_11 = (unsigned long long)(p_17 * ((18 >> ((int)result & 7)) * ! p_17));
    v_9 = (unsigned int)((-2.03998021514e+38 / (- p_7 + 971.)) * (double)(
                         (p | 4294955576ULL) & 27368ULL));
  }
  else {
    v_9 = (unsigned int)p_17;
    v_4 = (short)(- ((unsigned long)(41810U * v_9) * (unsigned long)(- p_21)));
    v = (double)((v_11 | (unsigned long long)p_21) / (unsigned long long)(
                 (int)v_4 + 866) + (unsigned long long)(- (v_23 + (int)v_4)));
  }
  if (47. < - (((double)v_19 * v) / ((double)v_15 + 523.))) result = (char)2767628272.14;
  else {
    v = (- p_7 + (double)(! v_9)) / ((double)((v_11 + (unsigned long long)p_13[4][0][1]) * (unsigned long long)(
                                              v_15 + (long long)p_17)) + 990.);
    v_4 = (short)p;
    result = (char)((unsigned long long)((int)((short)(648.247375488 / (
                                                       v + 643.))) | (int)v_4) % (
                    (18446744073709510091ULL - (unsigned long long)v_4) / 42599ULL + 962ULL));
  }
  return result;
}


