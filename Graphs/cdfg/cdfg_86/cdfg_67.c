#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150841228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p[2], unsigned short p_5, unsigned int p_9, long p_11,
         signed char p_13)
{
  float v_31;
  short v_29;
  unsigned char v_27;
  unsigned short v_25;
  long v_23;
  unsigned char v_21;
  unsigned int v_19;
  long v_17;
  unsigned short v_15;
  signed char v_7;
  long v;
  long result;
  v_31 = 1.55374552331e+37f;
  v_29 = (short)p_9;
  v_27 = (unsigned char)p[1];
  v_25 = (unsigned short)29430;
  v_21 = (unsigned char)p_13;
  v_19 = (unsigned int)p_5;
  v_15 = (unsigned short)p_9;
  result = 989367723L;
  if ((long long)(- (- (-4635L / (result + 84L)))) != (long long)((unsigned long)p_9 - (unsigned long)p_11) * (
                                                      -37316545LL % (long long)(
                                                      (int)v_21 + 501)) << (
                                                      (int)v_15 / ((64949 | (int)v_29) + 132) & 63)) {
    v_17 = (long)((unsigned int)p[0] * ~ (192U * p_9));
    v_19 = p_9;
    v_15 = (unsigned short)((unsigned long)(- (244037231U / (p_9 + 718U))) - 
                            0UL / (unsigned long)(v_19 / (unsigned int)(
                                                  (int)v_21 + 140) + 1015U));
  }
  else {
    v_15 = (unsigned short)((float)(64 + (int)v_29) + (float)((long)p_13 * p_11) / (
                                                      (-860735168.f + v_31) + 979.f));
    v_23 = (long)v_27 % (-49472L % (long)((int)v_15 + 995) + 148L);
    v_17 = (long)((unsigned long)v_23 + ((unsigned long)(32478U & v_19) ^ (unsigned long)(
                                         -115617789L % (long)((int)v_25 + 424))));
  }
  if ((long)-7.02671353506e+37f > (long)(! p_5) * v_17) result = -676092979L;
  else {
    v_7 = (signed char)(p_11 - (long)(! ((int)p_13 * (int)v_15)));
    v = (long)(((unsigned int)((float)p_5 + -5950736384.f) % ((unsigned int)v_7 % (
                                                              p_9 + 608U) + 39U)) * (unsigned int)5.90434532777e+37f);
    result = (long)p[0] & ~ (67L ^ v);
  }
  return result;
}


