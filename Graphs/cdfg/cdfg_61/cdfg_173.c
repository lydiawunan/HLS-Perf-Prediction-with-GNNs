#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 379579558
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[2][2][4], int p_4, short p_6,
                       unsigned short p_11, long long p_17)
{
  unsigned short v_19;
  short v_15;
  unsigned long long v_13;
  unsigned long v_9;
  short v;
  unsigned long long result;
  v_19 = (unsigned short)p_4;
  v_15 = (short)-6904;
  v_13 = 915584475ULL;
  v_9 = (unsigned long)p_17;
  v = (short)p_11;
  while ((unsigned long long)(43682UL / (237252288UL % (v_9 + 503UL) + 731UL)) / (
         ((unsigned long long)(~ p_11) + (v_13 - 18446744073225262536ULL)) + 688ULL) != (unsigned long long)(
         ((long long)(! v_15) + p_17 / 219LL) * (long long)(- ((int)p_11 * (int)p_11)))) {
    v_19 = (long)v_19 - -451005495L;
    v_9 = 1865UL ^ (55798UL & (v_9 >> ((int)p_11 & 31)));
    v = (short)((unsigned long)p_4 * (p[1][1][0] * 4294907607UL) - (814773588UL ^ 
                                                                    v_9 / (
                                                                    p[0][1][1] + 229UL)));
    v_15 = (short)(- ((float)(p[0][1][0] | (unsigned long)p_4) - -4.35408520978e+37f));
  }
  while_0_break: ;
  if ((int)p_6 + - (-38 % ((int)v + 680)) <= (int)7251134976.f) result = (unsigned long long)p[0][0][1];
  else result = (unsigned long long)p_4;
  return result;
}


