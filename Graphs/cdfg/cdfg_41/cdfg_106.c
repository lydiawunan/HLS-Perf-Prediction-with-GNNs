#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534103316
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p[3], int p_15)
{
  double v_13;
  long long v_11;
  unsigned long long v_9;
  unsigned int v_7;
  unsigned long v_5;
  long v;
  double result;
  v_13 = (double)p[0];
  v_9 = 821924170ULL;
  v_7 = 634610937U;
  v_5 = 14666UL;
  v = (long)p[0];
  result = (double)p[1];
  if ((~ p[1] % ((unsigned long)v / (v_5 + 1018UL) + 54UL)) / (p[2] % (
                                                               ~ p[1] + 775UL) + 30UL) == (unsigned long)(- (~ (- p_15)))) {
    v_7 = (unsigned int)v_13;
    v_13 = (double)(2581U / ((unsigned int)(- v_13) + 502U));
    v_11 = (long long)(~ (~ (- p[1])));
  }
  else {
    v_11 = (long long)(p[1] % 3293515160UL);
    v_5 %= p[0] + 856UL;
    result = (double)11393L;
  }
  while (((unsigned long long)v - (18446744073196922052ULL + (unsigned long long)p[0])) - (unsigned long long)(
         (v_5 + p[2]) / (unsigned long)(v_7 * 4189162071U + 890U)) > 0ULL) {
    v_11 = (long long)(228UL / (4294930560UL * p[0] + 166UL)) - (long long)(
                                                                p[1] + (unsigned long)v_13) / (
                                                                (long long)p[1] / (
                                                                v_11 + 352LL) + 958LL);
    v = ((v << 11) | (long)(result * (double)v_11)) - (long)result;
    v_7 = (unsigned int)((v_9 * (unsigned long long)v + 665664487ULL) & 3431447843ULL);
  }
  while_0_break: ;
  return result;
}


