#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 645472267
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, double p_4, short p_13)
{
  double v_17;
  unsigned long v_15;
  long long v_11;
  long v_9;
  unsigned char v_7;
  int v;
  char result;
  v_17 = p_4;
  v_15 = 62859UL;
  v_11 = -56007LL;
  v_9 = (long)p_13;
  v_7 = (unsigned char)p_4;
  v = 905995096;
  result = (char)p_13;
  while (((long long)(12760U - p) * (34363LL - (long long)v)) / (long long)(
         (p * 4294966102U & 4294967260U) + 860U) != (long long)((v - 71 * v) - (int)(- (
                                                                8362156398.85 * (double)v_15)))) {
    result = (long long)v_17 + -37600062LL;
    v = (int)(! (! (char)123));
    v_7 = (unsigned char)((((long long)p - v_11) >> ((78916806LL + (long long)result) & 63LL)) / (
                          (long long)5.94609878379e+37 + 215LL));
    v_15 = (unsigned long)p_13;
  }
  while_0_break: ;
  while (! p == (unsigned int)(((int)(- p_4) + (int)result / -81471106) % (
                               (! v + (int)(! v_7)) + 794))) {
    v = v_11 % -821329209LL;
    v_7 = (unsigned char)(-4294952126UL);
    result = (char)(((unsigned long)(p * (unsigned int)p_13) / (unsigned long)(
                     ((long)p_13 + v_9) + 1021L)) % (unsigned long)((
                                                                    -18664L >> (
                                                                    (long)p_13 * -827891947L & 31L)) + 19L));
    v_7 = v_7;
  }
  while_0_break_0: ;
  return result;
}


