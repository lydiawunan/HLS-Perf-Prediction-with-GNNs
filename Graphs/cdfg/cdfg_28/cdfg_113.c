#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 563711734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, char p_7, unsigned int p_19)
{
  unsigned int v_17;
  signed char v_15;
  int v_13;
  unsigned short v_11;
  float v_9;
  double v_5;
  unsigned long v;
  long result;
  v_17 = (unsigned int)p_7;
  v_15 = (signed char)120;
  v_13 = (int)p_19;
  v_11 = (unsigned short)34189;
  v_9 = (float)p;
  v_5 = (double)p_7;
  v = 12592UL;
  while ((float)((v ^ (unsigned long)v_5) * (unsigned long)((int)p_7 + -42)) * v_9 == 11676.f) {
    v = (long long)v_13 ^ ((long long)v_11 & 35340LL);
    v_13 = (int)(! ((unsigned int)(37852136 + (int)p_7) + (p - p)));
    v_9 = (float)((-68 / ((int)v_15 + 491)) * (int)((double)(v_17 % (
                                                             p_19 + 562U)) * -1296072883.81));
    v_5 = (double)-3.21493371419e+38f;
  }
  while_0_break: ;
  result = (long)((unsigned long long)(v % 4294962174UL) - (6144498ULL >> (
                                                            p & 63U)) * 18446744073362304844ULL);
  return result;
}


