#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340507100
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, double p_7, char p_9, signed char p_13[1], int p_15)
{
  double v_27;
  int v_25;
  long long v_23;
  unsigned int v_21;
  float v_19;
  unsigned int v_17;
  int v_11;
  unsigned short v_5;
  unsigned int v;
  float result;
  v_27 = -6082553437.84;
  v_25 = (int)p_9;
  v_23 = (long long)p_13[0];
  v_21 = (unsigned int)p;
  v_19 = -832.121520996f;
  v_17 = (unsigned int)p_9;
  result = 2.98833640303e+38f;
  while (0 >= (long long)(0 - (unsigned long)(54U & ~ v_21))) {
    v_17 = v_25 + -90;
    v_19 = (float)(- v_27);
    v_23 = -309172573LL;
    v_21 = (unsigned int)((unsigned long)p_13[0] - 4073384179UL % (unsigned long)(
                                                   ! p_15 + 786));
  }
  while_0_break: ;
  if ((long long)(((double)((int)((signed char)1.44099979157e+38f) >> 4) - (
                   (double)p_13[0] - 689.698793138)) + (double)p_15 * (
                                                       -47. * p_7)) < 
      (long long)((v_17 - (unsigned int)v_19) - ~ v_21) - ! v_23) {
    v_5 = (unsigned short)p_7;
    v = (unsigned int)(0 / ((int)(~ v_5) + 562));
    result = (float)v;
  }
  else {
    v_11 = (int)(- (- result));
    result = (float)(! (((int)p_9 % (v_11 + 463)) / 59));
    result = result;
  }
  return result;
}


