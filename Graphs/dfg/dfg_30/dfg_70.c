#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448892735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned short p_9[1][4])
{
  long v_7;
  int v_5;
  unsigned short v;
  float result;
  v_7 = 60157L;
  v_5 = (int)p;
  v = p_9[0][3];
  result = 4.89799148928e+37f;
  v = (unsigned short)((((unsigned long)(v_7 / (long)((int)p_9[0][0] + 29)) - 3503275997UL) ^ (unsigned long)(
                        (int)(! p) / ((int)v % ((int)v + 159) + 715))) + 57116UL);
  v_7 = (long)-429.956298828f;
  v_5 = (int)(- ((float)((int)p_9[0][3] >> ((int)p_9[0][2] * v_5 & 15)) * (
                 - result / 18882.f)));
  result = (float)((int)v * (((int)p >> (! v_5 & 15)) << (v_7 & 31L)));
  return result;
}


