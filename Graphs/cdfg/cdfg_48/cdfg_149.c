#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 20429258
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, long p_4, long long p_15, int p_17, unsigned long p_19)
{
  double v_21;
  unsigned long v_13;
  unsigned int v_11;
  long v_9;
  long long v_7;
  float v;
  short result;
  v_21 = -2.55617605267e+38;
  v_11 = (unsigned int)p_4;
  v_9 = -156744550L;
  v_7 = 23677LL;
  v = (float)p_4;
  result = (short)p_19;
  while ((float)(~ (p_17 >> (p_19 & 31UL))) + (float)(-422776317LL % (long long)(
                                                      p_19 + 856UL)) * (
                                              (float)p_17 - v) <= - v) {
    result = (int)((signed char)v_21) * -77;
    v_21 = (double)((long long)p ^ v_7);
    v_9 = 925395869L;
    v = (float)(3941247950LL / (- (12585LL % (p_15 + 778LL)) + 592LL));
  }
  while_0_break: ;
  while (2611964459ULL * (18446744073465648473ULL / (unsigned long long)(
                          p + 334L)) - (unsigned long long)((-4949L * p) / (
                                                            p % (p_4 + 784L) + 846L)) <= (unsigned long long)(
         (long)v ^ - (~ p))) {
    result = v_11 >> ((long long)v_9 * (v_7 % 18219LL) & 31LL);
    v_9 = -23732L;
    v_13 = (unsigned long)(- (((unsigned long long)p_15 ^ 18446744073178277641ULL) % (unsigned long long)(
                              ! p_4 + 700L)));
    v = (float)(! (~ (- v_13)));
  }
  while_0_break_0: ;
  return result;
}


