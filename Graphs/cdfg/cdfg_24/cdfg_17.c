#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 793414384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, float p_4, unsigned long long p_6, unsigned short p_11,
        float p_13[5])
{
  short v_23;
  float v_21;
  char v_19;
  short v_17;
  int v_15;
  char v_9;
  unsigned long v;
  int result;
  v_23 = (short)p_11;
  v_21 = (float)p_11;
  v_19 = (char)-38;
  result = (int)p_4;
  if ((int)(- v_21 / ((float)(((int)p_11 - (int)v_23) / ((int)p_4 + 172)) + 977.f)) > result) {
    v_9 = (char)result;
    v = (unsigned long)(- ((int)v_9 + 6623) + (int)(- (- p_11)));
    result = (int)((float)(! p_6 / ((unsigned long long)(- p_4) + 678ULL)) / (
                   ((float)v + p_4) * (float)((int)v_9 / -9060) + 838.f));
  }
  else {
    v_17 = (short)(! ((int)(! p_11) - (int)v_19 / 105));
    v_15 = (int)(! v_17);
    result = (int)((unsigned long long)((unsigned long)p_13[2] * 63090UL - (unsigned long)(- p_13[4])) & 
                   25825560ULL % ((unsigned long long)v_15 % (p_6 + 348ULL) + 670ULL));
  }
  result = (int)(- p + - p) << (((int)(102.f * p) + ((int)p_4 - result)) & 31);
  return result;
}


