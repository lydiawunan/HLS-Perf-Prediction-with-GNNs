#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1046464181
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[5][1][4], short p_4, short p_6,
                       unsigned char p_9[4][1][2], float p_11)
{
  float v_15;
  unsigned char v_13;
  signed char v;
  unsigned long long result;
  v_15 = p_11;
  v_13 = p_9[0][0][0];
  if ((((long long)v_13 & -989041902LL) * 10LL) / 42658LL > (long long)v_15) 
    v = (signed char)(0.f / (p_11 + 22.f));
  else v = (signed char)-36;
  result = (unsigned long long)(! (p[0][0][0] * (unsigned long)p_4) / (unsigned long)(
                                (int)p_6 / (((int)v - (int)p_9[0][0][1]) + 663) + 187));
  return result;
}


