#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274618697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, double p_5, double p_7, signed char p_9,
           signed char p_17[2])
{
  float v_19;
  short v_15;
  unsigned long v_13;
  unsigned int v_11;
  long v;
  double result;
  v_19 = (float)p_9;
  v_15 = (short)30680;
  v_13 = (unsigned long)p_5;
  v_11 = (unsigned int)p_7;
  v = (long)p_17[1];
  while (29. - (-3751600883.38 / (p_7 + 99.)) / ((double)p_9 + 623.) < (double)(~ (
         (unsigned long)v_11 ^ (v_13 + 402178553UL)))) {
    v_13 = (unsigned long)(((int)((signed char)(- v_19)) % ((int)(! p) + 562)) % (
                           ((int)(! p_17[1]) - ((int)p_17[1] + (int)((signed char)p_5))) + 946));
    v = (long)(- (- p_5 - (double)v_15));
    v_11 = (unsigned int)(((int)(- p_7) + -7 / ((int)p_17[1] + 216)) % 12);
  }
  while_0_break: ;
  result = (double)v;
  return result;
}


