#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 420238221
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_11, signed char p_13,
              unsigned short p_15, signed char p_17)
{
  unsigned long long v_25;
  short v_23;
  long v_21;
  short v_19;
  int v_9;
  unsigned long long v_7;
  char v_4;
  signed char v;
  long long result;
  v_25 = (unsigned long long)p_17;
  v_23 = (short)-7584;
  v_21 = (long)p;
  v_7 = 18446744073185629355ULL;
  v_4 = (char)-99;
  v = (signed char)41;
  result = p;
  if (~ (~ (30961L * v_21)) < (long)(~ p_15)) {
    v_4 = (char)p_17;
    v_7 = (unsigned long long)(~ v);
    v_9 = (int)(~ (- result) + (long long)v_23);
  }
  else {
    result = (long long)(- (~ 4294943515UL));
    v_21 = (long)(! ((unsigned long long)(~ p_17) / (~ v_25 + 249ULL)));
    v_9 = (int)p_17;
  }
  if ((float)(- (p << (result & 63LL)) - (long long)((long)((int)p_17 / (
                                                            (int)((signed char)-4318610427.84) + 956)) + v_21)) == 
      (float)((int)p_17 % ((int)p_17 + 760)) * -2.79766735225e+38f) {
    v_4 = (char)(! (((int)p_11 + (int)p_13) / 31));
    v = (signed char)((unsigned long long)(- p % ((long long)-5.02863602224e+33 + 668LL)) - 
                      (v_7 | 18446744073709533959ULL) * (unsigned long long)(~ v_9));
    result = (long long)v % (- ((long long)v_4 + -232124585LL) + 596LL);
  }
  else {
    v_19 = (short)v_4;
    v_9 = (int)p_17 - - ((int)v_19 / ((int)p_11 + 170));
    result = (long long)((unsigned long)(~ ((int)p_15 % 9105)) - 0UL % (
                                                                 (unsigned long)v_9 % 4294949097UL + 399UL));
  }
  return result;
}


