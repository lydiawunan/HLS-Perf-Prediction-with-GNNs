#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 56716336
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long p_11, unsigned long long p_15,
                 unsigned int p_17[2][2], long long p_21)
{
  unsigned char v_33;
  int v_31;
  char v_29;
  int v_27;
  unsigned short v_25;
  unsigned char v_23;
  short v_19;
  long v_13;
  long v_9;
  signed char v_7;
  unsigned long v_5;
  float v;
  unsigned int result;
  v_33 = (unsigned char)p_15;
  v_29 = (char)110;
  v_27 = (int)p_17[0][0];
  v_25 = (unsigned short)p_21;
  v_19 = (short)-12985;
  v_5 = 4241094681UL;
  if ((long long)((int)v_29 % 86 + ! (15850 + (int)v_33)) < (! p_21 ^ (long long)(- (! v_27)))) {
    v_23 = (unsigned char)(76 >> (((unsigned long long)(~ v_25) - p_15 % (unsigned long long)(
                                                                  v_27 + 455)) & 7ULL));
    v_13 = (long)v_23;
    v_5 = (unsigned long)(((unsigned long long)v_19 + p_15) * 18446744073709551500ULL - (unsigned long long)(! (- p_21)));
  }
  else {
    v_31 = (int)((unsigned long long)(571395180LL - ! p_21) / ((unsigned long long)(
                                                               155 - (int)p) * (
                                                               p_15 - 4294907210ULL) + 255ULL));
    v_29 = (char)(- (~ (p_21 >> ((int)v_29 & 63))));
    v_13 = (long)((long long)(p_11 - (unsigned long)((int)v_29 >> 7)) / (
                  (long long)(! v_31) * -823706023LL + 166LL));
  }
  if ((unsigned long long)((long long)p_11 - ((long long)v_13 | 31808LL)) * ~ (
      p_15 * (unsigned long long)p_17[1][0]) > 18446744073709550784ULL) {
    v = (float)(23401LL + (long long)(- v_5));
    result = 4294951003U + (0 - (unsigned int)-765.281875631);
    result = (unsigned int)(((long long)result + ((long long)p + 323001949LL)) - (long long)(
                            (int)(- v) << ((int)((signed char)v) % 65 & 31)));
  }
  else {
    v_9 = -92L;
    v_7 = (signed char)(~ (66L * ~ v_9));
    result = (unsigned int)v_7;
  }
  return result;
}


