#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 565304156
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned long p_7[1][3][1], long long p_11)
{
  unsigned short v_13;
  unsigned int v_9;
  unsigned long long v_4;
  unsigned short v;
  float result;
  v_13 = (unsigned short)p;
  v_4 = 4164302ULL;
  v_9 = (unsigned int)(- v_13);
  result = (float)(short)-21382;
  v = (unsigned short)(((unsigned long long)(v_9 % ((unsigned int)-8.4818836321e+37f + 217U)) | (
                        v_4 - (unsigned long long)(p_7[0][1][0] % 3335197563UL))) * (unsigned long long)(
                       25265LL / (! (~ p_11) + 442LL)));
  result = (float)(- ((unsigned long long)((int)v << (v_4 & 15ULL)) % (
                      (unsigned long long)p / 926318941ULL + 334ULL) + (unsigned long long)(
                      -11142L / ((long)(result - (float)p_7[0][1][0]) + 496L))));
  return result;
}


