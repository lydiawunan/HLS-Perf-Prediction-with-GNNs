#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205511768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p)
{
  long v_9;
  unsigned int v_7;
  float v_5;
  float v;
  unsigned int result;
  v_7 = 624670652U;
  v = (float)p;
  v_5 = (float)(4294967193U & v_7);
  v_9 = (long)p;
  result = (unsigned int)(~ v_9);
  result = (unsigned int)((float)p + ((float)((unsigned int)p - result) * (
                                      v - v_5) + (float)v_7));
  return result;
}


