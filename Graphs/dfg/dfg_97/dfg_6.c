#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524456981
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, long p_4, unsigned char p_13,
              signed char p_17[4][4], int p_21)
{
  float v_19;
  double v_15;
  unsigned long v_11;
  long long v_9;
  signed char v_7;
  char v;
  long long result;
  v_19 = 1.92279210436e+38f;
  v_15 = -1.14355346702e+38;
  v_11 = 3371701638UL;
  v_9 = (long long)((unsigned long long)(- p_4) - (18446744073706349052ULL + (unsigned long long)(
                                                   (int)((signed char)v_15) / (
                                                   (int)p_17[2][0] + 331))) % (unsigned long long)(
                                                  (int)(- v_19) / ((23221 + p_21) + 40) + 788));
  v_7 = (signed char)p_13;
  v = (char)(! (! (v_9 - -123LL) * (long long)(~ v_11 / (unsigned long)(
                                               (int)(- p_13) + 5))));
  result = (542971386LL % (p * 4294946315LL + 392LL)) / (((long long)(~ p_4) & 
                                                          (long long)v / (
                                                          p + 89LL)) / (
                                                         ((long long)(
                                                          (unsigned long)v_7 * 3368080792UL) + ~ p) + 997LL) + 491LL);
  return result;
}


