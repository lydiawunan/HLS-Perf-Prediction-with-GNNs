#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749059496
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, float p_13, unsigned long p_17[4][4],
                unsigned int p_19)
{
  unsigned int v_15;
  double v_11;
  unsigned short v_9;
  long v_7;
  short v_5;
  unsigned char v;
  signed char result;
  v_15 = (unsigned int)p_17[2][3];
  v_11 = (double)p_17[0][3];
  v_9 = (unsigned short)p_17[1][3];
  v_7 = -962577503L;
  v_5 = (short)p;
  v = (unsigned char)p_13;
  result = (signed char)69;
  if ((float)(((int)v_5 << 1U) / ((166 ^ (int)v_5) + 744)) / (p_13 + 554.f) < (float)(
      (unsigned int)v_9 & (unsigned int)((int)result % 45) / 4233345343U)) {
    v_15 = (unsigned int)(- (p_13 / ((float)v_5 + 668.f)) * (float)((unsigned long)result % (
                                                                    p_17[1][3] + 893UL) - (unsigned long)(
                                                                    p_19 % (unsigned int)(
                                                                    (int)v + 884))));
    v_9 = (unsigned short)((unsigned long)((v_15 - (unsigned int)v_5) * (unsigned int)(
                                           v_11 / (double)(p_13 + 1009.f))) / (
                           ((p_17[3][3] >> (p_17[0][0] & 31UL)) + (unsigned long)(
                            41853U * (unsigned int)v_9)) + 558UL));
    v_7 = (long)(p * (int)result);
  }
  else {
    result = (signed char)(! p_19);
    v_9 = (unsigned short)((unsigned int)((double)(- p_13) + (double)p_17[3][1] * v_11) / (
                           ~ (! p_19) + 466U));
    v_11 = (double)(18446744072764129953ULL * (unsigned long long)((unsigned long)v_15 / (
                                                                   p_17[0][0] + 89UL)) - (unsigned long long)(
                    (p_17[2][0] + p_17[3][0]) - (unsigned long)(- v_15)));
  }
  while (p > - ((int)(- v) + (int)(! v_5))) {
    result = (long)v_9 - v_7 / 81L;
    v_9 = (unsigned short)v_11;
    v_7 = (long)((p_13 + 0.f) / ((float)(p + 32106 * (int)result) + 489.f));
    v_5 = (short)(364047065. + ((double)((int)result | (int)v_9) + v_11 * (double)result));
  }
  while_0_break: ;
  return result;
}


