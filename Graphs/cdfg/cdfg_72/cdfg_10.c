#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 44443788
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[1][2], long long p_5[3], int p_17)
{
  unsigned short v_19;
  unsigned char v_15;
  unsigned short v_13;
  signed char v_11;
  unsigned int v_9;
  signed char v_7;
  double v;
  float result;
  v_19 = (unsigned short)48050;
  v_15 = (unsigned char)p[0][0];
  v_13 = (unsigned short)p_5[2];
  v_11 = (signed char)-24;
  v_9 = 828509759U;
  v_7 = (signed char)(-127-1);
  v = 9448871604.61;
  result = 1.43745148542e+38f;
  while ((long long)(! (! (- p[0][1]))) == ((p_5[0] + -108936236LL) + (long long)(~ v_7)) % (long long)(
                                           (v_9 / 4294945843U) % (unsigned int)(
                                           ((int)v_11 | 254) + 39) + 49U)) {
    v = (int)v_15 % (((int)v_13 - -128) + 563);
    v_15 = (unsigned char)(- ((int)v_19 - (int)((unsigned short)result)) - (int)v_19);
    v_13 = (unsigned short)((p[0][0] * p[0][0] ^ 104UL) * (unsigned long)p_17);
    v_7 = (signed char)((55267UL % (unsigned long)(v_9 + 669U) - 363UL) / (unsigned long)(
                        143 % ((int)(! v_15) + 223) + 437));
  }
  while_0_break: ;
  result = (float)(p[0][1] % (unsigned long)(- (27668 | (int)((short)v)) + 700));
  return result;
}


