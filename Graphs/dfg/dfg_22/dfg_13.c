#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 242123050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, double p_9[2], short p_11, long long p_13)
{
  unsigned long v_15;
  float v_7;
  double v_5;
  unsigned long long v;
  signed char result;
  v_15 = (unsigned long)p_11;
  v = (unsigned long long)(4294910546UL * ~ v_15);
  v_7 = (float)(- v);
  v_5 = (double)(! ((long long)(- p_9[0]) / ((long long)p_11 / (p_13 + 576LL) + 881LL)));
  result = (signed char)(v & (unsigned long long)(- ((int)p + (int)((signed char)v_5)) ^ 
                                                  -539716505 % ((int)v_7 + 86)));
  return result;
}


