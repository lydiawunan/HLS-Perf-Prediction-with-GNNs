#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 207938669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned short p_4, float p_6, unsigned short p_11,
                unsigned long p_15)
{
  signed char v_13;
  long long v_9;
  long v;
  signed char result;
  v_9 = 189075331LL;
  v = (long)p_4;
  v_13 = (signed char)(((- p_6 - 962076864.f) / ((float)(- v) + 19.f)) * (float)p_15);
  v = (long)((unsigned long long)(~ (~ (v_9 + 3622LL))) * ((4294918221ULL + 
                                                            1070123151ULL / (unsigned long long)(
                                                            (int)p_11 + 535)) + (unsigned long long)(! v_13)));
  result = (signed char)v;
  result = (signed char)(p / (long)(((int)result / ((int)(! p_4) + 223) + (int)(
                                     0.f - 23877.f * p_6)) + 220));
  return result;
}


