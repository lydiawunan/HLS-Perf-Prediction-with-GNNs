#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 542669010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, short p_9, double p_17[5][1], long long p_19[5],
        double p_21[3][4][3])
{
  unsigned long v_23;
  unsigned char v_15;
  int v_13;
  long long v_11;
  long long v_6;
  unsigned long v_4;
  unsigned long v;
  int result;
  v_23 = (unsigned long)p;
  v_13 = -11593;
  v_6 = (long long)p;
  v = (unsigned long)p_19[3];
  result = (int)p_9;
  v_15 = (unsigned char)252;
  if (! (p_19[2] * -495LL) * (long long)((unsigned long)(- p_21[1][2][0]) / 4154258064UL) >= 
      ((long long)(28939UL * v_23) + (v_6 + -9986LL)) / (long long)(! (
                                                                    (unsigned long)v_13 % (
                                                                    v + 643UL)) + 398UL)) {
    v_4 = (unsigned long)-2.90332755096e+38f;
    result = (int)v_4;
    result = (int)(((unsigned long)(562 - result) + (v | v_4)) ^ (unsigned long)(
                   (int)((short)((float)v_6 + p)) % ((int)p_9 + 266)));
  }
  else {
    v_11 = (long long)(11985U / ((unsigned int)(586903309. / (((double)result - p_17[2][0]) + 112.)) + 643U));
    v_4 = (unsigned long)((unsigned long long)(p * (float)(! v_11)) - (
                          (unsigned long long)(v_13 - (int)v_15) - 18446744073709489045ULL));
    result = (int)(((unsigned long)((unsigned int)p_9 % 3483684861U) * (
                    v_4 - v)) * (unsigned long)-525.285460577);
  }
  return result;
}


