#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 187543031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, float p_5, unsigned int p_7)
{
  double v_19;
  float v_17;
  short v_15;
  long long v_13;
  double v_11;
  long v_9;
  unsigned long v;
  short result;
  v_19 = (double)p_5;
  v_13 = (long long)p;
  v_11 = p;
  v_9 = (long)p;
  v = 35509923UL;
  result = (short)15166;
  while ((double)((unsigned long)(- (p + (double)p_5)) * (((unsigned long)p_7 + (unsigned long)v_9) ^ 
                                                          61360UL * v)) > - v_11) {
    v_15 = v_13 + 41835LL;
    v = (unsigned long)(- ((p + v_19) + (double)v_15));
    v_17 = (float)result - -4403535360.f;
    v_9 = (long)(- v_17);
  }
  while_0_break: ;
  result = (short)v;
  return result;
}


