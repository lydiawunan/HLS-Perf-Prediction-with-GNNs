#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016811937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p[2][2][4], unsigned char p_5, int p_15,
                 signed char p_19, signed char p_21)
{
  long long v_23;
  double v_17;
  double v_13;
  float v_11;
  long long v_9;
  unsigned long long v_7;
  unsigned int v;
  unsigned int result;
  v_23 = -59718LL;
  v_17 = (double)p_19;
  v_9 = -590653469LL;
  v = (unsigned int)(((long long)((int)p_5 * (int)p_21) - v_23 / ((long long)-1.54821198128e+38 + 552LL)) & (long long)(
                     -982.02847831 - (double)((int)p_21 - (int)((signed char)-2.74138291348e+38))));
  if ((unsigned long long)((unsigned int)((int)v_17 * p_15) / (~ (v % (unsigned int)(
                                                                  (int)p_19 + 525)) + 635U)) <= 1001592664ULL) {
    v_7 = (unsigned long long)(~ v_9);
    v = (unsigned int)v_7;
    result = (unsigned int)((long long)v - (long long)(p[0][0][2] + (long)p_5) / (
                                           (-1026670732LL << (v & 63U)) + 105LL));
  }
  else {
    v_11 = (float)(-3.38891946445e+38 / ((double)p_15 + 500.));
    v_13 = (double)975305729ULL;
    result = (unsigned int)((double)((unsigned int)-2.82211118934e+38 | 61278U) / (
                            ((double)v_11 - v_13 / ((double)p[1][0][0] + 918.)) + 504.));
  }
  return result;
}


