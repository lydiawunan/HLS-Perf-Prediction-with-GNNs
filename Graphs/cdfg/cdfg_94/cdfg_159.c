#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 547398439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p[4][3], long p_4, long long p_7[5], char p_9,
              unsigned int p_13)
{
  unsigned long long v_25;
  unsigned long v_23;
  unsigned int v_21;
  unsigned short v_19;
  signed char v_17;
  char v_15;
  unsigned char v_11;
  float v;
  long long result;
  v_25 = 18446744073267275784ULL;
  v_23 = 62840UL;
  v_21 = (unsigned int)p_9;
  v_19 = (unsigned short)10639;
  v_15 = p_9;
  v = p[1][2];
  if ((unsigned long long)(1 / (long long)((unsigned long)((int)v_19) * (
                                           v_23 / (unsigned long)(v_21 + 120U)) + 939UL)) > (
      319228684ULL ^ ((51939ULL + v_25) ^ 37338ULL))) {
    v_15 = (char)-66;
    v_17 = (signed char)((unsigned long)((long)(~ p_9) * (p_4 * (long)v_19)) + (
                         50006UL << (((long)v_15 + p_4) & 31L)));
    v = (float)(((unsigned long)(-127L + p_4) + (unsigned long)p_13) * (unsigned long)(
                (unsigned int)p[3][0] * 28442U));
  }
  else {
    v_21 = (unsigned int)(p_4 * 11528L);
    v_19 = (unsigned short)(~ (- (-15505 - (int)p_9)));
    v_17 = (signed char)(-3511.f / ((((float)v_19 + p[2][0]) + (float)v_21) + 734.f));
  }
  if (48077 + (int)v_15 >= (int)v_17) {
    result = (long long)v;
    result = ! ((long long)p_4 - (result & 3628726284LL));
    result = (long long)(- (-437751819L + (long)(p[2][2] / ((float)result + 612.f))));
  }
  else {
    v_11 = (unsigned char)(p_13 >> 14);
    result = ((p_7[2] + (long long)p[2][1]) & (long long)((int)p_9 + 2302)) ^ (long long)(! (
             (int)v_11 % 833410092));
  }
  return result;
}


