#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 994816847
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[2][1], signed char p_9, unsigned char p_11,
              unsigned long p_15[3][3], double p_21)
{
  unsigned long long v_19;
  unsigned char v_17;
  unsigned short v_13;
  short v_7;
  unsigned short v_4;
  signed char v;
  long long result;
  v_19 = 18446744073186477277ULL;
  v_17 = (unsigned char)p[1][0];
  v_4 = (unsigned short)p_21;
  v = (signed char)p_15[2][0];
  result = (long long)p_11;
  v_13 = (unsigned short)((long long)p[0][0] | ((30835LL / (result + 84LL)) / (long long)(
                                                (int)v_4 % ((int)((unsigned short)p_21) + 907) + 987) + (long long)(
                                                ((int)p_9 & (int)((signed char)p_21)) % (
                                                (int)(- v_4) + 476))));
  v_4 = (unsigned short)(- ((float)v_17 + -710268352.f) + (float)(~ (- v_19) / (unsigned long long)(
                                                                  ((int)p_9 - (int)v) + 974)));
  v_7 = (short)((float)(! ((long long)(! p_9) * -21278LL)) * ((float)p_15[0][1] + 348.195892334f));
  result = (long long)((((long)(! v) ^ ((long)v_4 - p[1][0])) / (long)(
                        ((int)v_7 / 151) * ((int)p_9 / ((int)p_11 + 562)) + 987)) / (
                       (long)v_13 * -740609724L + 49L));
  return result;
}


