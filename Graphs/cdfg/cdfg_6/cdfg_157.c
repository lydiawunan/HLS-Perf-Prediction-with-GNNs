#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 86484777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long long p_5[1][3][4], short p_7,
                long long p_11, float p_19)
{
  long v_17;
  unsigned short v_15;
  long long v_13;
  unsigned int v_9;
  long v;
  signed char result;
  v_17 = (long)p;
  v_15 = (unsigned short)p_19;
  v_13 = -54383LL;
  v_9 = (unsigned int)p;
  while (59028ULL * (unsigned long long)v_13 <= (unsigned long long)p_11) {
    v_9 = (long long)v_17 + ((long long)v_15 & -20474LL);
    v_15 = (unsigned short)(~ (- p_5[0][0][3]) * (unsigned long long)p_7);
    v_17 = (long)(- (95LL + ~ p_11));
    v_13 = (long long)p_19;
  }
  while_0_break: ;
  if ((long long)(! (v_9 % 44156601U)) == (long long)(- (-7161920340.58 / (
                                                         (double)p_7 + 766.))) % (
                                          -123784754LL * ~ p_11 + 937LL)) {
    result = (signed char)85;
    v = 543524112L;
    result = (signed char)((long)((int)result | (int)result) + ((long)(
                                                                (int)((short)p) & -11596) + 
                                                                45370L * v));
  }
  else {
    v = (long)(- p_5[0][2][1]);
    result = (signed char)(p_5[0][1][3] / (unsigned long long)(((int)((short)(
                                                                (float)v * -2151546880.f)) - (int)(- p_7)) + 545));
  }
  return result;
}


