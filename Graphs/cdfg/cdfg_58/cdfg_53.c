#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80600808
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned int p_4[1][1], double p_9[5][4],
                  unsigned int p_11, int p_17)
{
  signed char v_25;
  unsigned long v_23;
  unsigned long v_21;
  unsigned long v_19;
  unsigned long long v_15;
  long long v_13;
  signed char v_7;
  int v;
  unsigned long result;
  v_25 = (signed char)p_11;
  v_23 = p;
  v_21 = (unsigned long)p_17;
  v_19 = (unsigned long)p_11;
  v_15 = (unsigned long long)p_11;
  v_13 = (long long)p;
  while ((long long)(~ (~ (v_19 * v_21))) == (long long)(3419629230U + (
                                                         13596U - p_11)) / (
                                             ~ v_13 + 636LL)) {
    v_13 = (long long)v_23 % 390441926LL;
    v_23 = ! ((unsigned long)(p_9[1][1] / ((double)v_25 + 595.)) - 171130134UL);
    v = (int)((double)(- p_17) + p_9[4][1]);
    v_21 = (unsigned long)(! ((unsigned int)((double)v - p_9[0][1]) & 438318490U));
  }
  while_0_break: ;
  if (- ((unsigned long long)v_13 + v_15) - ~ ((unsigned long long)p_17 + v_15) > (unsigned long long)(! (
      8L - ((long)p_9[1][0] & -563431446L)))) {
    v_7 = (signed char)(- (- p_9[3][1] * (double)p_11));
    v = (int)(- v_7);
    result = ((p / (unsigned long)(p_4[0][0] + 48U)) * ((unsigned long)v + 51858UL)) % (
             - p + 640UL);
  }
  else result = (unsigned long)-8985530825.04;
  return result;
}


