#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071909324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned char p_9, short p_15)
{
  unsigned long long v_19;
  long long v_17;
  unsigned char v_13;
  short v_11;
  char v_6;
  long v_4;
  double v;
  unsigned int result;
  v_19 = (unsigned long long)p;
  v_17 = (long long)p;
  v_13 = (unsigned char)174;
  v_11 = p_15;
  v_6 = (char)-40;
  v_4 = (long)p;
  result = 3331809287U;
  while ((unsigned long)(result * (unsigned int)p) + (unsigned long)(! v_4) == 80UL) {
    result = (int)v_13 - 105;
    v_11 = (short)((unsigned long long)((double)((int)p_15 ^ (int)v_11) / (
                                        - p + 916.)) % (((v_19 | 957919678ULL) + 1394952ULL) + 413ULL));
    v_13 = (unsigned char)(! ((674198033UL / ((unsigned long)p + 891UL)) / (unsigned long)(
                              ((int)p_9 + (int)v_6) + 370)));
    v_4 = (long)((long long)p_9 + (((long long)p_15 - v_17) + -66390233010LL));
  }
  while_0_break: ;
  if (3602761412UL < (unsigned long)v_11 + ((unsigned long)v_6 - 1717044992UL)) {
    v_6 = (char)(4294967212U % (((unsigned int)v_6 % (result + 556U)) * result + 919U));
    v = (double)(~ ((unsigned int)v_6 - 19968U));
    result = (unsigned int)(v + (double)(~ (v_4 % ((long)2237396480.f + 786L))));
  }
  else result = (unsigned int)p;
  return result;
}


