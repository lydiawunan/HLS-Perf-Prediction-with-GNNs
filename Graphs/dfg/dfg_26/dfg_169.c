#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 414400188
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[1][5][2], long p_5,
                unsigned char p_7[3][2][4], long p_11, double p_15)
{
  signed char v_21;
  int v_19;
  signed char v_17;
  long long v_13;
  unsigned long v_9;
  unsigned long v;
  signed char result;
  v_21 = (signed char)p_11;
  v_19 = -15163;
  v_13 = -427382076LL;
  v_9 = 42192UL;
  v = 4177932557UL;
  result = (signed char)121;
  v_17 = (signed char)((long)p_7[1][1][3] + ((p_5 % (long)((int)result + 320) - 1422378020L) >> 6ULL));
  v_9 = ((- v + (unsigned long)v_19) % ((4294967183UL ^ (v_9 - (unsigned long)v_21)) + 494UL)) / (
        (unsigned long)(p_15 / 46949.) + 336UL);
  v_13 = ~ (! ((long long)((int)((signed char)p_15) - (int)v_17) + (v_13 - (long long)p_7[1][1][1])));
  result = (signed char)(((unsigned long long)(-3295094784.f + (float)(- p[0][4][1])) - (
                          (unsigned long long)v % 18446744072646525559ULL - (unsigned long long)(
                          91L % (p_5 + 238L)))) - (unsigned long long)(
                         (long long)((unsigned long)(~ p_7[0][0][0]) ^ 
                                     v_9 / (unsigned long)(p_11 + 516L)) - ~ (
                         v_13 * -34901LL)));
  return result;
}


