#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335165289
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned char p_5, long p_7, int p_9, short p_11)
{
  unsigned long v_29;
  unsigned long long v_27;
  char v_25;
  float v_23;
  char v_21;
  float v_19;
  float v_17;
  float v_15;
  long long v_13;
  unsigned long long v;
  long result;
  v_29 = 4294902371UL;
  v_27 = 18446744073386785068ULL;
  v_25 = (char)22;
  v_23 = -712.723449707f;
  v_21 = (char)4;
  v_13 = -59123LL;
  v = 121063030ULL;
  if (v_29 + (unsigned long)(~ ((int)v_25 / 23757)) != (unsigned long)(
      (int)p_5 >> (- (72 - (int)p_5) & 7))) {
    v_19 = (float)(- ((long)((int)v_21 % ((int)((char)-927.795672794) + 747)) / (
                      ((long)p_11 ^ p_7) + 422L)));
    v_17 = (float)((((double)p_9 - 2.17364728971e+38) - (double)(v_13 * (long long)p_5)) + (double)(
                   (v_19 * v_19) / 2.39137742473e+38f));
    result = (long)(- (17778ULL / (((unsigned long long)p + v) + 875ULL)));
  }
  else {
    result = (long)((unsigned long long)(((long long)v_23 + 62124LL) + (long long)(
                                         (int)v_25 - 21)) / ((149ULL / (
                                                              v_27 + 602ULL) - (unsigned long long)p_7) + 465ULL));
    v_13 = -843178701LL;
    v_17 = (float)p_7;
  }
  while ((((unsigned long long)((int)p ^ (int)p) + v % (unsigned long long)(
                                                   (int)p_5 + 42)) | (unsigned long long)(
          - p_7 / (long)(p_9 + 130))) <= (unsigned long long)((long long)(
                                                              (long)(
                                                              (int)p / (
                                                              (int)p_11 + 366)) - (
                                                              result << 29)) - v_13)) {
    v_15 = (int)((char)v_17) ^ -127;
    v = (unsigned long long)2.80103889719e+38f;
    v_17 = (float)(! ((int)v_15 - ((int)p_11 + (int)p_11)));
    v_13 = (long long)((unsigned long long)(p_9 + (int)p_5) - 17738ULL / (unsigned long long)(
                                                              p_7 + 1008L));
  }
  while_0_break: ;
  return result;
}


