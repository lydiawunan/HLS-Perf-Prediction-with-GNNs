#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719150177
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[4][1], int p_7, signed char p_9, char p_11,
          long long p_13)
{
  signed char v_21;
  long v_19;
  signed char v_17;
  char v_15;
  float v_5;
  long long v;
  short result;
  v_21 = (signed char)p_7;
  v_19 = (long)p[2][0];
  v_17 = (signed char)59;
  v_15 = (char)p_13;
  result = (short)p[2][0];
  v_15 = (char)(((long long)(! (37515 + (int)v_17)) | (p_13 + (long long)v_19) / (long long)(
                                                      ((int)v_15 - (int)v_21) + 731)) / (long long)(
                (unsigned long)(! ((int)result * -91)) + 919UL));
  v = ((long long)p_11 / ((long long)result / ((p_13 >> ((int)v_15 & 63)) + 310LL) + 940LL)) / (
      - (! (p_13 / (long long)(p_7 + 93))) + 41LL);
  v_5 = (float)p_9;
  result = (short)((long)((float)(! (v << (p[0][0] & 63UL))) / (v_5 + 924.f)) + 
                   (long)(p_7 + 24) % ((long)((int)result % 143) % -792024043L + 363L));
  return result;
}


