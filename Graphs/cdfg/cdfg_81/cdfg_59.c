#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88961586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned char p_5, unsigned long p_7, unsigned short p_9,
           long long p_15)
{
  unsigned char v_23;
  signed char v_21;
  unsigned short v_19;
  float v_17;
  unsigned short v_13;
  long long v_11;
  float v;
  double result;
  v_21 = (signed char)p_9;
  v_19 = (unsigned short)p_5;
  v_11 = 197751847LL;
  v = (float)p_15;
  if ((long long)v_19 > 203LL - p_15 / ((1512LL - (long long)p_5) + 368LL)) {
    result = (double)((long long)((unsigned int)((int)v_19 % ((int)v_21 + 206)) % 64182U) % (
                      ((long long)p_5 % 51744LL - -47LL) + 104LL));
    v_17 = (float)result;
    v = ((v - v_17) - - p) - - (p - 64.f);
  }
  else {
    v_23 = (unsigned char)(((unsigned long long)v_19 % 34123ULL) * (unsigned long long)p - (unsigned long long)(
                           10044UL % ((unsigned long)v_21 % (p_7 + 642UL) + 806UL)));
    v = (float)(3197362987ULL / (unsigned long long)(! (721493132 + (int)v_23) + 411));
    result = (double)(~ ((p_7 + (unsigned long)v_19) - 4294967245UL));
  }
  while ((long long)v * (((long long)p - 49564LL) + (long long)p_5) == (long long)(
         0UL % (unsigned long)((int)p_9 + 448))) {
    v_13 = v_11 | 186LL;
    result = (double)p_15;
    v_11 = (long long)v_13;
    v = (float)p_7;
  }
  while_0_break: ;
  return result;
}


