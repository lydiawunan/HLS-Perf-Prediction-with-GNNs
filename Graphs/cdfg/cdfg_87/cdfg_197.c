#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1067762248
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, int p_4, float p_9[5], int p_11, short p_21[3][4])
{
  unsigned int v_29;
  unsigned long long v_27;
  unsigned long long v_25;
  char v_23;
  long long v_19;
  long long v_17;
  long v_15;
  signed char v_13;
  unsigned long v_7;
  signed char v;
  float result;
  v_27 = 18446744073709493154ULL;
  v_25 = 21493ULL;
  v_17 = -820781685LL;
  v_15 = (long)p;
  v_13 = (signed char)69;
  v = (signed char)p_4;
  if ((unsigned long long)(p << (-8963LL * v_17 & 63LL)) + 18446744073709551615ULL <= (unsigned long long)(~ (
      (int)p_21[1][0] / ((int)p_21[1][0] / ((int)v_13 + 116) + 511)))) {
    v_23 = (char)p;
    v_17 = (long long)-2.8899235721e+38;
    v = (signed char)(p_11 << ((int)(~ v_23) & 31));
  }
  else {
    v_29 = (unsigned int)p;
    v_23 = (char)((18446744073709551535ULL - v_27) >> (v_29 & 63U));
    v_25 = (unsigned long long)p_11;
  }
  if ((unsigned long long)((-1168987479.58 - (double)v_23) * (double)(- v_17)) % (
      v_25 + 393ULL) < (unsigned long long)((double)(((int)v_23 + (int)((char)3923004416.f)) | 27458) + 1.15924436029e+38)) {
    v_13 = (signed char)(~ ((long long)v_15 / (v_17 + 905LL) >> (v_15 * -13L & 63L)));
    v_7 = 119093213UL / (unsigned long)(~ (p_11 % ((int)v_13 + 401)) + 437);
    result = (float)(~ p + (long long)((unsigned long)(p_4 + (int)v) % (
                                       v_7 % ((unsigned long)p_9[1] + 560UL) + 628UL)));
  }
  else {
    v_19 = (long long)(- (- ((float)p / 367.072937012f)));
    result = (float)(p + ((v_19 + (long long)p_21[2][0]) + (long long)(! p_21[0][2])));
  }
  return result;
}


