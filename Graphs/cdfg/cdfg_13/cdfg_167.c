#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981454179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned long p_11)
{
  short v_15;
  unsigned long v_13;
  long v_9;
  short v_7;
  unsigned long long v_5;
  char v;
  short result;
  v_15 = (short)-29061;
  v_13 = (unsigned long)p;
  v_9 = 238399382L;
  v_7 = (short)9127;
  v_5 = (unsigned long long)p;
  v = p;
  result = (short)p;
  while ((long long)((int)v_7 % (! ((int)((char)-6069924352.f) + (int)v) + 501)) >= 1) {
    v_7 = (long long)v_13 - -456920219LL;
    result = (short)p;
    v_13 = (unsigned long)(0 - ((int)p + 135)) * ((p_11 ^ (unsigned long)v_15) - (unsigned long)(
                                                  -214.110641479f / (
                                                  (float)p + 515.f)));
    v = (char)p_11;
  }
  while_0_break: ;
  while (28UL - ~ (4294943336UL | (unsigned long)v) > (unsigned long)(
         (int)p / ((int)(~ v) / (31 / ((int)v + 381) + 531) + 985))) {
    v_7 = (unsigned long long)v_9 * (v_5 % 10455ULL);
    v_9 = (long)(! 739843741LL);
    v_9 = (long)((long long)v_7 * ((long long)(v_9 - -198868421L) + -14323LL));
    v = (char)((unsigned long)p & (unsigned long)((int)p % 31) * p_11);
  }
  while_0_break_0: ;
  return result;
}


