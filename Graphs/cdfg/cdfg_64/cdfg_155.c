#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716803145
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, long p_7[5], int p_9, long long p_17[2],
                  double p_21)
{
  unsigned char v_27;
  short v_25;
  unsigned long v_23;
  unsigned int v_19;
  unsigned char v_15;
  unsigned short v_13;
  unsigned int v_11;
  long long v_5;
  double v;
  unsigned long result;
  v_27 = (unsigned char)161;
  v_19 = 4230U;
  v_15 = (unsigned char)15;
  v_13 = (unsigned short)p_17[0];
  v_11 = 4294908158U;
  v_5 = 356203297LL;
  v = (double)p_17[0];
  result = (unsigned long)p_21;
  if (~ (~ (p % 92L)) > (long)((double)(~ ((long)p_21 + p)) + v)) {
    v_5 = (long long)(59UL % (((unsigned long)(p_7[2] / -23775L) - 3045UL) + 503UL));
    v_19 = (unsigned int)p_17[1];
    v_13 = (unsigned short)p_7[4];
  }
  else {
    v_27 = (unsigned char)((unsigned long)v_13 - ~ result);
    v_27 = (unsigned char)((v_11 >> ((int)v_27 & 31)) / ((unsigned int)(
                                                         -180.541103271 - 
                                                         p_21 / ((double)v_11 + 185.)) + 350U));
    v = (double)(! ((long long)((long)p_9 * -376644672L) - -1000948606LL));
  }
  if ((86LL - (-936999985LL + v_5)) / 3188LL > (long long)((double)((long long)v_27 - p_17[0]) - (
                                                           -7921761854.1 + (double)p_17[0]))) {
    v_5 = (long long)(! v_15);
    v = (double)((v_5 % (long long)(p_7[3] + 164L) + (long long)p_9) & (long long)(
                 - v_11 * (unsigned int)(! v_13)));
    result = (unsigned long)((long)((double)(p * p) + - v) * (170L % (
                                                              ~ p + 499L)));
  }
  else {
    v_25 = (short)-26621;
    v_23 = (unsigned long)(~ ((int)((short)v) / ((int)v_25 + 250)));
    result = (unsigned long)(((p_17[0] - (long long)v_19) - (long long)(
                              p_21 * 586526110.)) ^ ((long long)(~ v_23) + p_17[0]));
  }
  return result;
}


