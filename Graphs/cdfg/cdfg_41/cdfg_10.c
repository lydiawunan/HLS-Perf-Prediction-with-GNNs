#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 406642958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p[4], signed char p_4[3][3][4],
                 long long p_7, char p_9, short p_11)
{
  unsigned int v_21;
  signed char v_19;
  unsigned int v_17;
  long long v_15;
  unsigned long long v_13;
  int v;
  unsigned int result;
  v_21 = 5503U;
  v_19 = (signed char)8;
  v_17 = (unsigned int)p_11;
  v_15 = -1002154701LL;
  result = (unsigned int)p[3];
  if (((long long)p_11 | (p_7 * 5335LL) % (long long)(((int)p_4[2][1][3] | 14401) + 680)) == - (
      (long long)(6416UL % (unsigned long)((int)p_11 + 695)) * (-809LL * v_15))) {
    v = (int)((long long)(4903UL / ((3868633828UL + (unsigned long)v_21) + 775UL)) % (
              (long long)(27048U * result) * (p_7 / (long long)((int)p_9 + 1012)) + 9LL));
    v_13 = (unsigned long long)(65LL - (long long)((int)(! v_19) + (int)p_4[2][2][0] * v));
    result = (unsigned int)(((v_13 / (p[1] + 992ULL)) / (unsigned long long)(
                             v_15 / (long long)(v_17 + 953U) + 876LL)) % (unsigned long long)(
                            (int)p_9 + 459));
  }
  else {
    result = (unsigned int)(! ((unsigned long long)p_7 + 1060638711ULL) | 18446744073708573376ULL);
    v = (int)p_9;
  }
  while (! (! p[0]) < ! (~ p[1]) / (unsigned long long)(- (result / (unsigned int)(
                                                           (int)p_4[0][0][1] + 197)) + 753U)) {
    result = v - 124;
    v = (int)(((18446744073709507258ULL % (p[0] + 926ULL)) * (unsigned long long)result) % (unsigned long long)(
              (int)p_11 + 303));
    result = (unsigned int)(((long long)p_4[2][1][1] / (p_7 + 69LL) - 1202LL) | ~ (
                            -205895263LL & (long long)p_9));
  }
  while_0_break: ;
  return result;
}


