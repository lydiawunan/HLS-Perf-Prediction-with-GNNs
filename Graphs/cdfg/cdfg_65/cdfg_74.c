#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 6983721
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, int p_5[2][1], unsigned long p_7,
              unsigned long long p_9, int p_11)
{
  char v_23;
  unsigned long long v_21;
  unsigned short v_19;
  signed char v_17;
  unsigned long v_15;
  int v_13;
  unsigned long v;
  long long result;
  v_23 = (char)p_5[1][0];
  v_21 = 18446744073404205248ULL;
  v_19 = (unsigned short)6221;
  v_17 = (signed char)-43;
  v_15 = 21823UL;
  result = (long long)p;
  if ((int)v_23 == (int)(! v_19)) {
    v_17 = (signed char)(~ ((unsigned long long)((unsigned long)v_19 % (
                                                 p_7 + 592UL)) + (18446744073709531501ULL + v_21)));
    v_19 = (unsigned short)(! (3370LL + ((long long)p_11 + result)));
    v_13 = (int)(~ (~ p_7) % (unsigned long)((int)(! (~ v_19)) + 636));
  }
  else {
    v_23 = (char)-240.374755859f;
    v_15 = (unsigned long)(- (25659ULL * (unsigned long long)(9258 % (
                                                              p + 504))));
    v_13 = (int)(- ((float)(! p) - 2154278144.f * (float)v_23));
  }
  if (- ((double)v_13 * 2.83623113136e+38) / ((double)((unsigned int)-903.329650879f + (
                                                       (unsigned int)p_11 - 440812096U)) + 999.) > (double)(
      (v_13 << (- v_15 & 31UL)) / ((int)v_17 + 870))) result = (long long)(- (! (
                                                      (unsigned int)p | 10308U)));
  else {
    v = (unsigned long)(((unsigned long long)(~ p_5[0][0]) | ((unsigned long long)p_7 + p_9)) % (
                        (360637240ULL * (unsigned long long)p_11 | 57ULL) + 562ULL));
    result = (long long)(v * 132UL);
  }
  return result;
}


