#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526463993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, int p_5, unsigned long p_9, unsigned char p_11,
          float p_19[4][2][4])
{
  long long v_17;
  unsigned char v_15;
  double v_13;
  short v_7;
  int v;
  float result;
  v_17 = 952881697LL;
  v_15 = (unsigned char)p;
  v_13 = (double)(~ (- (! v_17)));
  v_7 = (short)((long long)(-49 / ((int)v_15 + 250)) + - (~ v_17 + (long long)p_19[0][1][0]));
  v = (int)((unsigned long)((-2035. + - p) * (double)(-27710 * p_5 << (
                                                      (int)(- v_7) & 31))) / (
            p_9 / (unsigned long)((47869 / ((int)p_11 + 663) + (int)(
                                   v_13 * 126.)) + 852) + 355UL));
  result = (float)(! (((-28440LL << 6LL) - (long long)(-65530L * (long)v)) - -82LL));
  return result;
}


