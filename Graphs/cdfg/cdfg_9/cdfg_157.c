#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068980769
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned long long p_4, long p_6, unsigned char p_17,
         unsigned long long p_19)
{
  long long v_21;
  unsigned long v_15;
  float v_13;
  double v_11;
  unsigned long long v_9;
  unsigned short v;
  char result;
  v_21 = 63360LL;
  v_13 = -398.620330811f;
  v_9 = 18446744073417804761ULL;
  v = (unsigned short)p;
  result = (char)p;
  while ((unsigned long long)(~ (~ p_17)) / (p_4 + 403ULL) != ~ ((p_19 + (unsigned long long)v) + (
                                                                 p_19 - (unsigned long long)result))) {
    v_9 = v_21 + -41869LL;
    v_21 = (long long)((long)p_17 / ((8431L | (long)((int)p % ((int)p_17 + 433))) + 823L));
    result = (char)(-62066 / ((int)v_13 + 649));
    v = (unsigned short)-169.111245535;
  }
  while_0_break: ;
  while (- (((unsigned long long)1.43977559397e+38 - p_4) * (unsigned long long)(
            (long)result - p_6)) <= 18446744073709551578ULL) {
    v_13 = (long)v + -40060L;
    v_15 = (unsigned long)p_6;
    v_11 = (double)(- (~ ((unsigned long)v_13 + v_15)));
    result = (char)(~ (- v_9 * (unsigned long long)v_11));
  }
  while_0_break_0: ;
  return result;
}


