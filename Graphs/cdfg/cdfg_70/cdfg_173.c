#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 550949201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, unsigned long p_11, float p_13, unsigned long p_15,
              int p_19)
{
  char v_27;
  char v_25;
  unsigned char v_23;
  float v_21;
  unsigned short v_17;
  unsigned long v_9;
  char v_7;
  long v_4;
  long v;
  long long result;
  v_27 = (char)p_19;
  v_25 = (char)p_15;
  v_23 = (unsigned char)p_19;
  v_21 = (float)p_19;
  v_7 = (char)6;
  result = (long long)p_13;
  while ((unsigned long long)(~ v_23) <= (unsigned long long)(((unsigned long)v_25 * p_15) * (unsigned long)(
                                                              -648892710L * (long)p)) / (
                                         ((unsigned long long)p_15 % 18446744072981531756ULL) / 18446744073709551493ULL + 108ULL)) {
    v_7 = (int)v_27 / 86;
    v_17 = (unsigned short)v_21;
    v_21 = (float)p_11;
    v_23 = (unsigned char)(((18446744072714676446ULL * (unsigned long long)v_7) / (unsigned long long)(
                            result + 31LL)) / (unsigned long long)((p_15 % 178UL) % (unsigned long)(
                                                                   (int)v_17 + 354) + 876UL));
  }
  while_0_break: ;
  if (73 == - (-27 - (int)((char)v_21)) / 123) {
    v_4 = (long)(- (((int)((char)p) * (int)v_7) * 7050));
    v = v_4;
    result = (long long)v;
  }
  else {
    v_17 = (unsigned short)65436;
    v_9 = (unsigned long)((double)((float)p_11 / (p_13 + 672.f) + (float)(
                                   (unsigned long)p + p_15)) / (((double)(
                                                                 409697955L + (long)v_17) + (
                                                                 3.39479477922e+38 - (double)p_19)) + 563.));
    result = (long long)v_9;
  }
  return result;
}


