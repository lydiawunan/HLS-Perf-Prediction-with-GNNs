#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 153008954
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p[1][5][1], short p_11, signed char p_13,
         unsigned long p_15[5][2][2], int p_19[5][2])
{
  unsigned short v_17;
  float v_9;
  unsigned char v_7;
  float v_4;
  short v;
  long result;
  v_9 = -549.071228027f;
  v_7 = (unsigned char)156;
  v_4 = -151.950668335f;
  v_17 = (unsigned short)p_15[3][0][0];
  v_7 = (unsigned char)((unsigned long)(- p_13) - p_15[2][1][1] / (unsigned long)(
                                                  ((int)((float)v_7 * v_4) - 
                                                   (int)v_17 * p_19[0][1]) + 863));
  v = (short)((((unsigned long long)(- v_7) / (p[0][2][0] + 499ULL)) * (unsigned long long)(
               (float)(- p[0][3][0]) / (v_9 / 10930.f + 708.f))) % 267ULL);
  result = (long)((int)v - (int)((short)(- (580886272.f - (v_4 + (float)p[0][0][0])))));
  return result;
}


