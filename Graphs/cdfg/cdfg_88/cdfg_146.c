#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 678673171
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, long long p_5, long p_7, short p_9[2][4],
                  double p_13[4][2])
{
  short v_25;
  unsigned int v_23;
  float v_21;
  signed char v_19;
  long v_17;
  double v_15;
  long v_11;
  unsigned long v;
  unsigned char result;
  v_25 = (short)-16615;
  v_23 = 3563403162U;
  v_21 = -9109254144.f;
  v_19 = (signed char)91;
  v_17 = -184214040L;
  v_15 = (double)p_5;
  v_11 = p_7;
  v = (unsigned long)p;
  while ((long long)(((double)v_11 + - p_13[3][0]) / ((v_15 + (double)(
                                                       (long)p_13[2][1] * v_17)) + 912.)) > 
         (p_5 / 3558026769LL) / ((long long)((double)v / (p_13[3][0] + 304.)) + 635LL) + (long long)v_19) {
    v_11 = v_21 + 210.f;
    v_19 = (signed char)((768.366210938 - v_15) + p_13[3][0]);
    v_17 = (long)(((unsigned long)((unsigned int)v_15 + v_23) + (unsigned long)(
                   -28898L * (long)-1.22838166171e+38)) * (unsigned long)(
                  (long)((int)v_19 ^ (int)v_25) - p_7 * 59203L));
    v_15 = (double)((int)((unsigned short)p_13[0][1]) / 42364);
  }
  while_0_break: ;
  result = (unsigned char)(- ((unsigned long)p * v));
  return result;
}


