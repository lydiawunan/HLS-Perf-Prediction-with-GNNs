#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432660729
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned short p_4[1][5][5], long long p_6, double p_9,
         double p_11)
{
  unsigned int v_19;
  long v_17;
  unsigned long long v_15;
  float v_13;
  int v;
  char result;
  v_19 = 3472160018U;
  v_15 = 18844ULL;
  v_17 = (long)(- (- (- p_11)) * (double)(! (~ (~ v_19))));
  v_13 = (float)(~ (10ULL * (v_15 + (unsigned long long)p_11)) / (unsigned long long)(
                 (int)p_11 / (((int)((unsigned short)(p_9 / ((double)v_17 + 328.))) - (int)p_4[0][4][4]) + 11) + 915));
  v = (int)(- (- ((59910. + p_11) + (double)(73.f / (v_13 + 143.f)))));
  result = (char)(((long long)(p - (int)p_4[0][3][4]) * (p_6 % (long long)(
                                                         v + 568)) - (long long)(- (
                   354 % (v + 265)))) / (p_6 % ((long long)(92829. - p_9) + 669LL) + 160LL));
  return result;
}


