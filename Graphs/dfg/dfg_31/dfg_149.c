#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 838696129
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, short p_5, long long p_7[2], short p_11,
         unsigned long p_13)
{
  float v_9;
  long long v;
  long result;
  v_9 = (float)((long long)(! (14813UL * ~ p_13)) * ! p_7[0]);
  v = (long long)p_5 - (8548LL % ((p_7[1] + (long long)v_9) + 755LL)) % (long long)(
                       (int)(! (- p_11)) + 91);
  result = (long)v;
  result = (long)(4294936673UL - (unsigned long)((long)(- (-1.334031492e+38 + p)) % (
                                                 ! result + 232L)));
  return result;
}


