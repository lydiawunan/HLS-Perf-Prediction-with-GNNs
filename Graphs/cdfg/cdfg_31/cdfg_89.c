#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156269525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p[1], long long p_4, short p_6, double p_8,
                   signed char p_10)
{
  char v_21;
  float v_19;
  float v_17;
  long v_15;
  signed char v_13;
  char v;
  unsigned short result;
  v_21 = (char)p_6;
  v_19 = (float)p_6;
  v_17 = (float)p_8;
  v_13 = (signed char)p_6;
  result = (unsigned short)p[0];
  while (! (43 % ((int)((signed char)(- v_17)) + 242)) < - ((int)p_10 % (
                                                            (int)p_10 / (
                                                            (int)((signed char)p_8) + 222) + 701))) {
    result = (long long)v_21 - -5618LL;
    v_21 = (char)p[0];
    v_21 = (char)(((long)v_21 ^ p[0]) - -9396L);
    v_17 = (float)((((int)v_19 - 52681) ^ (int)(v_19 - v_19)) - ! (5324 + (int)p_6));
  }
  while_0_break: ;
  if (! (((long)v_13 + 16426L) * p[0]) != 54686L) {
    result = (unsigned short)((long long)(- (~ p_10)) % (7033485130LL * ! p_4 + 791LL));
    result = (unsigned short)(- (((int)result ^ (int)((unsigned short)p_8)) % 40006));
    result = (unsigned short)((long long)(! result) + (((long long)p[0] - p_4) - (long long)(
                                                       (int)p_6 % ((int)result + 1003))));
  }
  else {
    v_15 = (long)((261707766 / (((int)p_10 + 127) + 456)) % ((0 - (int)(- p_8)) + 83));
    v = (char)((27 / ((int)(- p_6) + 605)) % (- (4730 - (int)result) + 237));
    result = (unsigned short)((-993702472LL * (long long)((int)p_10 * (int)v)) / (long long)(
                              ((long)v_13 - v_15) + 700L));
  }
  return result;
}


