#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106880062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, signed char p_7[5][2], short p_15)
{
  unsigned int v_17;
  float v_13;
  long v_11;
  unsigned char v_9;
  unsigned char v_5;
  long v;
  float result;
  v_17 = (unsigned int)p;
  v_13 = p;
  v_11 = 2729L;
  result = (float)p_7[3][1];
  v_9 = (unsigned char)(- (- ((float)v_17 - p) - 3274705152.f));
  v_5 = (unsigned char)((long long)((unsigned long)((long)p_7[0][0] | (
                                                    (long)v_9 - v_11)) / (
                                    (unsigned long)(- v_13) % ((3289371770UL >> (
                                                                (int)p_15 & 31)) + 705UL) + 842UL)) + 28281LL);
  v = (long)result;
  result = - (p + (float)(v / (long)((int)v_5 + 327)));
  return result;
}


