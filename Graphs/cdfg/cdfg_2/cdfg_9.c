#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1002531498
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, long long p_5, signed char p_7,
                long long p_9[5][1][4], unsigned long long p_15)
{
  unsigned char v_23;
  long long v_21;
  float v_19;
  signed char v_17;
  float v_13;
  unsigned short v_11;
  unsigned long long v;
  signed char result;
  v_23 = (unsigned char)p;
  v_21 = -528577155LL;
  v_19 = -779.135864258f;
  v_17 = (signed char)p_9[0][0][3];
  v_11 = (unsigned short)16396;
  v = (unsigned long long)p;
  result = (signed char)p_5;
  while (((unsigned long long)(- v_19) / (! p_15 + 852ULL)) % (unsigned long long)(
         (v_21 + (long long)p_7) * (p_9[1][0][3] | -13528LL) + 488LL) != 15995ULL) {
    v_17 = (int)v_23 | 21731;
    v_13 = (float)v_17;
    v = (unsigned long long)((float)(! ((int)p_7 - (int)p_7)) * ((float)(
                                                                 (int)v_17 * (int)v_17) / (
                                                                 (v_13 + 3380884480.f) + 967.f)));
    v_21 = p_9[3][0][3] * ~ (~ p_5);
  }
  while_0_break: ;
  if (56ULL + - (p_15 / (unsigned long long)((int)result + 354)) > (unsigned long long)(
      90LL % (- p_5 + 331LL))) {
    v = (unsigned long long)(-67 % ((int)(! p) + 120) << (- p_5 & 31LL));
    result = (signed char)v;
  }
  else {
    v_13 = (float)v;
    v = (unsigned long long)(((long long)p_7 * (p_9[2][0][1] + (long long)v_11)) * (long long)(
                             (v_13 + (float)p_15) * (float)(~ v_17)));
    result = (signed char)(~ v);
  }
  return result;
}


