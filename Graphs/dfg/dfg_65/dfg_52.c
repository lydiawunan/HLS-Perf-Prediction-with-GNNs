#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695906034
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, long long p_5, double p_7, double p_9)
{
  double v_17;
  double v_15;
  unsigned char v_13;
  unsigned long v_11;
  char v;
  unsigned short result;
  v_17 = -2.06132967683e+38;
  v_15 = (double)p;
  v_13 = (unsigned char)240;
  v_11 = (unsigned long)p_9;
  v = (char)((double)(((-34884LL * (long long)p_9) % (long long)(- v_11 + 747UL)) % (
                      (long long)((double)(p_5 / (long long)((int)v_13 + 463)) / (
                                  - v_15 + 455.)) + 195LL)) + (p_9 + v_17));
  result = (unsigned short)(p_7 * (- (2.13157576023e+38 / (p_7 + 726.)) + 53778.));
  result = (unsigned short)((0LL ^ -1405826702LL / (-824670658LL % (long long)(
                                                    (int)v + 829) + 138LL)) / (long long)(
                            (int)(- result) + 378));
  result = (unsigned short)((long long)((unsigned long)(~ p + (long)(
                                                        -516328128 & (int)result)) / 334UL) - (
                            p_5 + ((long long)p | ((long long)-3.26050666597e+38f + p_5))));
  return result;
}


