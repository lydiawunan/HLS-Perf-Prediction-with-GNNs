#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 36966817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned int p_7, int p_11)
{
  unsigned long v_13;
  float v_9;
  short v_5;
  float v;
  unsigned int result;
  v_13 = (unsigned long)p;
  v_5 = (short)v_13;
  v_9 = (float)p_11;
  v = (float)((unsigned int)((-100. - ((double)p - 599.71561055)) + (double)(
                             39193LL + (long long)(~ v_5))) >> (- (- p_7 % (unsigned int)(
                                                                   ((int)v_5 - (int)((short)v_9)) + 565)) & 31U));
  result = (unsigned int)v;
  return result;
}


