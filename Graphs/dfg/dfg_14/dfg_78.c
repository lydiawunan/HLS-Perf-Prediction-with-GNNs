#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 404869937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, long p_5, unsigned char p_15)
{
  char v_13;
  short v_11;
  unsigned short v_9;
  signed char v_7;
  float v;
  int result;
  v_13 = (char)p_5;
  v_11 = (short)p_15;
  v_7 = (signed char)p_5;
  v_9 = (unsigned short)(~ (signed char)-32);
  v = (float)(((unsigned long)(- p_5 / (! p_5 + 773L)) - (3488028512UL - (unsigned long)(
                                                          (unsigned int)v_7 + 4637U))) + (unsigned long)(
              (int)v_9 / ((((int)v_11 - (int)v_13) - ((int)p_15 + 8)) + 300)));
  result = (int)(- v);
  result = (-1 - result) % ((int)p + 313);
  return result;
}


