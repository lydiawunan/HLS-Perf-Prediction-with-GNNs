#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 359313554
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[5], short p_5, char p_9, unsigned long p_11[5][4],
                 unsigned char p_15)
{
  unsigned long long v_27;
  long long v_25;
  int v_23;
  unsigned long v_21;
  int v_19;
  short v_17;
  unsigned long long v_13;
  unsigned long long v_7;
  unsigned long v;
  unsigned int result;
  v_27 = 18446744072774179049ULL;
  v_25 = (long long)p_5;
  v_23 = -485263494;
  v_21 = 3966509713UL;
  v_19 = -46519;
  v_17 = (short)-23968;
  v_13 = (unsigned long long)p[2];
  v = (unsigned long)p[2];
  if (~ ((v_23 << ((int)v_17 & 31)) | (-33991 + (int)p_5)) >= (int)((char)7.04808235592e+13) + (int)p_9) {
    v_13 = (unsigned long long)((unsigned long)(~ (- p_9)) + (848897502UL ^ (
                                                              p_11[1][3] - (unsigned long)v_23)));
    v = (unsigned long)p_5;
    result = (unsigned int)v_17;
  }
  else {
    result = (unsigned int)(((unsigned long long)v_19 % 18446744073709507621ULL) / (
                            (v_27 >> 59UL) + 793ULL));
    v_21 = (unsigned long)(((v_13 + v_13) + 60ULL) | (unsigned long long)(
                           (int)p[2] / (v_23 + 259) >> (v_25 & 31LL)));
    v_19 = ~ ((int)p_9 % ((int)v_17 + 354) - 28126);
  }
  if ((394208839ULL - (unsigned long long)2.00374001239e+38f) / (unsigned long long)(
      ~ (v % (unsigned long)(v_19 + 648)) + 54UL) >= (unsigned long long)(
      ! ((unsigned long)p_5 + v_21) + 60776UL)) {
    v_7 = ~ (v_13 * (unsigned long long)p_15) / (unsigned long long)(
          ~ (717711011LL / (long long)((int)p_5 + 1010)) + 251LL);
    v = (unsigned long)((((unsigned long long)p_5 - v_7) << ((unsigned long)p_9 * p_11[4][2] & 63UL)) & 171ULL);
    result = (unsigned int)(v + (unsigned long)((int)p[3] * (int)(~ p_5)));
  }
  else {
    v_17 = (short)-47;
    v_13 = (unsigned long long)(- (395493069.918 + (double)(result / (unsigned int)(
                                                            (int)p_9 + 954))));
    result = (unsigned int)((v_13 * (unsigned long long)((int)v_17 * (int)v_17)) * (unsigned long long)(
                            (unsigned long)p_9 / (p_11[4][0] + 530UL) - (unsigned long)(! p[4])));
  }
  return result;
}


