#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 938732642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned char p_4, long p_11, float p_13, double p_17)
{
  float v_23;
  unsigned int v_21;
  unsigned long v_19;
  unsigned long long v_15;
  unsigned short v_9;
  unsigned char v_7;
  long long v;
  int result;
  v_23 = -1.55720055573e+38f;
  v_21 = (unsigned int)p;
  v_19 = 5439UL;
  v_15 = 38044ULL;
  if ((unsigned long)p_13 >= 4294967265UL / (v_19 + 293UL)) {
    result = (int)v_19;
    v = (long long)((double)p_4 * ((double)(p_13 - (float)v_15) / (p_17 / (double)(
                                                                   p_13 + 103.f) + 401.)));
    v_9 = (unsigned short)36161;
  }
  else {
    result = (int)v_23;
    v_9 = (unsigned short)p;
    v = (long long)v_21;
  }
  while (~ (result % ((int)p + 839)) / ((int)(! p_4) + 139) <= result) {
    v_7 = (long long)v_9 / (v % 4294935754LL + 138LL);
    v = (long long)(result % ((int)v_7 + 464));
    v /= (long long)(p_11 + 276L);
    result = ! (~ (41958 * (int)p_4));
  }
  while_0_break: ;
  return result;
}


