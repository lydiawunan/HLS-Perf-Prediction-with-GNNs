#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 790615545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, short p_7, float p_11, long long p_15[1][2][3],
           unsigned long p_17)
{
  unsigned long v_25;
  unsigned int v_23;
  float v_21;
  char v_19;
  long long v_13;
  unsigned char v_9;
  int v_5;
  signed char v;
  double result;
  v_25 = 1053467612UL;
  v_23 = 523399420U;
  if (121UL + ((p_17 - (unsigned long)v_23) | p_17) == ~ v_25) {
    v_21 = (float)(-34348LL);
    v_13 = (long long)(v_21 + 25778.f);
    v_19 = (char)p_15[0][0][2];
  }
  else {
    v_19 = (char)p_11;
    v_13 = (long long)p_11;
  }
  if ((v_13 ^ p_15[0][0][0]) / 7949521LL + (long long)((unsigned long)(
                                                       p_11 + -882732992.f) * (
                                                       4294944847UL - p_17)) < (long long)(
      (int)3.00914416406e+27f % (((int)v_19 - -42 / ((int)p_7 + 868)) + 828))) {
    v_5 = -242360732;
    v = (signed char)90;
    result = (double)(((int)(~ p) - (int)v % 224) >> (! v_5 * (11720 / (
                                                               (int)p_7 + 401)) & 31));
  }
  else {
    v_9 = (unsigned char)((unsigned int)p_11);
    result = (double)(4294967286UL % ((4180227923UL % (unsigned long)(
                                       (int)v_9 + 350) - (unsigned long)(
                                       (double)p_11 + -1.87988536544e+37)) + 525UL));
  }
  return result;
}


