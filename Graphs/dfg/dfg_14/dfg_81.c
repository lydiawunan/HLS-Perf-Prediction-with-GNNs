#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93627113
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, double p_11, long p_15)
{
  unsigned char v_17;
  long v_13;
  unsigned int v_9;
  double v_7;
  signed char v_5;
  long long v;
  unsigned int result;
  v_17 = (unsigned char)110;
  v_13 = 30956L;
  v_9 = 172327462U;
  v_5 = (signed char)-80;
  v = 57159LL;
  v_7 = (double)(~ (~ ((long)(241 - (int)v_17) - - p_15)));
  v_9 = (unsigned int)((966413736. * ((double)(~ p) * - p_11)) * (double)(
                       ((128L * p_15) * (p_15 + (long)v_5)) % ((long)(
                                                               (p_11 + (double)v_9) - (
                                                               -23288. - v_7)) + 653L)));
  v_5 = (signed char)((long long)((long)((p_11 / ((double)v_13 + 802.)) / -34058.) - p_15) + (
                      (long long)(~ ((int)v_5 % 51082)) & (224LL % (v + 833LL) + (long long)(
                                                           p_15 - (long)v_5))));
  result = (unsigned int)((((long long)((int)p + (int)p) + -4493685175LL) ^ ~ (
                           32327LL * v)) % (long long)((unsigned int)(! p) % (
                                                       ((unsigned int)(
                                                        (int)v_5 & (int)((signed char)v_7)) - v_9) + 58U) + 1010U));
  return result;
}


