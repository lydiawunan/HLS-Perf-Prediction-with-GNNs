#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534385865
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned short p_13, float p_19,
                 signed char p_21)
{
  float v_17;
  long v_15;
  unsigned int v_10;
  unsigned int v_8;
  int v_6;
  unsigned long v_4;
  signed char v;
  unsigned int result;
  v_17 = -2.20276318486e+38f;
  v_15 = -44487L;
  v_10 = 3821307017U;
  v_8 = (unsigned int)p_21;
  v_6 = (int)p_19;
  v_4 = (unsigned long)p_13;
  v = p_21;
  result = 3955285579U;
  if (- ((v_6 + (int)p_19) - 910) < (int)v_17) {
    v = (signed char)(! ((unsigned long)(v_8 * (unsigned int)p_13) - 
                         v_4 / (p + 881UL)));
    v_6 = (int)p;
    v_4 = (v_4 * (unsigned long)p_13 ^ ~ v_4) + (unsigned long)((int)((unsigned short)(
                                                                (float)v_15 - v_17)) << (
                                                                (int)p_13 & 15));
  }
  else {
    result = (unsigned int)p_21;
    v_10 = (unsigned int)(340185.71875f * (float)((int)p_13 % ((int)((unsigned short)3.38835640043e+38) + 256) ^ (
                                                  (int)p_21 & (int)p_21)));
    v_10 = (unsigned int)((float)(27520U & v_10) / (p_19 + 1021.f)) | (
           (unsigned int)(-23492 % ((int)p_21 + 960)) - result * (unsigned int)p_13);
  }
  while ((unsigned long)(result - (unsigned int)(((int)v ^ 48423) << 26UL)) == v_4) {
    v_4 = (unsigned long)v_8 / 4020384378UL;
    v_8 = (unsigned int)((unsigned long)p_13 - ~ (v_4 << (v_4 & 31UL)));
    v = (signed char)(((unsigned long)v_6 + p) % 12925UL ^ p);
    v_4 = (4294967259UL * v_4 << (129U % (v_8 + 640U) & 31U)) << (- v_10 & 31U);
  }
  while_0_break: ;
  return result;
}


