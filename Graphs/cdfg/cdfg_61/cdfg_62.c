#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 234495085
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p[5], unsigned long p_15, unsigned int p_17[5][3][1],
                  signed char p_19)
{
  float v_21;
  unsigned short v_12;
  unsigned long long v_10;
  float v_8;
  short v_6;
  signed char v_4;
  unsigned long v;
  unsigned long result;
  v_21 = -117.678726196f;
  v_12 = (unsigned short)43387;
  v_8 = (float)p[3];
  v_6 = (short)p_15;
  v_4 = (signed char)77;
  v = (unsigned long)p_19;
  result = 35966UL;
  if (- (- ((unsigned long long)p[4] / 18446744073709492383ULL)) >= (unsigned long long)(
      (unsigned int)v_12 * 35836U)) {
    v_8 = (float)((unsigned long long)((p_15 / (result + 811UL)) * (unsigned long)(
                                       v_8 * 59637.f)) - ((unsigned long long)(
                                                          (unsigned int)v_6 * p_17[2][1][0]) + 2ULL));
    v = (unsigned long)(0U - (unsigned int)(- p[2]) * 4294903731U);
    v_12 = (unsigned short)(! (- p[1]));
  }
  else {
    v_12 = (unsigned short)p_15;
    v_8 = (float)(- (result * (unsigned long)v_21) % (unsigned long)(
                  (int)p_19 + 773));
    result = (unsigned long)((int)p[3] / ((int)p_19 + 166)) * p_15;
  }
  while (v == 158849244UL) {
    v_8 += (float)((int)v_6 - -42);
    v_10 = (unsigned long long)v_4;
    result = (unsigned long)(- v_12);
    v = (unsigned long)(! v_10);
  }
  while_0_break: ;
  return result;
}


