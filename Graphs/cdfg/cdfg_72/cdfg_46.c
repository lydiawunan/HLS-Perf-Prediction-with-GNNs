#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170936741
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, signed char p_9[4][4], int p_13,
                       float p_15, long long p_17)
{
  float v_23;
  signed char v_21;
  unsigned char v_19;
  float v_11;
  int v_6;
  short v_4;
  long long v;
  unsigned long long result;
  v_23 = 516.771240234f;
  v_21 = (signed char)-47;
  v_19 = (unsigned char)p_9[1][2];
  v_11 = 1.10644195222e+38f;
  v_6 = -38853;
  result = (unsigned long long)p_13;
  while (p_15 >= (float)(! ((long long)v_6 - p_17 / -965308647LL))) {
    v_19 = (unsigned int)v_19 * 4294916568U;
    v = (long long)((16781ULL & (unsigned long long)v_21 * 18446744073135688386ULL) + (unsigned long long)v_23);
    v_11 = (float)((long long)(~ (384708192U % (p + 811U))) ^ - (932320018LL / (
                                                                 v + 950LL)));
    v_6 = p_13;
  }
  while_0_break: ;
  if ((float)((int)(! p_9[0][1]) | (159 - (int)((unsigned char)v_11)) * ! p_13) > v_11) {
    v = 398196995LL;
    result = (unsigned long long)v;
  }
  else {
    v_6 = -34928;
    v_4 = (short)(~ result % (unsigned long long)(p + 190U) - (unsigned long long)-3.2285561078e+38);
    result = (unsigned long long)((((int)v_4 - 51) - (49157 + (int)((unsigned short)-780.482231218))) & ! (! v_6));
  }
  return result;
}


