#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600584953
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned short p_4,
                       unsigned long long p_6, long long p_11[4][5][4])
{
  double v_19;
  unsigned long long v_17;
  float v_15;
  double v_13;
  unsigned long long v_9;
  signed char v;
  unsigned long long result;
  v_19 = (double)p;
  v_17 = (unsigned long long)p_4;
  v_15 = 9753984000.f;
  v_13 = (double)p_4;
  v = (signed char)(((unsigned long long)(v_15 - -7203.f) - ! (v_17 << 46)) % (unsigned long long)(
                    ((long long)((unsigned int)(- v_19) % 12466U) - 5717LL) + 645LL));
  v_9 = (unsigned long long)(- (- (- (-3.39500500313e+38 * v_13))));
  result = p_6 % (((unsigned long long)((unsigned long)v - 798244124UL) - 
                   v_9 * (unsigned long long)p_11[0][2][0]) / 66ULL + 1002ULL);
  result = (unsigned long long)((int)(! p)) / ((18446744073709500134ULL | 
                                                11914ULL % (result + 905ULL)) + 509ULL) ^ (unsigned long long)p_4;
  return result;
}


