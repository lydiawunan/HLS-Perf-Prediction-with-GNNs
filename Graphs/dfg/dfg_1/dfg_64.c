//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 45580470
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, float p_7, unsigned char p_11,
                 float p_13, unsigned long long p_15[1][5][4])
{
  unsigned char v_17;
  long long v_9;
  signed char v_5;
  unsigned short v;
  unsigned int result;
  v_17 = (unsigned char)171;
  v_9 = -9408LL;
  v_5 = (signed char)v_17;
  v = (unsigned short)(0L ^ (-90577L >> ((p_15[0][1][1] * (unsigned long long)v_9 - (unsigned long long)(
                                          p_7 + (float)v_9)) & 31ULL)));
  v_5 = (signed char)(0.f + (p_7 / ((p_7 + p_7) + 1005.f)) / ((float)(
                                                              (int)(- p_11) + (
                                                              (int)((unsigned short)p_13) | (int)v)) + 706.f));
  result = (unsigned int)(3260135983UL % ((unsigned long)(- ((float)(
                                                             (unsigned long long)v + p) * (
                                                             (float)v_5 - p_7))) + 522UL));
  return result;
}


