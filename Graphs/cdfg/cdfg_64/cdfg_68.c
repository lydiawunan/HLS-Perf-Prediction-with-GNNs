#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 374961454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned int p_5, double p_7, long long p_15[1][2][5],
          int p_17)
{
  long v_25;
  long long v_23;
  unsigned long long v_21;
  int v_19;
  unsigned long v_13;
  int v_11;
  unsigned short v_9;
  long long v;
  short result;
  v_25 = (long)p;
  v_23 = p_15[0][0][1];
  v_13 = 4294917099UL;
  v_9 = (unsigned short)p_15[0][0][3];
  if ((long long)(v_13 * 103UL) % ((99LL - v_23) + 767LL) != - ((p_15[0][0][2] + (long long)p_17) - (long long)(
                                                                (long)v_9 / (
                                                                v_25 + 920L)))) {
    v_21 = (unsigned long long)(! (v_13 / (v_13 + 930UL) + (unsigned long)(
                                   p_5 - p_5)));
    v_11 = (int)((unsigned long long)p_17 - v_21);
    v_19 = (int)p_7 + v_11;
  }
  else {
    v_19 = (int)((unsigned long long)p_17 ^ 18446744073709549087ULL);
    v_9 = (unsigned short)p_7;
  }
  if (p_15[0][0][1] + (long long)(v_19 % ((int)(481947518. + p_7) + 309)) >= 214LL) {
    v = (long long)p_7;
    result = (short)(v - ((long long)(~ p) - (v + (long long)p_5)));
  }
  else {
    v_13 = (unsigned long)(p_17 % -67);
    v_11 = (int)(~ (- ((long long)v_13 / (p_15[0][1][4] + 594LL))));
    result = (short)(240.270263672f + (float)((int)v_9 / (v_11 + 123) - (
                                              -56 - (int)((char)-3.3641881128e+38f))));
  }
  return result;
}


