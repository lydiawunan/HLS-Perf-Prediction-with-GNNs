#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 6313573
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, short p_7[1], int p_9, unsigned char p_13[1][2])
{
  short v_11;
  long long v_5;
  float v;
  int result;
  v_11 = (short)9935;
  v = 9154430976.f;
  result = (int)(44179069U % (unsigned int)(((int)p_13[0][0] + (int)v_11) / (
                                            (int)(- v / -32930.f) + 813) + 963));
  v_5 = (long long)v_11;
  v = (float)((unsigned long)p + ~ (175071144UL % (unsigned long)((int)p_7[0] + 800) + (unsigned long)p_9));
  result = (int)((long long)(result << ((int)v & 31)) / (! ((long long)(
                                                            23 | (int)p) / (
                                                            v_5 + 952LL)) + 715LL));
  return result;
}


