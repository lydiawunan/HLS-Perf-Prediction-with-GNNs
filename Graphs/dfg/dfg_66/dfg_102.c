#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249345754
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p)
{
  unsigned char v_7;
  signed char v_4;
  float v;
  short result;
  v_7 = (unsigned char)(! -647542338LL);
  v_4 = (signed char)1.62324991836e+38f;
  v = (float)(- (((unsigned long long)((unsigned long)v_4 / (p + 818UL)) + 
                  (unsigned long long)v_7 % 942027689ULL) & (unsigned long long)(
                 p / 63UL + p / (p + 499UL))));
  result = (short)v;
  return result;
}


