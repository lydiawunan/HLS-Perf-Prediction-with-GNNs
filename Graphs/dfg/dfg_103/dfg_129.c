#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947516940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, float p_4, double p_9[5][5][2], signed char p_13,
           short p_15)
{
  unsigned short v_11;
  signed char v_7;
  unsigned short v;
  double result;
  result = 939.076305557;
  v_11 = (unsigned short)p_15;
  v_7 = (signed char)(-710102417 + (int)(~ p_13));
  v = (unsigned short)(! (- (3943 / ((int)v_7 + 100) + (int)v_7 / -109)));
  result = (double)p - - (((double)p_4 - result) - (double)(~ v));
  return result;
}


