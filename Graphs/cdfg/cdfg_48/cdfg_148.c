#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 498199348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, float p_7, double p_9, signed char p_11,
                   long long p_13)
{
  signed char v_21;
  char v_19;
  unsigned short v_17;
  double v_15;
  unsigned long long v_4;
  signed char v;
  unsigned short result;
  v_21 = (signed char)-84;
  v_19 = (char)p_11;
  v_17 = (unsigned short)p;
  v_15 = (double)p_11;
  if ((unsigned long long)(p_13 * (long long)((unsigned int)p_11 * 4294959109U | (unsigned int)(
                                              (float)p_11 / (p + 901.f)))) < 
      (unsigned long long)((int)((unsigned short)(- v_15)) + (int)v_17) - 
      ((unsigned long long)v_19 % 18446744072894338460ULL) * (18446744073709503740ULL & (unsigned long long)v_21)) {
    result = (unsigned short)(! ((int)p_9 % (-56 * (int)p_11 + 378)));
    v_4 = (unsigned long long)((float)result - - (p_7 - (float)result));
    v = (signed char)(~ ((long)((float)v_4 / (p + 84.f)) + 31980L));
  }
  else v = (signed char)93;
  result = (unsigned short)v;
  return result;
}


