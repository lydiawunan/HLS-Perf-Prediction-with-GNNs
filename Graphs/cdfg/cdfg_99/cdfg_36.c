#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822347225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, short p_11, short p_15, unsigned char p_19[4][3])
{
  float v_21;
  signed char v_17;
  unsigned char v_13;
  unsigned char v_9;
  long long v_7;
  unsigned long v_5;
  float v;
  float result;
  v_21 = (float)p_19[3][2];
  v_13 = (unsigned char)p_11;
  v_9 = (unsigned char)p;
  v_7 = -594381654LL;
  v_5 = 4027514152UL;
  if ((long long)(! v_13) % ((v_7 - (long long)(- v_21)) + 334LL) <= 4294926509LL) {
    v = 309.459869385f;
    v_5 = (unsigned long)((long long)(76 ^ 99 * (int)p_11) - v_7);
    v_17 = (signed char)((unsigned long)(- (v + 9480856576.f)) % (v_5 % (unsigned long)(
                                                                  53125 / (
                                                                  (int)p_19[2][1] + 983) + 28) + 76UL));
  }
  else {
    v = v_21;
    v_7 = (long long)((unsigned long long)p_15 % 18446744073709520208ULL >> (
                      (int)v_9 & 63));
    v_17 = (signed char)p;
  }
  if (32590 - (int)v_17 != (int)(~ v_9) + (int)v_17 * (10 & (int)p_19[2][0])) {
    v = (float)(((int)((unsigned short)(- v)) | (int)p) + (int)v_9);
    v = (float)((long long)((v + (float)v_5) - 326332128.f) - ! (- v_7));
    result = (float)((115 | (int)(! p)) & ~ ((int)p / ((int)((unsigned short)v) + 863)));
  }
  else {
    v_5 = (unsigned long)(~ p_15);
    v_13 = (unsigned char)(! 4244554024U);
    result = (float)(((unsigned long)p_11 * v_5 - 37122UL) / (unsigned long)(
                     (-2656 + (int)(! v_13)) + 796));
  }
  return result;
}


