#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109289213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, double p_13, int p_17)
{
  signed char v_15;
  long v_11;
  long long v_9;
  unsigned char v_7;
  short v_5;
  long v;
  unsigned long long result;
  v_15 = (signed char)2;
  v_9 = 57271LL;
  v_5 = (short)12331;
  v = (long)p_17;
  result = 18446744073600207805ULL;
  v_7 = (unsigned char)p_17;
  while ((long)(-9.10913134678e+37f / ((float)v + 932.f)) / -902350650L <= (
         ! p | (long)(-89 % ((int)(- v_5) + 373)))) {
    v_11 = v_9 + 256631040LL;
    result = (unsigned long long)(((double)v_7 + (double)p / (p_13 + 91.)) / (
                                  (double)(! ((int)v_15 | (int)v_7)) + 383.));
    v_7 = (unsigned char)v_11;
    v = (long)8972401664.f;
  }
  while_0_break: ;
  return result;
}


