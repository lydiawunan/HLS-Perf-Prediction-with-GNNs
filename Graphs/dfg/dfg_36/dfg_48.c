#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202600739
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned long p_5, char p_11,
                unsigned char p_17)
{
  unsigned long long v_23;
  double v_21;
  unsigned int v_19;
  unsigned long v_15;
  long v_13;
  unsigned long long v_9;
  signed char v_7;
  float v;
  signed char result;
  v_23 = 18446744073709536205ULL;
  v_21 = -2.20769708888e+38;
  v_19 = 4294913772U;
  v_15 = 3433440987UL;
  v_13 = -7308L;
  v_9 = (unsigned long long)8335714498.07;
  v_7 = (signed char)(((- v_21 + (double)(p_5 / 157UL)) - (double)p_11) - (double)(- (! (! v_23))));
  v = (float)((((unsigned long)v_13 + v_15) - (unsigned long)((double)p_17 - 3.10608523582e+38)) * (unsigned long)p_11 | (unsigned long)v_19);
  result = (signed char)(- ((float)p - v) * (float)((unsigned long long)(
                                                    (p_5 * (unsigned long)v_7) / (
                                                    (p_5 + (unsigned long)p) + 465UL)) ^ 
                                                    (106ULL % (v_9 + 986ULL)) / (unsigned long long)(
                                                    (int)(~ p_11) + 745)));
  return result;
}


