#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106852365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned int p_4, signed char p_6,
                  unsigned int p_8, unsigned char p_10[3])
{
  unsigned long long v_21;
  float v_19;
  unsigned long long v_17;
  float v_15;
  unsigned long long v_13;
  unsigned short v;
  unsigned char result;
  v_19 = -1026742208.f;
  v_17 = 12643ULL;
  v_15 = (float)p;
  v_13 = 36868ULL;
  v = (unsigned short)p_8;
  result = p_10[2];
  while ((float)(~ (v_17 << ((int)p_6 & 63)) | ~ (! v_17)) == v_15) {
    v_17 = v_19 - 1.84467440737e+19f;
    v_21 = (unsigned long long)((int)(42159.f * ((float)p_6 - -238.920928955f)) * (
                                (int)((unsigned short)7300629723.24) / (
                                (int)v + 567)));
    v = (unsigned short)((int)result | 208);
    v_17 = ! v_21 % (((unsigned long long)p_6 + (v_21 - v_17)) + 105ULL);
  }
  while_0_break: ;
  if ((float)v_13 >= v_15) {
    result = (unsigned char)(! ((unsigned long long)p_4 / 18446744073709537645ULL) * (unsigned long long)(
                             (unsigned long)p_6 - ((unsigned long)p_8 | (unsigned long)p)));
    result = (unsigned char)((~ p + (long)result) / (! p + 718L));
  }
  else {
    result = (unsigned char)(40858L | (-18409980L << 10U) % 2817L);
    result = (unsigned char)(((-1.83303306288e+38 + (double)result) + (double)p_6) - (double)(
                             (int)(~ result) * (int)v));
    result = (unsigned char)(~ ((int)result * (int)p_10[2]) * (int)result);
  }
  return result;
}


