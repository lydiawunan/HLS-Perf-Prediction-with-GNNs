#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115016724
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned int p_4, long p_6, long p_8, double p_10[4])
{
  unsigned char v_27;
  unsigned short v_25;
  int v_23;
  unsigned long v_21;
  unsigned char v_19;
  int v_17;
  unsigned char v_15;
  short v_13;
  int v;
  short result;
  v_27 = (unsigned char)203;
  v_25 = (unsigned short)p_6;
  v_23 = (int)p_6;
  v_21 = 55298UL;
  v_19 = (unsigned char)34;
  v_17 = (int)p_6;
  v_15 = (unsigned char)p_8;
  while ((float)v_23 < (float)((unsigned long)(~ p_4) % (v_21 + 578UL)) + (
                       (float)v_25 - - p)) {
    result = (int)v_27 - 25;
    v = (int)p_6;
    v_27 = (unsigned char)((long)(- v) - - (p_6 | (long)result));
    v_25 = (unsigned short)(~ p_4 & p_4);
  }
  while_0_break: ;
  if ((double)(p_6 - (long)(- (-4876928288.32 * (double)v_17))) > (double)(
                                                                  4588271104.f * (float)(- v_15)) - (
                                                                  (double)v_19 - 
                                                                  p_10[2] * (double)v_21)) {
    result = (short)((double)(((unsigned long)p_4 * 504216658UL) * (unsigned long)(
                              p_6 * p_8)) - p_10[1]);
    result = (short)((long long)result - ((long long)(p - 2.47507968398e+38f) >> (
                                          ((long long)p + -991680936LL) & 63LL)));
  }
  else {
    v_13 = (short)(~ ((long)p_10[3] << ((p_8 - (long)v_15) & 31L)));
    v = (int)(~ (- p_4) % (unsigned int)((int)v_13 + 765));
    result = (short)(v << (! p_4 / 69U & 31U));
  }
  return result;
}


