#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 832171517
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long p_7, long long p_13, short p_19, char p_21)
{
  char v_35;
  float v_33;
  long v_31;
  unsigned long long v_29;
  short v_27;
  unsigned char v_25;
  char v_23;
  int v_17;
  unsigned long long v_15;
  float v_11;
  long long v_9;
  float v_4;
  long v;
  short result;
  v_35 = (char)p;
  v_33 = (float)p_13;
  v_31 = p_7;
  v_29 = (unsigned long long)p_19;
  v_27 = (short)30;
  v_25 = (unsigned char)33;
  v_23 = (char)-83;
  v_9 = p_13;
  v = -467869023L;
  if (((long long)((int)p_21 - (int)p_19) * p_13) * (long long)(- p_7 << (
                                                                ((long long)v_25 ^ p_13) & 31LL)) <= (long long)(- (
      (long)(p / 1.84467440731e+19) + (p_7 & (long)p_19)))) {
    v_17 = (int)1.16927665434e+38f;
    v_23 = (char)((unsigned long long)-478960211.863 ^ (unsigned long long)(
                                                       (int)v_25 - (int)v_27) % (
                                                       v_29 + 371ULL));
    v_15 = (unsigned long long)((unsigned long)p & ((unsigned long)p_19 - (
                                                    4294927902UL - (unsigned long)p_7)));
  }
  else {
    v_15 = (unsigned long long)(! ((int)((char)v_33) * (int)v_35));
    v_11 = (float)((long long)(- v_31 * ~ v) + (-11381LL - v_9));
    v_17 = (int)(((float)(! p_7) / (- v_11 + 420.f)) * (float)(p_13 / (long long)(
                                                               (-3142 + (int)((short)1.26646590468e+38f)) + 870)));
  }
  if ((((unsigned long long)v_23 | v_15) * 40225ULL) * (unsigned long long)p_13 > ~ (
      (unsigned long long)(! p_13) - (v_15 + (unsigned long long)p_7))) {
    v_4 = (float)((unsigned long long)(((long)p + p_7) + -116L) * 18446744073239469174ULL);
    v = 0L;
    result = (short)v;
  }
  else {
    v_11 = (float)(v_15 - ((unsigned long long)((unsigned int)v_17 % 4294937327U) - 19887ULL));
    v_9 = ((long long)((long)v_11 ^ p_7) + (p_13 | p_13)) % -24080LL;
    result = (short)(1588820223LL / (v_9 + 383LL));
  }
  return result;
}


