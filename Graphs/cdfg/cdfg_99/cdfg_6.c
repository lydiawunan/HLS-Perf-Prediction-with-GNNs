#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 125147169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, long p_9, long long p_11, long long p_13, float p_19)
{
  char v_17;
  short v_15;
  long long v_6;
  float v_4;
  unsigned short v;
  float result;
  v = (unsigned short)10261;
  v_17 = (char)p_11;
  if ((long long)(5 & (int)((signed char)-2.06436163877e+38)) > ((long long)(
                                                                 (int)p % (
                                                                 (int)p + 728)) - (
                                                                 555220727LL - (long long)v_17)) / 560811682LL) {
    v_6 = (long long)(! ((long)(-877465461 - (int)p) - - p_9));
    v_4 = (float)(unsigned short)13435;
    result = (float)((long long)((int)v | (int)((unsigned short)2.83195281624e+38)) - ~ (
                     (long long)v_4 - v_6));
  }
  else {
    v_17 = (char)p_19;
    v_15 = (short)(- (~ (p_13 * (long long)v_17)));
    result = (float)(57LL % ((! p_11 << (p_13 * (long long)v_15 & 63LL)) + 224LL));
  }
  return result;
}


