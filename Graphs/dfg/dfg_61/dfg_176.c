#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292381076
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, short p_5, char p_7[1], unsigned short p_11,
                 unsigned char p_15)
{
  int v_21;
  unsigned long long v_19;
  double v_17;
  short v_13;
  long long v_9;
  long v;
  unsigned int result;
  v_21 = -26203;
  v_19 = (unsigned long long)p_11;
  v_17 = 2715289009.5;
  v_13 = (short)((((double)p - v_17) + (double)(36892ULL / (v_19 + 833ULL))) / (double)(
                 (1.84467440737e+19f / (p + 935.f) - (float)(~ p_11)) + 746.f) + (double)(
                 ~ (19793 % ((int)((unsigned short)1.91728790258e+38) + 739)) | ! (
                 (int)p_7[0] * v_21)));
  v_9 = (long long)(- p_15);
  v = (long)(v_9 - (long long)(((int)((float)p_11 * 8.1864541103e+37f) - 937013672) / (
                               (int)v_13 + 591)));
  result = (unsigned int)(- ((long long)(- v) * -95809465037LL + (long long)(
                             p / ((float)p_5 + 816.f) + (float)(! p_7[0]))));
  return result;
}


