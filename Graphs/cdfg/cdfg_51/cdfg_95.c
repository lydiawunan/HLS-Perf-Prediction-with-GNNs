#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 474939069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned long p_9, float p_11, char p_13[3][3][1],
              long p_19[1][3])
{
  unsigned short v_23;
  float v_21;
  unsigned char v_17;
  unsigned short v_15;
  signed char v_7;
  float v_5;
  long long v;
  long long result;
  v_23 = (unsigned short)p_11;
  v_21 = -817.042053223f;
  v_17 = (unsigned char)p_11;
  v_15 = (unsigned short)43254;
  v_7 = (signed char)-12;
  v = -41106LL;
  while ((long long)((unsigned long)((int)v_7 + (int)(! v_7)) * ! (- p_9)) <= (
         - (~ v) | (long long)v_17)) {
    v_17 = (long long)v_23 + -35437LL;
    v_7 = (signed char)((int)(- p_13[2][2][0]) ^ ! ((int)p_13[1][0][0] ^ -76));
    v_5 = (float)((int)p_13[1][1][0] + (int)((char)2.18376131792e+38));
    v = 4294936009LL - (long long)((int)((signed char)v_5) & (int)v_7) * p;
  }
  while_0_break: ;
  if ((int)v_15 >= (int)((unsigned short)(5789.f + ((float)((long)v_17 * p_19[0][1]) - v_21)))) {
    result = -74213370LL;
    result = ~ (p * (result / (p + 201LL)));
  }
  else {
    v_5 = (float)(! (41583LL % ((long long)p_9 % -760877318LL + 687LL)));
    v_7 = (signed char)97;
    result = (v + (long long)v_5) / (long long)((int)(~ v_7) + 52) + (long long)(
             (float)(354990528UL - (unsigned long)1.44716399819e+38) - - v_5);
  }
  return result;
}


