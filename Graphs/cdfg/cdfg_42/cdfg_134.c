#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810873580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned char p_15, unsigned int p_17,
                 signed char p_21, long p_23)
{
  long v_19;
  long long v_13;
  short v_11;
  unsigned long v_9;
  int v_7;
  signed char v_4;
  float v;
  unsigned int result;
  v_19 = 672L;
  v_13 = 17957LL;
  v_11 = (short)p;
  v_9 = (unsigned long)p_15;
  v_7 = 36625;
  v_4 = (signed char)p_15;
  result = (unsigned int)p_15;
  if (0 == (unsigned long long)((~ p_17 + (unsigned int)((int)v_11 / (
                                                         (int)p_21 + 147))) / (
                                (p_17 + p_17) % (unsigned int)((int)v_11 + 692) + 478U))) {
    v_11 = (short)p_15;
    v_4 = (signed char)((long long)((int)v_4 / -8) % (- v_13 + 434LL) | (
                        (long long)((unsigned int)p | 12827U) | v_13));
    v = (float)(~ ((long long)v_4 * v_13) * (long long)(p * - p));
  }
  else {
    v_9 = 0UL;
    v = (float)v_19;
    v_11 = (short)(! p_17);
  }
  while (21 <= (-61227 - ((int)((signed char)v) + (int)v_4)) / (- ((int)v % (
                                                                   p + 234)) + 460)) {
    v_7 = v_9 / (unsigned long)((v_7 + (int)-2343901828.86) + 560);
    v_9 = (unsigned long)(~ (- (62139 % ((int)2398642400.34 + 46))));
    v = (float)v_9;
    v_4 = (signed char)((unsigned int)((p % -86) / (((int)v_11 & (int)v_11) + 234)) / (
                        (result * 244U - (unsigned int)v_11) + 316U));
  }
  while_0_break: ;
  return result;
}


