#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1037464347
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned int p_9, long p_11,
           unsigned long long p_13[2][2], short p_21[3][5])
{
  double v_27;
  unsigned long long v_25;
  double v_23;
  signed char v_19;
  unsigned long long v_17;
  char v_15;
  int v_7;
  double v_5;
  unsigned char v;
  double result;
  v_25 = (unsigned long long)p_9;
  v_23 = 603.723778588;
  v_19 = (signed char)19;
  v_17 = 13767ULL;
  v_15 = (char)p_9;
  result = (double)p_21[2][4];
  while (- (((unsigned long long)v_23 & p_13[0][1]) ^ (unsigned long long)(~ p_11)) != (unsigned long long)v_15) {
    v_5 = (double)v_25 - -733.805560187;
    v_27 = (double)(~ (! (25456LL % ((long long)v_5 + 822LL))));
    v_25 = (unsigned long long)(((float)p_9 + -2.69127881221e+38f) - (float)(
                                (unsigned long long)v_27 * (18010ULL ^ (unsigned long long)result)));
    v_15 = (char)((! v_25 - 18446744073709551611ULL) - (v_17 / (unsigned long long)(
                                                        (int)p_21[2][2] + 613)) % (unsigned long long)(
                                                       p_9 + 300U));
  }
  while_0_break: ;
  if (- ((unsigned long long)p_21[2][0] % (v_17 + 899ULL)) <= (unsigned long long)(
      (long long)((unsigned long)(73. + result) % 5416578UL) + -120423559LL)) {
    v = (unsigned char)((unsigned long long)(((int)p + 43658) - (int)(~ p)) / 18446744073709494594ULL);
    result = (double)v;
  }
  else {
    v_7 = (int)((p_13[0][1] % (unsigned long long)(p_9 + 769U) - (unsigned long long)v_15 % (
                                                                 v_17 + 267ULL)) + (unsigned long long)(
                (int)(! v_19) << 4));
    v_5 = (double)((unsigned long)(! v_7) * ((unsigned long)p_9 % 3639657713UL) ^ (unsigned long)(! p_11));
    result = (double)((int)((char)v_5) * (int)(- p));
  }
  return result;
}


