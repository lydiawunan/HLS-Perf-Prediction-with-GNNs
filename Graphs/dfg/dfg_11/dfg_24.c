#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 407096893
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long p_5, char p_9)
{
  long v_15;
  unsigned long v_13;
  float v_11;
  unsigned int v_7;
  unsigned short v;
  unsigned int result;
  v_15 = 981571L;
  v_13 = 13001UL;
  v_7 = 4013760933U;
  result = (unsigned int)p_9;
  v = (unsigned short)(~ v_13 - (unsigned long)v_15);
  v_11 = (float)(! (~ (~ (-(short)24989))));
  v_7 = ! v_7;
  result = (unsigned int)((unsigned long)((unsigned int)v - result / (
                                                            (unsigned int)p + 1002U)) - 
                          (unsigned long)(p_5 * (long)p) * (unsigned long)(
                          (v_7 * (unsigned int)p_9) * (unsigned int)(- v_11)));
  return result;
}


