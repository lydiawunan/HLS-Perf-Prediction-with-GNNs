#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72662298
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, char p_5, unsigned int p_11, int p_13[1],
                long p_17)
{
  signed char v_25;
  unsigned long v_23;
  int v_21;
  unsigned char v_19;
  unsigned long v_15;
  signed char v_9;
  unsigned long long v_7;
  long long v;
  signed char result;
  v_25 = (signed char)41;
  v_23 = 952503785UL;
  v_21 = -58949;
  v_19 = (unsigned char)p_5;
  v_15 = (unsigned long)p;
  v_7 = 18446744073709548812ULL;
  while (18446744073709540789ULL == v_7 + (unsigned long long)(v_15 / 4294911361UL)) {
    v_9 = (long)v_25 | 23473L;
    v_23 = ~ ((unsigned long)p_17 / (v_23 + 527UL)) + (unsigned long)(- p);
    v_25 = (signed char)((long)p_5 * 394162740L);
    v_15 = (unsigned long)(((unsigned int)(67 + (int)v_9) % (((unsigned int)v_9 | 468461123U) + 492U)) / 5183U);
  }
  while_0_break: ;
  if (((unsigned long)(p_17 * (long)v_19) - (unsigned long)(p_11 & (unsigned int)v_21)) * v_23 < (unsigned long)(
      (int)1.70397289447e+38f * ~ ((int)p + p_13[0]))) {
    v_9 = (signed char)(18446744073551926415ULL >> ((18446744073310619452ULL + v_7) % (unsigned long long)(
                                                    p_11 + 708U) & 63ULL));
    v = (long long)((unsigned long long)p_5 / (((18446744073709495250ULL - v_7) >> (
                                                (int)(~ v_9) & 63)) + 619ULL));
    result = (signed char)((long long)(- (-55908 - (int)p)) % (0LL / (
                                                               (v << 12ULL) + 566LL) + 987LL));
  }
  else {
    v_15 = (unsigned long)p_13[0];
    result = (signed char)((unsigned long long)((unsigned long)p_11 + (
                                                (unsigned long)p_13[0] + v_15)) - 32ULL);
  }
  return result;
}


