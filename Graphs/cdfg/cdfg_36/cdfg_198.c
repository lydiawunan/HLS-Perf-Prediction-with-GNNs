#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734640086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, char p_4, int p_11, int p_13,
                  unsigned char p_15)
{
  unsigned long v_33;
  long long v_31;
  unsigned long v_29;
  double v_27;
  int v_25;
  unsigned int v_23;
  unsigned int v_21;
  char v_19;
  signed char v_17;
  float v_9;
  unsigned int v_7;
  unsigned long v;
  unsigned long result;
  v_33 = (unsigned long)p_13;
  v_31 = 17250LL;
  v_29 = (unsigned long)p_4;
  v_27 = -4848373272.94;
  v_25 = 36992;
  v_23 = 4294949819U;
  if ((long long)((unsigned long)(0. + v_27 * 1.84467440737e+19) % ((unsigned long)(
                                                                    (int)p_15 / (
                                                                    (int)p_4 + 362)) % (
                                                                    (
                                                                    (unsigned long)p_15 + v_29) + 162UL) + 617UL)) != - (
      v_31 + (long long)(v_33 + (unsigned long)p_15))) {
    v_21 = v_23;
    v_19 = (char)((unsigned int)(113 - (int)((unsigned char)-2.24216321485)) / (
                  (v_21 - (unsigned int)(p_13 - p_13)) + 15U));
    v_9 = (float)(24394ULL * (unsigned long long)p_11);
  }
  else {
    v_7 = (428702834U * (unsigned int)((int)p_15 + -7089)) * (unsigned int)(
          - v_25 + -37428);
    v_19 = (char)-20;
    v_9 = (float)(p - ((long long)v_7 % (p + 719LL) << (~ v_7 & 63U)));
  }
  if (((p * (long long)v_9) / (long long)(1046448419 * p_11 + 476)) / 15LL > (long long)(
      46846 % ((int)v_19 + 621))) {
    v_7 = 21565U;
    v = (unsigned long)(- v_7 + (unsigned int)(((int)v_9 - p_11) / (p_13 + 812)));
    result = (unsigned long)(p * (long long)((unsigned long)(87 * (int)p_4) * ! v));
  }
  else {
    v_17 = (signed char)(~ (- (- p_11)));
    result = (unsigned long)((((int)p_15 | (int)v_17) % 78) / -1);
  }
  return result;
}


